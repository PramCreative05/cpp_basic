#include <iostream>
#include "cube.h"
#include "triangle.h"

//Use this for easy code
using namespace std;
using namespace basic;

void foo(cube cube) {
    //Do nothing; TO show passing an object will invoke copy ctor
}

cube bar() {
    cube newLocalCube;
    return newLocalCube;
}

double cube_on_heap() {
    cube * c = new cube(5);
    cube * b = new cube();
    delete c;
    c = nullptr; //Always assign null pointer after delete
    return b->getVol(); 
}

double cube_on_stack() {
    cube a(8);
    return a.getVol();
}

template <typename T>
T maks(T a, T b) {
    if(a > b) {return a;}
    return b;
}

int main() {
    // CREATE NEW OBJECT
    //cube newCube; //default 5 with custom default ctor
    cube Cube1(10); //with custom single param ctor

    /*
        Custom copy ctor will active given the following condition:
        1. Passing an object as a param (by value)
        2. Returning an object from a function (by value)
        3. Init a new object
    */

    // 1. Passing an object
    //foo(newCube); //Custom Copy Ctor

    // 2. Returning an object from a function
    //cube copiedCube = bar();

    // 3. Init a new object
    //cube initNewCube = newCube;

    //Invoke Copy Ctor
    //cube alice_wallet = newCube;
    
    // Invoke assignment operator
    //cube bruce_wallet;
    //bruce_wallet = newCube;


    /*
        Storage by reference (&):
        > Zero size variable, only an alias, not real in the memory
        > When init, you need to alias something that already been created
    */

    //Create reference as alias so no need to create new obj, but transfer the ownership
    cube & cindy_wallet = Cube1;

    //By pointer
    cube Cube2(5);
    cube * daniel_wallet = &Cube2;

    //Default Constructed Obj
    cout << "Volume: " << Cube1.getVol() << endl;

    cube_on_heap();
    cube_on_stack();
    

    // double len = 0.0;
    // cin >> len;
    // Cube1.setLen(len);

    // cout << "Volume: " << Cube1.getVol() << endl;


    /* Templated Function Test*/

    cout << "max(5,3) = " << maks(5,3) << endl;
    cout << "max('a', 'z') = " << maks('a', 'z') << endl;

    /* Inheritance Test */
    // !!! Always update the make file after you add new file
    triangle segitiga(2, 5);
    cout << "Triangle Area derived from shape: " << segitiga.getArea() << endl;

    
    return 0;
}

//Easy compile: g++ -o cube main.cpp cube.cpp

