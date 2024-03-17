#include<iostream>
using namespace std;
class Rectangle{
    private:
    int a,b,ans;
    public:
    Rectangle(int a1,int b1)
    {
    a=a1;
    b=b1;
    }
    void in(){
        cout<<"\nArea: ";
         ans=a*b;
    }
    void out()
    {
       cout<<"R1: "<<ans;
    }
};
main()
{
   Rectangle r1(9,5);
    r1.in();
    r1.out();

return 0;
};
