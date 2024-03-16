#include <iostream>
using namespace std;

class Area 
{
	private:
    	float length;
    	float breadth;
	public:
	    void setDim(float len, float brd) 
		{
    	    length = len;
        	breadth = brd;
    	}

    float getArea() 
	{
        return length * breadth;
    }
};
int main() 
{
    float len, brd;
    Area rect;
    cout << "Enter length of the rectangle: ";
    cin >> len;
    cout << "Enter breadth of the rectangle: ";
    cin >> brd;
    rect.setDim(len, brd);
    cout << "Area of the rectangle is: " << rect.getArea() << endl;
    return 0;
}
