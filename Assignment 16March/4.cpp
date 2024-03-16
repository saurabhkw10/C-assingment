#include <iostream>
using namespace std;

class Triangle 
{
	private:
 	   int side1, side2, side3;

	public:
    	Triangle(int s1, int s2, int s3) : side1(s1), side2(s2), side3(s3) {}

    int calculateArea() 
	{
        int s = (side1 + side2 + side3) / 2; 
        int area = s * (s - side1) * (s - side2) * (s - side3);
        return area > 0 ? intSqrt(area) : 0; 
    }

    int calculatePerimeter() 
	{
        return side1 + side2 + side3;
    }

    int intSqrt(int x) 
	{ 
        int ans = x / 2;
        for (int i = 0; i < 10; ++i) { 
            ans = (ans + x / ans) / 2;
        }
        return ans;
    }
};

int main() 
{
    Triangle tri(3, 4, 5);

    cout << "Area of the triangle: " << tri.calculateArea() << " square units" << endl;
    cout << "Perimeter of the triangle: " << tri.calculatePerimeter() << " units" << endl;

    return 0;
}
