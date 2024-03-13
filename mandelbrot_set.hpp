#pragma once

#include <array>
#include <opencv2/opencv.hpp>

namespace mandelbrot_consts {
    static const int WINDOW_WIDTH = 1000;
    static const int WINDOW_HEIGHT = 1000;
    static const cv::Scalar BG_COLOR(255, 255, 255);
    static const double MAX_DIST = 4.0;
    static const double REAL_RANGE_START = -2;
    static const double REAL_RANGE_END = 2;
    static const double IMAG_RANGE_START = -2;
    static const double IMAG_RANGE_END = 2;

    static const double COMPLEX_START_RANGE = -1;
    static const double COMPLEX_END_RANGE = 1;
    static const int NUM_OF_ITERATIONS = 200;

}

struct mandelbrot_set {
    // int grid[mandelbrot_consts::WINDOW_WIDTH][mandelbrot_consts::WINDOW_WIDTH];
    // std::vector<std::vector<int>> grid;
    std::complex<double> complex_const;
    std::array<std::array<double, mandelbrot_consts::WINDOW_WIDTH>, mandelbrot_consts::WINDOW_HEIGHT> grid;
    cv::Mat matrix;

    mandelbrot_set(std::complex<double> complex_const);
    static int calc_sequence(const std::complex<double> &check_point, std::complex<double> z);
    virtual void generate_set();
    void create_matrix();
};