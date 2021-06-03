#include<iostream>
using namespace std;
int main()
{
    int a[100],i,b,s,first,last,mid,n;
    cout<< "Enter no. of elements:";
    cin>> b;
    cout<< "Enter elements:\n";
    for (i=0;i<b;i++)
    {
        cin>> a[i];
    }
    cout<< "Entered elements are:\n";
    for (i=0;i<b;i++)
    {
       cout<< a[i] <<"\t";
    }
    cout<< "\nEnter the number you want to search=";
    cin>> s;
    first=0;
    last=b-1;
    mid=(first+last)/2;
    while(first<=last)
    {
       if (a[mid]<s)
       first=mid+1;
       else if (a[mid]==s)
       {
          cout<<s <<" is found at location " <<mid+1 <<".";
          break;
       }
       if(a[mid]>s)
       last=mid-1;

       mid=(first+last)/2;
    }
    if(first>last)
    {
       cout<< "\nOops!!The number is not in the list!!";
       cout<< "\nEnter the location you want to insert that number=";
       cin>> n;
       for ( i = b-1; i <= n; i--)
       {
           a[i+1]=a[i];
           a[n]=s;
       }
       cout<< "\nResultant list:\n";
       for (i=0;i<=b;i++)
           {
              cout<< a[i] <<"\t";
           }
    }
    return 0;
}