#include <iostream>
#include "Vec2.h"
using namespace std;

int main(){
    Vec2F v1{1.0, 2.0}, v2{3.0, 4.0};
    // Vec2f a = v1 + v2;
    // Vec2f b = v1 - v2;
    // Vec2f c = v1 * v2;
    // Vec2f d = v1 / v2;

    v1 += v2;
    v1 += v2;
    v1 += v2;
    v1 += v2;

    // cout << a.x << " " << a.y << endl;
    // cout << b.x << " " << b.y << endl;
    // cout << c.x << " " << c.y << endl;
    // cout << d.x << " " << d.y << endl;

    cout << v1.x << " " << v1.y << endl;
}