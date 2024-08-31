# experiment-9

### AIM
To effectively use pointers in C++ for accessing array elements and finding the addresses of different data types, focus on mastering pointer operations.

### Software Used
VS code

### Problem Statement
1.) Write a c++ program to initialize pointers of different data types and print the required values.

2.) Write a c++ program to access elements of array using pointer.

3.) Write a c++ program to access elements of array without using pointer variable.

4.) Write a c++ program to swap the numbers using call by value.

5.) Write a c++ program to swap the numbers using call by reference.

# Theory 
Pointers in C++ allow direct manipulation of memory addresses, which provides greater flexibility in handling data. They are essential for efficiently managing dynamic data structures and simulating call-by-reference.

Call by Value:<br>
In call-by-value, a copy of the function's arguments is created and stored in stack memory. Any modifications to these copies within the function do not affect the original data outside the function. This method ensures that changes are isolated to the function's local context.

Call by Reference:<br>
In call-by-reference, the function receives the actual address of the argument. This means the function works directly with the original data. Changes made to the parameter within the function are reflected in the original argument outside the function, making it a useful approach for modifying data and simulating pass-by-reference.

Program Codes:-
1)Pointer Array:-
~~~ javascript
 //Sharvari Murade
 //23070123088
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 11,32,53,74,98};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*ptr << endl;
        ptr ++;

    }
}
~~~
2)Without Pointer
~~~ javascript
//Sharvari Murade
//23070123088
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 11,32,53,74,98};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*(a+i) << endl;
        ptr ++;

    }
}
~~~
3)Pointer Character
~~~ javascript

 //Sharvari Murade
 //23070123088
#include<iostream>
using namespace std;
int main()
{
    char a = 'c'; 
    

    char *ptr;

    ptr = &a;

    cout<< "The value pointed by *ptr is "<<*ptr << endl;
    cout << "The value in b is"  <<a << endl;
    cout << "The value in pointer variable ptr is "<<(void*)ptr << endl;

    cout << "the address of variable b is "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;

    
}
~~~
4)Pointer Float
~~~ javascript
 //Sharvari Murade
 //23070123088
 #include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}
~~~
5)Pointer Integer
~~~ javascript
 //Sharvari Murade
 //23070123088
 #include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}
~~~
6)Pointer Call By Reference
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
7)Pointer Call By Value
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
   int a=11,b=22;
   cout<<"Before swap a: "<<a<<" b: "<<b<<endl;
   swap(a,b);
   cout<<"After swap a:"<<a<<" b:"<<b<<endl;
    return 0;
}
~~~

Program Output:-
1) <img width="298" alt="Screenshot 2024-08-31 at 4 08 46 PM" src="https://github.com/user-attachments/assets/3a6d5908-b556-4278-8d6c-a7000bb1e9fe">
2) <img width="310" alt="Screenshot 2024-08-31 at 4 31 21 PM" src="https://github.com/user-attachments/assets/e791b297-8dac-4817-a7a9-6d3284edd527">
3) <img width="586" alt="Screenshot 2024-08-31 at 4 35 23 PM" src="https://github.com/user-attachments/assets/ac392258-17e5-49ad-9608-2dfcdef2d0f7">
4) <img width="586" alt="Screenshot 2024-08-31 at 4 38 21 PM" src="https://github.com/user-attachments/assets/e7fceb30-5298-439f-ae9b-3636e9cbca7c">
5) <img width="587" alt="Screenshot 2024-08-31 at 4 40 34 PM" src="https://github.com/user-attachments/assets/0be4992a-184e-45d9-b7e3-017416511091">
6) <img width="290" alt="Screenshot 2024-08-31 at 4 41 57 PM" src="https://github.com/user-attachments/assets/a2cf3f77-7a23-423c-a2e4-a7af146fea3b">
7) <img width="290" alt="Screenshot 2024-08-31 at 4 43 12 PM" src="https://github.com/user-attachments/assets/08affe7b-e8da-4e2e-be00-24a6cde76180">

### Conclusion
In C++, pointers offer flexibility by allowing direct memory manipulation. Call-by-value creates copies of data, ensuring changes remain local to the function, while call-by-reference provides direct access to the original data, enabling modifications to be reflected outside the function. Both methods are essential for effective data handling and memory management.








