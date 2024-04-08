#include <iostream>
#include "cube.h"

namespace basic {
    // Custom Default Ctor
    cube::cube() {
        len_ = 5;
        std::cout << "Custom Default Ctor applied" << std::endl;
    }

    // Custom Single Argument Ctor
    cube::cube(double len) {
        len_ = len;
        std::cout << "Created $" << getVol() << std::endl;
    }

    // Custom Copy Ctor
    cube::cube(const cube & obj) { //ampersand & is a reference and it is used for passing object as argument
        len_ = obj.len_;
        //std::cout << "Custom Copy Ctor applied" << std::endl;
        std::cout << "Created $" << getVol() << " via copy" << std::endl;
    }

    // Custom Assignment Operator
    cube & cube::operator=(const cube & obj) {
        len_  = obj.len_;
        //std::cout << "Custom Assignment applied" << std::endl;
        std::cout << "Transformed $" << getVol() << " -> $" << obj.getVol() << std::endl;
        return *this; //Dereference value of instance (object) of the class itself; this technique can also be used for method chaining
    }

    // Custom Destructor
    cube::~cube() {
        std::cout << "Destroyed $" << getVol()  << std::endl;
    }

    double cube::getVol() const{
        return len_*len_*len_;
    }

    double cube::getTotArea() const{
        return 6*len_*len_;
    }

    void cube::setLen(double len) {
        len_ = len;
    }
}