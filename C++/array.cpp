#include <iostream>

#include<algorithm>

#include <climits>

using namespace std;

int main()

{

int n;

cout<<"Enter the range of the array-"<<endl;

cin>>n;

int arr[n];

cout<<"Enter array elements"<<endl;

for(int i=0;i<n;i++)

{

cin>>arr[i];

}

cout<<"Array elements are:["<<endl;

for(int i=0;i<n;i++)

cout<<arr[i]<<" ";

cout<<endl;

//Finding minimum and maximum….

int min = INT_MAX, max = INT_MIN;

for (int i: arr)

{

if (i < min) {

min = i;

}

if (i > max) {

max = i;

}

}

std::cout << "The min element is " << min << std::endl;

std::cout << "The max element is " << max << std::endl;

return 0;

}