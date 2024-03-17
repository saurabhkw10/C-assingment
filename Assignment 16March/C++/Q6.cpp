#include<iostream>
using namespace std;
class Area{
    private:
    int a,b,ans;
    public:
   void setDim(){
    cout<<"\nEnter the value: ";
    cin>>a>>b;
     ans=a*b;
   }
   void getArea(){
      cout<<"\nA: "<<a<<"\nB: "<<b<<"\nAns: "<<ans;
   }
};
main()
{
    Area r1;
    r1.setDim();
    r1.getArea();
    return 0;
}
