//
//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter number of column : ";
    cin>>n;
    cout<<"\nEnter elements of first matrix : "<<endl;
    int m1[m][n], m2[m][n], add[m][n];
    for (int i = 0; i<m; i++)
        for (int j = 0; j<n; j++)
        {
            cout<<"Enter m1["<<i<<"]["<<j<<"] = ";
            cin>>m1[i][j];
        }

    cout<<"\nEnter elements of second matrix : "<<endl;
    for (int i = 0; i<m; i++)
        for (int j = 0; j<n; j++)
        {
            cout<<"Enter m1["<<i<<"]["<<j<<"] = ";
            cin>>m2[i][j];
        }

    for (int i = 0; i<m; i++)
        for (int j = 0; j<n; j++)
        {
                add[i][j] = m1[i][j] + m2[i][j];
        }

    cout<<"The addition of given matrix :"<<endl;
    for (int i = 0; i<m; i++)
        for (int j = 0; j<n; j++)
        {
            cout<<add[i][j]<<" ";
            if(j==n-1)
                cout<<endl;
        }

    return 0;
}

