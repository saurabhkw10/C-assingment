#include <iostream>

//sort array of size n

using namespace std;

int main()

{

int a[100],size,index,i,j,temp;

//flag=0 no/false 1 yes/true

cout<<"Enter size of array:";

cin>>size;

cout<<"\nEnter "<<size<<" elements";

for(index=0;index<size;index++)

{

cout<<"\nEnter element at "<<index<<":";

cin>>a[index];

}

for(i=0;i<size-1;i++)

{

for(j=0;j<size-1;j++)

{

if(a[j]>a[j+1])//compare

{

temp=a[j];

a[j]=a[j+1];

a[j+1]=temp;

}

}

}

cout<<"\nEntered "<<size<<" elements are\n";

for(index=0;index<size;index++)

{

cout<<a[index]<<",";

}

return 0;

}