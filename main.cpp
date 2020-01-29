#include <iostream>
#include "Vec2.h"
using namespace std;

int main(){
    Vec2F v1{1.0, 2.0}, v2{3.0, 4.0}, v3{4.0, -1.0}, v4{-2.0, -5.0f};

    // OK
    // Vec2F a = v1 + v2;  // (4.0, 6.0)
    // Vec2F b = v1 - v2;  // (-2.0, -2.0)
    // Vec2F c = v1 * v2;  // (3.0, 8.0)
    // Vec2F d = v1 / v2;  // (0.33..., 0.5)
    // cout << a.x << " " << a.y << endl;
    // cout << b.x << " " << b.y << endl;
    // cout << c.x << " " << c.y << endl;
    // cout << d.x << " " << d.y << endl;
    // (v1 + v2) = v3;  //error 

    v1 += v2;
    v1 += v2;
    v1 += v2;
    v1 += v2;
    // (v1 += v2) += v3; // error
    cout << v1.x << " " << v1.y << endl;
}