#include "shape.h"
#include "triangle.h"

namespace basic {
    
    triangle::triangle(double width, double height) : Shape(width) {
        height_ = height;
    }

    /**
     * Returns area of a triangle.
     *
     * This is how you create functions description.
     *
     * @param -
     *
     * @return The area of triangle in floating point precision.
    **/
    double triangle::getArea() const {
        return getWidth() * height_ / 2.0;
    }
}