#include "mandelbrot_set.hpp"
#include <cmath>

mandelbrot_set::mandelbrot_set() {
    for (int x = 0; x < mandelbrot_consts::WINDOW_WIDTH; ++x) {
        for (int y = 0; y < mandelbrot_consts::WINDOW_HEIGHT; ++y) {

            double real = mandelbrot_consts::COMPLEX_START_RANGE + ((x * 1.0) / (mandelbrot_consts::WINDOW_WIDTH * 1.0)) * (mandelbrot_consts::COMPLEX_END_RANGE - mandelbrot_consts::COMPLEX_START_RANGE);
            double imag = mandelbrot_consts::COMPLEX_START_RANGE + ((y * 1.0) / (mandelbrot_consts::WINDOW_HEIGHT * 1.0)) * (mandelbrot_consts::COMPLEX_END_RANGE - mandelbrot_consts::COMPLEX_START_RANGE);

            std::complex<double> c(real, imag);

            int iters = calc_sequence(c);
            int color = 255 - (iters * 255 / mandelbrot_consts::NUM_OF_ITERATIONS);

            grid[x][y] = color;
        }
    }
}

int mandelbrot_set::calc_sequence(const std::complex<double> &check_point) {
    std::complex<double> sequence(0, 0);
    int i = 0;
    while (i < mandelbrot_consts::NUM_OF_ITERATIONS && std::abs(sequence) <= mandelbrot_consts::MAX_DIST) {
        sequence = (sequence * sequence) + check_point;
        ++i;
    }

    return i;
}

cv::Mat mandelbrot_set::create_mandelbrot_set_matrix() {
    cv::Mat matrix(mandelbrot_consts::WINDOW_HEIGHT, mandelbrot_consts::WINDOW_WIDTH, CV_8UC3, mandelbrot_consts::BG_COLOR);
    for (size_t i = 0; i < matrix.cols; ++i) {
        for (size_t j = 0; j < matrix.rows; ++j) {
            matrix.at<cv::Vec3b>(i, j)[0] = grid[i][j];
            matrix.at<cv::Vec3b>(i, j)[1] = grid[i][j];
            matrix.at<cv::Vec3b>(i, j)[2] = grid[i][j];
        }
    }

    return matrix;
}