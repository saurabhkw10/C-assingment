#include <iostream>
using namespace std;

class Rectangle 
{
	private:
    	float length;
    	float breadth;
	public:
    	Rectangle(float l, float b) 
		{
        	length = l;
        	breadth = b;
    	}
    float Area() 
	{
        return length * breadth;
    }
};
int main() 
{
    Rectangle rectangle1(4, 5);
    Rectangle rectangle2(5, 8);
    cout << "Area of rectangle 1: " << rectangle1.Area() << endl;
    cout << "Area of rectangle 2: " << rectangle2.Area() << endl;
    return 0;
}
