#include "mandelbrot_set.hpp"

int main(int, char **) {
    mandelbrot_set m_set;
    cv::Mat matrix = m_set.create_mandelbrot_set_matrix();

    cv::namedWindow("mandelbrot set");
    cv::imshow("mandelbrot set", matrix);
    cv::waitKey(0);

    return 0;
}
