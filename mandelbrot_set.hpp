#pragma once

#include <opencv2/opencv.hpp>

namespace mandelbrot_consts {
    static const int WINDOW_WIDTH = 1000;
    static const int WINDOW_HEIGHT = 1000;
    static const cv::Scalar SET_COLOR(0, 0, 0);
    static const cv::Scalar BG_COLOR(255, 255, 255);
    static const double MAX_DIST = 2;
    static const double COMPLEX_START_RANGE = -2;
    static const double COMPLEX_END_RANGE = 2;
    static const int NUM_OF_ITERATIONS = 30;
    static const cv::Point origin(0, 0);

}

struct mandelbrot_set {
    int grid[mandelbrot_consts::WINDOW_WIDTH][mandelbrot_consts::WINDOW_WIDTH];

    mandelbrot_set();
    static int calc_sequence(const std::complex<double> &check_point);
    cv::Mat create_mandelbrot_set_matrix();
};