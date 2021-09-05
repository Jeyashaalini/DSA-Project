#include <iostream> 
using namespace std; 

int main() { 
    int a = 0, b = 1, nterm = 0, n; 
    cout << "Enter a positive number: "<<endl; 
    cin >> n; 
    cout << "Fibonacci Series:"<<endl;
    cout << a << ", " << b << ", "; 
    nterm = a + b; 
    
    while(nterm <= n) { 
    cout << nterm << ", "; 
    a = b; 
    b = nterm; 
    nterm = a + b; 
    } 
return 0; 
}
