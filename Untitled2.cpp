#include<iostream>
using namespace std;
class complex{
	private:
		double real;
		double imag;
		public:
		
    complex(double r = 0, double i = 0) : real(r), imag(i) {}
			friend complex add(const complex& c1,const complex& c2){
				return complex(c1.real+c2.real,c1.imag+c2.imag);
			}
			void display(){
				 cout << real <<" + "<< imag << "i" << endl;
			}
};
int main(){
	complex c1(7,9);
	complex c2(4,5);
	cout<<"complex number 1:"<<endl;
	c1.display();
	cout<<"complex number 2:"<<endl;
	c2.display();
	complex sum=add(c1,c2);
	cout<<"sum:";
	sum.display();
	return 0;
}