
#ifndef FRACTAL_TREE_HPP
#define FRACTAL_TREE_HPP
#include <opencv2/opencv.hpp>

namespace fractal_tree_consts {
    const float WINDOW_WIDTH = 1000;
    const float WINDOW_HEIGHT = 800;
    const int BG_BLUE = 255;
    const int BG_GREEN = 255;
    const int BG_RED = 255;
    const int LINE_BLUE = 0;
    const int LINE_GREEN = 0;
    const int LINE_RED = 0;
    const int LINE_THICKNESS = 2;
    const float ROOT_START_X = WINDOW_WIDTH / 2;
    const float ROOT_START_Y = WINDOW_HEIGHT;
    const float START_LENGTH = 200;
    const float START_ANGLE = M_PI_2;
    const float LENGTH_CHANGE_RATE = 0.67;
    const float ANGLE_CHANGE_RATE = M_PI_4;
} // namespace fractal_tree_consts

struct fractal_tree {
    float starting_point_x;
    float starting_point_y;
    float ending_point_x;
    float ending_point_y;
    float length;
    float angle;

    cv::Point start_point;
    cv::Point end_point;

    fractal_tree *left;
    fractal_tree *right;

    fractal_tree(float starting_point_x, float starting_point_y, float length, float angle);
    fractal_tree(cv::Point start_point, float length, float angle);
    fractal_tree();
};

void create_tree(fractal_tree *branch);

void draw_fractal_tree(fractal_tree *tree, cv::Mat &matrix);

#endif
