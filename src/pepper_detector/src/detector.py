# -------------------------------------------------------------------
# *
# * This module has been developed by Group 18 @ Cognitive Robotics DIEM.UNISA.
# *
# * Title:	 detector.py
# * Author:	Fina, Puzo, Russomanno, Ventre
# * Org.: 	UNISA - DIEM - Artificial Intelligence - Cognitive Robotics - Group 18
# * Date:   23 Nov, 2020
# *
# * This file implements the base class used to perform detection, which allows to
# * load a pre-trained Tensorflow object detector model and perform detection on a
# * a given image.
# *
# * -------------------------------------------------------------------
 

# -------- LOADING REQUIRED LIBRARIES --------
import cv2
import os
import tensorflow as tf
assert(int(tf.__version__.split('.')[0]) >= 2)
import numpy as np

# -------- CLASS DECLARATION --------
class Detector():
    def __init__(self,model_path):
        """This method initializes the object detector, loading a pre-trained model saved in a particular path on the file system

        Args:
            model_path (String): absolute path to the saved model
        """        
        self.detect_fn = tf.saved_model.load(model_path)

    def __call__(self, img, threshold=0.5):
        """This method allows to run detections on the image passed as argument. All the detections above the threshold are returned.

        Args:
            img (sensor_msgs/Image): image on which the detector has to run inference
            threshold (float, optional): threshold used for selecting the detections of interest. Defaults to 0.5.

        Returns:
            (dict): dictionary containing the results of the detection which respects the given threshold
        """
        # convert image from BGR to RGB
        img = img[:,:,::-1]
        # convert image in tensor
        input_tensor = tf.convert_to_tensor(img)
        # add "Batch size" dimension
        input_tensor = input_tensor[tf.newaxis, ...]
        # run inference on the image
        detections = self.detect_fn(input_tensor)
        # take the numebr of detections above the threshold
        num_above_thresh = np.sum( detections['detection_scores'] > threshold )
        # remove "num_detections" field from the dict because we don't care about it
        detections.pop('num_detections')
        # take detections above the threshold
        detections = {key: value[0, :num_above_thresh].numpy() for key, value in detections.items()}
        # convert classes IDs in integers
        detections['detection_classes'] = detections['detection_classes'].astype(np.int64)
        # returns dict so build
        return detections
