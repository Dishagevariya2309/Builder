#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	public:
	int id;
	int salary;
	int cont;
	int exp;
	char name[100];
	char post[100];
	char add[100];
	char email[100];
	
	void setData1()
	{
	
	cout<<"Enter your id:-"<<endl;
	cin>>id;
	cout<<"Enter your name:-"<<endl;
	cin>>name;
	cout<<"Enter your email:-"<<endl;
	cin>>email;
	cout<<"Enter your address:-"<<endl;
	cin>>add;
	cout<<"Enter your contact no.:-"<<endl;
	cin>>cont;
	cout<<"Enter your post:-"<<endl;
	cin>>post;
	cout<<"Enter your experience:-"<<endl;
	cin>>exp;	
	}
	
	void getData1()
	{
		cout<<"id="<<id<<"   name= "<<name<<"   EMAIL= "<<email<<"   add= "<<add<<"    cont= "<<cont<<"    post= "<<post<<"   exp= "<<exp<<endl;
	}
		
	void setData2()
	{
	
	cout<<"Enter your id:-"<<endl;
	cin>>id;
	cout<<"Enter your name:-"<<endl;
	cin>>name;
	cout<<"Enter your email:-"<<endl;
	cin>>email;
	cout<<"Enter your address:-"<<endl;
	cin>>add;
	cout<<"Enter your contact no.:-"<<endl;
	cin>>cont;
	cout<<"Enter your post:-"<<endl;
	cin>>post;
	cout<<"Enter your experience:-"<<endl;
	cin>>exp;	
	}
	
	void getData2()
	{
		cout<<"id="<<id<<"   name= "<<name<<"   EMAIL= "<<email<<"   add= "<<add<<"    cont= "<<cont<<"    post= "<<post<<"   exp= "<<exp<<endl;
	}
		
	void setData3()
	{
	
	cout<<"Enter your id:-"<<endl;
	cin>>id;
	cout<<"Enter your name:-"<<endl;
	cin>>name;
	cout<<"Enter your email:-"<<endl;
	cin>>email;
	cout<<"Enter your address:-"<<endl;
	cin>>add;
	cout<<"Enter your contact no.:-"<<endl;
	cin>>cont;
	cout<<"Enter your post:-"<<endl;
	cin>>post;
	cout<<"Enter your experience:-"<<endl;
	cin>>exp;	
	}
	
	void getData3()
	{
		cout<<"id="<<id<<"   name= "<<name<<"   EMAIL= "<<email<<"   add= "<<add<<"    cont= "<<cont<<"    post= "<<post<<"   exp= "<<exp<<endl;
	}
		
	void setData4()
	{
	
	cout<<"Enter your id:-"<<endl;
	cin>>id;
	cout<<"Enter your name:-"<<endl;
	cin>>name;
	cout<<"Enter your email:-"<<endl;
	cin>>email;
	cout<<"Enter your address:-"<<endl;
	cin>>add;
	cout<<"Enter your contact no.:-"<<endl;
	cin>>cont;
	cout<<"Enter your post:-"<<endl;
	cin>>post;
	cout<<"Enter your experience:-"<<endl;
	cin>>exp;	
	}
	
	void getData4()
	{
		cout<<"id="<<id<<"   name= "<<name<<"   EMAIL= "<<email<<"   add= "<<add<<"    cont= "<<cont<<"    post= "<<post<<"   exp= "<<exp<<endl;
	}	
	void setData5()
	{
	
	cout<<"Enter your id:-"<<endl;
	cin>>id;
	cout<<"Enter your name:-"<<endl;
	cin>>name;
	cout<<"Enter your email:-"<<endl;
	cin>>email;
	cout<<"Enter your address:-"<<endl;
	cin>>add;
	cout<<"Enter your contact no.:-"<<endl;
	cin>>cont;
	cout<<"Enter your post:-"<<endl;
	cin>>post;
	cout<<"Enter your experience:-"<<endl;
	cin>>exp;	
	}
	
	void getData5()
	{
		cout<<"id="<<id<<"   name= "<<name<<"   EMAIL= "<<email<<"   add= "<<add<<"    cont= "<<cont<<"    post= "<<post<<"   exp= "<<exp<<endl;
	}
	
};
int main()
{
	employee e1;
	e1.setData1();
	e1.getData1();
	e1.setData2();
	e1.getData2();
	e1.setData3();
	e1.getData3();	
	e1.setData4();
	e1.getData4();
	e1.setData5();
	e1.getData5();
}
