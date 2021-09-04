#include <iostream> 
using namespace std;
int main() {
	int num1,num2,num3;
	cout<<" Enter value for NUM1 :";
	cin>>num1;
	cout<<" Enter value for NUM2 :";
	cin>>num2;
	cout<<" Enter value for NUM3 :";
	cin>>num3;
	if(num1>num2&&num1>num3) {
		cout<<" First number is the largest :"<<num1;
	} else if(num2>num1&&num2>num3) {
		cout<<" Second number is the largest :"<<num2;
	} else {
		cout<<" Third number is the largest :"<<endl<<num3;
	}
	return 0;
}
