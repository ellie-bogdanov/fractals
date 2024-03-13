#include "mandelbrot_set.hpp"
#include <cmath>

mandelbrot_set::mandelbrot_set(std::complex<double> complex_const) : complex_const(complex_const) {
}

void mandelbrot_set::generate_set() {
    for (int x = 0; x < mandelbrot_consts::WINDOW_HEIGHT; ++x) {
        for (int y = 0; y < mandelbrot_consts::WINDOW_WIDTH; ++y) {
            double imag = mandelbrot_consts::REAL_RANGE_START + ((x * 1.0) / (mandelbrot_consts::WINDOW_WIDTH * 1.0)) * (mandelbrot_consts::REAL_RANGE_END - mandelbrot_consts::REAL_RANGE_START);
            double real = mandelbrot_consts::IMAG_RANGE_START + ((y * 1.0) / (mandelbrot_consts::WINDOW_HEIGHT * 1.0)) * (mandelbrot_consts::IMAG_RANGE_END - mandelbrot_consts::IMAG_RANGE_START);
            std::complex<double> c(real, imag);
            int iters = calc_sequence(c, complex_const);
            int color = 255 - (iters * 255 / mandelbrot_consts::NUM_OF_ITERATIONS);
            if (iters >= mandelbrot_consts::NUM_OF_ITERATIONS)
                color = 0;

            grid[x][y] = color;
        }
    }
}

int mandelbrot_set::calc_sequence(const std::complex<double> &check_point, std::complex<double> z) {
    int i = 1;
    while (i < mandelbrot_consts::NUM_OF_ITERATIONS && std::abs(z) <= mandelbrot_consts::MAX_DIST) {
        z = (z * z) + check_point;
        ++i;
    }
    return i;
}

void mandelbrot_set::create_matrix() {
    matrix = cv::Mat(mandelbrot_consts::WINDOW_WIDTH, mandelbrot_consts::WINDOW_HEIGHT, CV_8UC3, mandelbrot_consts::BG_COLOR);
    for (size_t i = 0; i < matrix.cols; ++i) {
        for (size_t j = 0; j < matrix.rows; ++j) {
            if (grid[i][j] == 0) {
                matrix.at<cv::Vec3b>(i, j)[0] = 0;
                matrix.at<cv::Vec3b>(i, j)[1] = 0;
                matrix.at<cv::Vec3b>(i, j)[2] = 0;
            } else {
                matrix.at<cv::Vec3b>(i, j)[0] = grid[i][j];
                matrix.at<cv::Vec3b>(i, j)[1] = grid[i][j];
                matrix.at<cv::Vec3b>(i, j)[2] = grid[i][j];
            }
        }
    }
}