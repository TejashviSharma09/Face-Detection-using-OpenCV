#ifndef VISUALS_FACEDETECTOR_H
#define VISUALS_FACEDETECTOR_H
#include <opencv4/opencv2/dnn.hpp>

class FaceDetector {
public:
    explicit FaceDetector();

    std::vector<cv::Rect> detect_face_rectangles(const cv::Mat &frame);

private:
    cv::dnn::Net network_;

    const int input_image_width_;
    
    const int input_image_height_;
    
    const double scale_factor_;
    
    const cv::Scalar mean_values_;
    
    const float confidence_threshold_;

};


#endif 
