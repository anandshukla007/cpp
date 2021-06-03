#include<iostream>
using namespace std;
int a[100],i,b,s=0,avg;
void sum();
void average(); 
int main()
{
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
    cout<< "\nSum of the elements of array=";
    sum();
    cout<< "\nAverage of the elements of array=";
    average();
    return 0;
}
void sum()
{
    for (i=0;i<b;i++)
    {
        s=s+a[i];
    }
    cout<< s;
    s=0;
}
void average()
{
    for (i=0;i<b;i++)
    {
        s=s+a[i];
    }
    avg=s/b;
    cout<< avg;
}