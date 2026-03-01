#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    void setValues(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.setValues(5, 4);
    cout << "Area = " << r.area();
}