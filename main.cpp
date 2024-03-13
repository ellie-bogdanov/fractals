#include "complementary_set.hpp"
#include "mandelbrot_set.hpp"

int main() {
    std::complex<double> c(-0.8, 0.156); // julia set, change to other values to see different shapes
    complementary_set m_set(c);          // change to mandelbrot_set to see it instead of julia set and ideally c to (0, 0) although not necessary
    m_set.generate_set();
    m_set.create_matrix();
    cv::namedWindow("mandelbrot set");
    cv::imshow("mandelbrot set", m_set.matrix);
    cv::waitKey(0);

    return 0;
}
