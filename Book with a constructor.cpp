#include<iostream>
#include<string>
class Book{
	private :
		std::string name;
		int price;
		public:
			Book(std::string n,int a):name(n),price(a){
				std::cout<<"Book object created:"<<name<<"("<<price<<")"<<std::endl;
			}
			~Book() {
        std::cout << "Book object destroyed: " << name << " (" <<price<< ")" << std::endl;
    }

			void displayInfo() {
				std::cout<<"Name:"<<name<<",Price:"<<price<<std::endl;
			}
};int main(){
	Book book1("bhagavad gita",2000);
	book1.displayInfo();
	Book book2("Ramayan",1800);
	book2.displayInfo();
	return 0;
}