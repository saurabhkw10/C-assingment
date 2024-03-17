#include <iostream>
using namespace std;
class Student{
    public:
    int rollno,phoneno;
    char name[40],address[40];
    public:
    void in(){
        cout<<"\nEnter the:";
        cin >>rollno>>phoneno>>name>>address;
    }
    void out(){
        cout<<"\nRollNo:"<<rollno<<"\nphoneno: "<<phoneno<<"\nName: "<<name<<"\nAddress: "<<address;
    }
};

int main()
{
Student s1,s2;
s1.in();
s1.out();
s2.in();
s2.out();
    return 0;
}
