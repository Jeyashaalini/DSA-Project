#include <iostream>
using namespace std;
int main()
{
int n = 5;
int a,b;
int d=2;
for (int a=1;a<=n;a++)
{
for(int c=n-1;c>=a;c--) 
    {
        cout<<" ";
}
for (int b=1;b<d;b++)
{
    cout<<"*";
}   d +=2;
    cout<<"\n";
    }
    return 0;
}
