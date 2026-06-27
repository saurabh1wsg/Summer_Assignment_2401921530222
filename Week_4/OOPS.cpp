#include <iostream>
using namespace std;

class Box {
protected:
    float length, breadth;

public:
    Box(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }
};

class Box3D : public Box {
private:
    float height;

public:
    Box3D(float l, float b, float h) : Box(l, b) {
        height = h;
    }

    float volume() {
        return length * breadth * height;
    }
};

int main() {
    float l, b, h;

    cout << "Enter length breadth and height: ";
    cin >> l >> b >> h;

    Box3D obj(l, b, h);

    cout << "Area = " << obj.area() << endl;
    cout << "Volume = " << obj.volume() << endl;

    return 0;
}
