#include <iostream>
#include <cmath>

class Triangle {
private:
    double a, b, c;

public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() {
        return a + b + c;
    }
};

int main() {
    Triangle triangle(3, 4, 5);
    std::cout << "Area: " << triangle.area() << std::endl;
    std::cout << "Perimeter: " << triangle.perimeter() << std::endl;
    return 0;
}