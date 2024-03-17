#include <iostream>
using namespace std;
class Student{
    public:
    int rollno;
    char name[40];
    public:
    void in(){
        cout<<"\nEnter the:";
        cin >>rollno>>name;
    }
    void out(){
        cout<<"\nRollNo:"<<rollno<<"\nName: "<<name;
    }
};

int main()
{
Student s1;
s1.in();
s1.out();
    return 0;
}
