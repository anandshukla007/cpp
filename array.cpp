#include<iostream>
using namespace std;
int main()
{
    int a[100],i,b;
    cout<< "Enter no. of elements of array:";
    cin>> b;
    cout<< "Enter elements of array:\n";
    for (i=0;i<b;i++)
    {
        cin>> a[i];
    }
    cout<< "Elements of array are:\n";
    for (i=0;i<b;i++)
    {
       cout<< a[i] <<"\t";
    }
    return 0;
}