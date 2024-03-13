#include "complementary_set.hpp"

complementary_set::complementary_set(std::complex<double> complex_const) : mandelbrot_set(complex_const) {
}

void complementary_set::generate_set() {
    for (int x = 0; x < mandelbrot_consts::WINDOW_HEIGHT; ++x) {
        for (int y = 0; y < mandelbrot_consts::WINDOW_WIDTH; ++y) {
            double imag = mandelbrot_consts::REAL_RANGE_START + ((x * 1.0) / (mandelbrot_consts::WINDOW_WIDTH * 1.0)) * (mandelbrot_consts::REAL_RANGE_END - mandelbrot_consts::REAL_RANGE_START);
            double real = mandelbrot_consts::IMAG_RANGE_START + ((y * 1.0) / (mandelbrot_consts::WINDOW_HEIGHT * 1.0)) * (mandelbrot_consts::IMAG_RANGE_END - mandelbrot_consts::IMAG_RANGE_START);
            std::complex<double> z(real, imag);
            int iters = mandelbrot_set::calc_sequence(complex_const, z);
            int color = 255 - (iters * 255 / mandelbrot_consts::NUM_OF_ITERATIONS);
            if (iters >= mandelbrot_consts::NUM_OF_ITERATIONS)
                color = 0;

            grid[x][y] = color;
        }
    }
}