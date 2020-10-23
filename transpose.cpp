//program to find transpose
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                 cout<<"\nenter the no. at index "<<i<<j<<" : ";
                 cin>>a[i][j];
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<"\t"<<a[i][j];
            }
            cout<<"\n";
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                b[i][j]=a[j][i];
            }
        }
        cout<<"\ntranspose is \n";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<"\t"<<b[i][j];
            }
            cout<<"\n";
        }
    }
