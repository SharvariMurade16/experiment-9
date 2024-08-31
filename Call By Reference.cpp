//Sharvari Murade
//23070123088
#include <iostream>
using namespace std;
void swap (int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside swap a: "<<a<<" b: "<<b<<endl;
}

int main()
{
   int a=7,b=9;
   cout<<"Before swap a: "<<a<<" b: "<<b<<endl;
   swap(a,b);
   cout<<"After swap a:"<<a<<" b:"<<b<<endl;
    return 0;
}
