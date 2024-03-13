#pragma once
#include "mandelbrot_set.hpp"

struct complementary_set : public mandelbrot_set {
    complementary_set(std::complex<double> complex_const);
    void generate_set() override;
};