#include <iostream>
using namespace std;
class Triangle{
    private:
    double  a,b,c;
    public:
    Triangle(double a1,double b1,double c1){
        a=a1;
        b=b1;
        c=c1;
    }
   double perimeter(){
        return a+b+c;
    }
     double area(){
         double s = perimeter() / 2;
      
    }
    void print(){
        cout<<"\nPerimeter: "<<perimeter();
        cout<<"\nArea: "<<area();
    }
};
main(){
    Triangle t1(3,4,5);
    t1.print();
    return 0;
}
