#include "shape.h"

Shape::Shape() : Shape(1) {
    //Default
}

Shape::Shape(double width) : width_(width) {
    //Custom
}

double Shape::getWidth() const {
    return width_;
}