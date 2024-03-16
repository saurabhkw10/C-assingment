#include <iostream>
#include<string>

class Student 
{
public:
    int roll_number;
    long phone_number;
    std::string address;

    Student(int roll, long phone, std::string addr) 
	{
        roll_number = roll;
        phone_number = phone;
        address = addr;
    }

    void print() {
        std::cout << "Roll number: " << roll_number << std::endl;
        std::cout << "Phone number: " << phone_number << std::endl;
        std::cout << "Address: " << address << std::endl;
    }
};

int main() {
    Student sam(1, 1234567890, "123 Main St.");
    Student john(2, 9876543210, "456 Elm St.");

    sam.print();
    john.print();

    return 0;
}