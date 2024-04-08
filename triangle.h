#pragma once

#include "shape.h"

namespace basic {
    class triangle : public Shape {
        public:
            triangle(double height, double width);
            double getArea() const;
        private:
            double height_;
    };
}