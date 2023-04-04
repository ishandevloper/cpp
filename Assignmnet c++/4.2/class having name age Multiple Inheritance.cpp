//Multiple Inheritance


#include<iostream>
using namespace std;
class Person{
	private:
		char name[50];
		int age;
	public:
		void setPerson(int a, char n){
			name[50]= n;
			age = a;
		}
		void displayPerson(){
			cout<<"Name:  "<<name<<endl;
			cout<<"Age:    "<<age<<endl;
		}
		
};
class Student: Person{
	private:
		float percentage;
	public:
		void setStudent(char n, int a, float p){
			percentage = p;
			setPerson(a,n);
		}
		void displayStudent(){
			cout<<"Student details are: \n";
			displayPerson();
			cout<<"Prcentage is:  "<<percentage<<endl;
		}
};
class  Teacher: Person{
	private:
		float salary;
	public:
		void setTeacher(char n, int a, float s){
			salary = s;
			setPerson(a,n);
		}
		void displayTeacher(){
			cout<<"Teachers details are: \n";
			displayPerson();
			cout<<"Salary:  "<<salary<<endl;
		}
};
