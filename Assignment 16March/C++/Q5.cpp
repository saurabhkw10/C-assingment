#include<iostream>
using namespace std;
class Rectangle{
    private:
    int a,b,ans;
    public:
    Rectangle(int a,int b)
    {
a=a;
b=b;
    }
    int in(){
         ans=a*b;
         return ans;
    }
    void out()
    {
       cout<<"R1: "<<ans;
    }
};
int main(){
   Rectangle r1(4,5);
    r1.out();
Rectangle r1(8,5);
   r1.out();

}
