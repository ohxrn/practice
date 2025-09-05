#include <iostream>


class Student {
    private:
        std::string name;
        int age;
    public:
    Student(std::string theName, int theAge){
        name=theName;
        age=theAge;
    }
    void printStudent (void){
        std::cout << "Student name: "<<name <<" - age: "<< age <<std::endl;
    }
};

int main (void)
{
Student student1=Student("Ms. Richards", 88);

student1.printStudent();
    //
    return 0;
}