#include<iostream>
#include <cstring>
#include<string.h>
using namespace std;
int main()
{
    char str[] = "This is a c-StyleString";
    cout <<"Enter the string:" << endl;
    cin >> str;
    cout << "Reverse of the given string is: " << strrev(str);
    return 0;
}