#include<iostream>
using namespace std;
class Volume{
    private:
    int l,b,h,ans;
    public:
    void in(){
        cout<<"\nEnter the length";
        cin>>l;
        cout<<"\nEnter the breadth";
        cin>>b;
        cout<<"\nEnter the height";
        cin>>h;
        ans=l*b*h;
    }
    void out(){
        cout<<"\n Volume: "<<ans;
    }
};
main(){
    Volume v1;
    v1.in();
    v1.out();
}
