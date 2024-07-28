#include<iostream>
#include<string>
class Car{
	private:
		std::string name;
		int cost;
		public:
			Car(std::string n,int a):name(n),cost(a){
				std::cout<<"Car object created:"<<name<<"("<<cost<<")"<<std::endl;
			}
			~Car() {
			 std::cout<<"Car object destroyed:"<<name<<"("<<cost<<")"<<std::endl;
			}
			void displayInfo() {
				std::cout<<"Name:"<<name<<",Cost"<<cost<<std::endl;
			}
};
int main() {
	Car car1("swift",2000);
	car1.displayInfo();
	Car car2("Hound",1700);
	car2.displayInfo();
	return 0;
}