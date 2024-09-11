# Experiment-9

### AIM-
To effectively use pointers in C++ for accessing array elements and finding the addresses of different data types, focus on mastering pointer operations.

### Software Used-
VS code

### Problem Statement-
1.) Write a c++ program to initialize pointers of different data types and print the required values.

2.) Write a c++ program to access elements of array using pointer.

3.) Write a c++ program to swap the numbers using call by value.

4.) Write a c++ program to swap the numbers using call by reference.

# Theory-
Pointers in C++ allow direct manipulation of memory addresses, which provides greater flexibility in handling data. They are essential for efficiently managing dynamic data structures and simulating call-by-reference.

Direct Memory Access: Pointers allow direct manipulation of memory locations, which can be more efficient than working with copies of data.

Dynamic Memory Management: Pointers are crucial for working with dynamic memory allocation (e.g., using new and delete in C++), which allows you to create and manage data structures like linked lists, trees, and more complex data structures at runtime.

Pointer Arithmetic: Pointers support arithmetic operations (e.g., incrementing or decrementing) to traverse arrays and other data structures efficiently.

Call by Value:<br>
In call-by-value, a copy of the function's arguments is created and stored in stack memory. Any modifications to these copies within the function do not affect the original data outside the function. This method ensures that changes are isolated to the function's local context.

Function Isolation: Changes made to parameters within the function are local to that function. The original data remains unchanged.

Memory and Performance: Copying data can be inefficient for large structures or arrays, as it involves additional memory overhead and processing time.

Use Case: Suitable for functions where the original data should not be altered, providing a safety net against unintended side effects.

Call by Reference:<br>
In call-by-reference, the function receives the actual address of the argument. This means the function works directly with the original data. Changes made to the parameter within the function are reflected in the original argument outside the function, making it a useful approach for modifying data and simulating pass-by-reference. A function receives a reference (or address) to the actual argument. The function operates directly on the original data, so modifications affect the original variables.

Direct Access: The function can modify the original data, which is useful for scenarios where data needs to be updated.

Efficiency: Avoids the overhead of copying large data structures, making it more efficient for large or complex objects.

Use Case: Ideal for functions that need to modify the input data or when dealing with large data structures where copying would be expensive.

### Program Codes:-

1)pointer intro-
~~~ javascript
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
~~~
2) array using pointer-
```javascript
#include <iostream>
using namespace std;
int main()
{
   int *ptr,i;
  int  a[5]={10,20,30,40,50};
   ptr=&a[0];
  // cout<<ptr;
  // *ptr=a;
  cout<<"The value of array without pointer are: "<<endl;
   for(i=0;i<5;i++)
   {
       cout<<"Element "<<i<<"= "<<a[i]<<endl;
   }
   cout<< "The elements of array with using pointer "<<endl;
   for(i=0;i<5;i++)
   {
       cout<<"Element "<<i<<"= "<<*ptr<<endl;
       ptr++;
   }
    return 0;
}
```


3)Pointer Call By Reference
~~~ javascript
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
~~~
4)Pointer Call By Value
~~~ javascript
//sharvari murade
//23070123088
#include <iostream>
using namespace std;
void swap (int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside swap a: "<<a<<" b:  "<<b<<endl;
}

int main()
{
   int a=7,b=6;
   cout<<"Before swap a: "<<a<<" b: "<<b<<endl;
   swap(a,b);
   cout<<"After swap a:"<<a<<" b:  "<<b<<endl;
    return 0;
}

~~~

### Program Outputs:-
1) <img width="709" alt="image" src="https://github.com/user-attachments/assets/a1dfc13f-91ff-4bc2-a2b3-e2c8f57c4af3">

2) <img width="584" alt="image" src="https://github.com/user-attachments/assets/f47fe024-ca6a-4c5a-a828-0c180bbe0280">

3) <img width="290" alt="Screenshot 2024-08-31 at 4 41 57 PM" src="https://github.com/user-attachments/assets/a2cf3f77-7a23-423c-a2e4-a7af146fea3b">

4) <img width="347" alt="image" src="https://github.com/user-attachments/assets/bff98c5e-9b28-4226-be4c-38ccb077186c">


### Conclusion
In C++, pointers offer flexibility by allowing direct memory manipulation. Call-by-value creates copies of data, ensuring changes remain local to the function, while call-by-reference provides direct access to the original data, enabling modifications to be reflected outside the function. Both methods are essential for effective data handling and memory management.








