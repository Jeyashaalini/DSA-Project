#include <iostream>
using namespace std;

int main() {
    int j,t1=0,t2=0;
    int a[5]={15,20,19,24,10};
    for(j=0;j<5;j++)
    {
       if(t1<a[j]) 
       {
           t2=t1;
           t1=a[j];
       }
       else if(t2<a[j] && t1>a[j])
       {
           t2=a[j] ;
       }
    }
    cout<<"Second largest number is:"<<t2;
    return 0;
}
