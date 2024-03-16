#include <iostream>

using namespace std;

int main()

{

int a[100],size,index,min,max;

cout<<"Enter size of array:";

cin>>size;

cout<<"\nEnter "<<size<<" elements";

for(index=0;index<size;index++)

{

cout<<"\nEnter element at "<<index<<":";

cin>>a[index];

}

min=max=a[0];//refrence

for(index=1;index<size;index++)

{

if(a[index]<min)

min=a[index];

else if(a[index]>max)

max=a[index];

}

cout<<"Min:"<<min<<"\t Max:"<<max;

return 0;

}