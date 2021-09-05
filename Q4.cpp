#include<iostream> 
using namespace std; 

int main() { 
int a = 0, b = 1, sum = 0, n; 
cout<<"Enter the end term for the series: "; cin>>n; 
cout<<"Fibonacci Series: "<<a<<","<<b << ","; 
sum = a + b; 

while(sum <= n) { 
cout<<sum<<" "; 
a = b; 
b = sum; 
sum = a + b; 
} 
return 0; 
} 
