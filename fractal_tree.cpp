#include "fractal_tree.hpp"
#include <cmath>

fractal_tree::fractal_tree(float starting_point_x, float starting_point_y, float length, float angle) : starting_point_x(starting_point_x), starting_point_y(starting_point_y), length(length), angle(angle) {
    ending_point_x = starting_point_x + length * cos(angle);
    ending_point_y = starting_point_y - length * sin(angle);
    left = nullptr;
    right = nullptr;
}
fractal_tree::fractal_tree() {
    start_point.x = fractal_tree_consts::ROOT_START_X;
    start_point.y = fractal_tree_consts::ROOT_START_Y;
    length = fractal_tree_consts::START_LENGTH;
    angle = fractal_tree_consts::START_ANGLE;
    end_point.x = start_point.x + length * cos(angle);
    end_point.y = start_point.y - length * sin(angle);
    left = nullptr;
    right = nullptr;
}

fractal_tree::fractal_tree(cv::Point start_point, float length, float angle) : start_point(start_point), length(length), angle(angle) {
    end_point.x = start_point.x + length * cos(angle);
    end_point.y = start_point.y - length * sin(angle);
    left = nullptr;
    right = nullptr;
}

void create_tree(fractal_tree *branch) {
    if (branch->length < 4)
        return;

    float angle_left = branch->angle - fractal_tree_consts::ANGLE_CHANGE_RATE;
    float angle_right = branch->angle + fractal_tree_consts::ANGLE_CHANGE_RATE;

    float length = branch->length * fractal_tree_consts::LENGTH_CHANGE_RATE;

    branch->left = new fractal_tree(branch->end_point, length, angle_left);
    branch->right = new fractal_tree(branch->end_point, length, angle_right);
    create_tree(branch->left);
    create_tree(branch->right);
}

void draw_fractal_tree(fractal_tree *tree, cv::Mat &matrix) {
    if (tree->left == nullptr || tree->right == nullptr)
        return;
    cv::Scalar line_color(fractal_tree_consts::LINE_BLUE, fractal_tree_consts::LINE_GREEN, fractal_tree_consts::LINE_RED);
    cv::line(matrix, tree->start_point, tree->end_point, line_color, fractal_tree_consts::LINE_THICKNESS);
    draw_fractal_tree(tree->left, matrix);
    draw_fractal_tree(tree->right, matrix);
}