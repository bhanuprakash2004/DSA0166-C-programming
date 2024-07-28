#include <iostream>
using namespace std;

class Person{
private:
  int* age;
  
public: 
  Person(int* person_age)
  {
  cout<<"Constructor for age is called"<<endl;
      age = new int;
      age = person_age;
  }
  void display()
  {
      cout<<"Age of current object: "<<*age<<endl;
      cout<<endl;
  }
  
};
int main() 
{
    int age = 25;
    Person obj1(&age);
    obj1.display();
    
    return 0;
}