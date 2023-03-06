#include<iostream>
#include<string.h>
using namespace std;
class high_school
{
	private:
	int id;
	char name[100];
	int roll;
	int std;
	int age;
	int cont;
	static char stu_adu_ins[100];
	char add[100];
	public:
		void setData()
		{
			id=1;
			strcpy(name,"Disha");
			roll=1;
			std=10;
			age=16;
			cont=354646;
			strcpy(add,"sarathana");
			
			cout<<"id=   "<<id<<"    student name="<<name<< "    rollno="<<roll<<"  std="<<std<<"  age="<<age<<"  contact="<<cont<<"  stu_adu_ins= "<<stu_adu_ins<<"  address="<<add<<endl;

		}
	
	
};
class Clg
{
	private:
		int id;
	char name[100];
	int roll;
	int std;
	int age;
	int cont;
	static char stu_adu_ins[100];
	char add[100];
	public:
		void setData()
		{
			id=2;
			strcpy(name,"Himani");
			roll=1;
			std=10;
			age=16;
			cont=354646;
			strcpy(add,"sarathana");
			
			cout<<"id=   "<<id<<"    student name="<<name<< "    rollno="<<roll<<"  std="<<std<<"  age="<<age<<"  contact="<<cont<<"  stu_adu_ins= "<<stu_adu_ins<<"   address= "<<add<<endl;

		}
	
		
};
char high_school::stu_adu_ins[100]="aashadeep";
char Clg::stu_adu_ins[100]="rnw";

int main()
{
	high_school h1;
	Clg c1;
	
	h1.setData();
	c1.setData();

}
