//sharvari murade
//23070123088
#include <iostream>
using namespace std;
int main()
{
   int a , *ptr;
   a=10;
   ptr=&a;
  // *ptr=a;
   cout<<"The value pointed by *ptr is "<<*ptr<<endl;
   cout<<" the value of a is"<< a<<endl;
   cout<<"The value in pointer variable ptr is"<<ptr<<endl;
   cout<<"The address of variable a is "<<&a<<endl;
   cout<<"after increment the value in pointer variable ptr is: "<<(++ptr)<<endl;
   // for float
   float b,*ptr1;
   b=10.12;
   ptr1=&b;
  // *ptr=a;
   cout<<"The value pointed by *ptr1 is "<<*ptr1<<endl;
   cout<<" the value of b is"<< b<<endl;
   cout<<"The value in pointer variable ptr1 is"<<ptr1<<endl;
   cout<<"The address of variable b is "<<&b<<endl;
   cout<<"after increment the value in pointer variable ptr is: "<<(++ptr1)<<endl;
   //for character
  char c='a';
  char *ptr3=&c;
  cout<<"The value pointed by *ptr3 is "<<*ptr3<<endl;
   cout<<" the value of c is "<< c<<endl;
   cout<<"The value in pointer variable ptr3 is"<<(void *)ptr3<<endl;
   cout<<"The address of variable c is "<<(void *)&c<<endl;
   cout<<"after increment the value in pointer variable ptr is: "<<(void *)(++ptr3)<<endl;
    return 0;
}
