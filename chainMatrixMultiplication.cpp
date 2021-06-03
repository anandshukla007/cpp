/*
 * Name   :   Anand Shukla
 * Roll No:   1917269
 * Date   :   20-05-2021
 *
 * Problem:  Write a program to implement Chained Matrix Multiplication using Dynamic Programming.
 *
 *	Consider there is question in which a given set of matrices have to multiply.
 *	So in what way a student multiply the all matrices to minimize effort
 *  and calculate how much ways are required to do that.
 *
 */

#include<iostream>
#include<limits.h>
 
using namespace std;
int MatrixChainMultiplication(int p[], int n)
{
    int m[n][n];
    int i, j, k, L, q;
 
    for (i=1; i<n; i++)
        m[i][i] = 0;   
    for (L=2; L<n; L++)
    {
        for (i=1; i<n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = INT_MAX;  //assigning to maximum value
 
            for (k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;    //if number of multiplications found less that number will be updated.
                }
            }
        }
    }
 
    return m[1][n-1];   //returning the final answer which is M[1][n]
 
}
 
int main()
{
    int n,i;
    cout<<"Enter number of matrices:\n";
    cin>>n;
 
    n++;
 
    int a,b,p[n];
    
    for(i=1;i<n;i++)
    {
        cout<<"Enter the order of matrix "<<i<<":"<<endl;
        cin>>a>>b;
        if (i==1)
        {
            p[i-1]=a;
            p[i]=b;
        }
        else
        {
            p[i]=b;
        }
    }
 
    int size = sizeof(p)/sizeof(p[0]);
 
    cout<<"Minimum number of multiplications is "<<MatrixChainMultiplication(p, size);
 
    return 0;
}