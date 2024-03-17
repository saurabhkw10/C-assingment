#include<iostream>
#include<string.h>
using namespace std;
class Employe{
    private:
    string name;
    int year;
    float salary;
    string address;
    public:
    Employe(){
        
    }
    Employe(string name1, int year1, float salary1, string address1){
        name=name1;
        year = year1;
        salary = salary1;
        address=address1;
    }
    void in() const{
        cout << "\nName: " << name << "\nYear: " << year << "\nSalary: " << salary << "\nAddress: " << address;
    }
};
int main(){
   Employe e1("Rushikesh", 2000, 2000, "Savarde");
   e1.in();
    Employe e2("Pratik", 2000,30000, "Kolhapur");
   e2.in();
    Employe e3("Vaibhav", 2001, 25000, "Sangli");
   e3.in();
   return 0;
}
