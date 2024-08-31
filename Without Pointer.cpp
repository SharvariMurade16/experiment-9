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
