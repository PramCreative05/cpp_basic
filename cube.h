#pragma once

namespace basic {
    class cube {
        public:

            /* EVERY OBJECT NEEDS TO BE BUILT FIRST BY A CONSTRUCTOR, THEN LATER YOU CAN ASSIGN AND CANNOT RECONSTRUCT IT*/

            /*
                Class constructor:
                When an instance of a class is created in C++, the class constructor lets us program
                exactly the initial state of the object that's created. 

                Automatic => if you don't specify: random value
                Custom default, name of function is the same with the name of the class, can be called without bracket
                Custom Single/Double/etc arguments, specified; called with arguments
            */
            
            cube(); //custom default ctor
            cube(double len); //custome single params

            /*
                Copy Constructor:
                a copy ctor is a special type of constructor that allows us to make a copy of an existing object. 
                Copy the contents of all member variables

                > Automatic
                > Custom Copy ctor: has exactly one argument of the same type of the class and passing an object
            */

            cube(const cube & obj);

            /*
                Assignment Operator:
                Because after the obj is constructed you cannot reconstruct it, so the only way to change the value is to assign a new value
                It can be done automatically, but also if you want to specify multiple obj or allocate a resource, then you need to define
                a custom asssignment operator:

                1. Should be public member
                2. function name is operator=
                3. Has return value of a reference of the class' type (.....&)
                4. Has exactly one arguments of const reference of the class type
            */

            cube & operator=(const cube & obj);

            /*
                Destructor:
                At the end of the class lifecycle to cleanup, either the defined custom destructor,
                or invoke by delete if the class is in the heap.
                1. No need return
                2. Use tilde ~
            */

           ~cube();

            double getVol() const; //Not alter later
            double getTotArea() const;
            void setLen(double len);
        private:
            double len_;
    };
}