#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double number,result;
	cout<<"Enter the number: ";
	cin>>number;
	if(number>=0){
		result=sqrt(number);
		cout<<"The square root of " <<number<<" is "<<result<<endl;
	} else {
		cout<<"Negative numbers do not have a real square root."<<endl;
	}
	return 0;
}