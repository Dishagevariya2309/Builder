#include<iostream>
#include<string.h>
using namespace std;
class hotel
{
	public:
	int id;
	int staff;
	int room;
	int year;
	int rating;
	char type[100];
	char hotelname[100];
	char add[100];
	char website[100];
	
	
	void setdata(int id,int staff,int room,int year,int rating,char type[100],char hotelname[100],char add[100],char website[100])
	{
		this->id=id;
		this->staff=staff;
		this->room=room;
		this->year=year;
		this->rating=rating;
		strcpy(this->type,type);
		strcpy(this->hotelname,hotelname);
		strcpy(this->add,add);
		strcpy(this->website,website);
	}
	void getData()
	{
	cout<<"id:-"<<id<<endl;
	cout<<"hotel name:-"<<hotelname<<endl;
	cout<<"type:-"<<type<<endl;
	cout<<"add:-"<<add<<endl;
	cout<<"staff:-"<<staff<<endl;
	cout<<"room:-"<<room<<endl;
	cout<<"establishyear:-"<<year<<endl;
	cout<<"rating:-"<<rating<<endl;
	cout<<"website:-"<<website<<endl;	
	}
};
main()
{
	hotel h1;
	h1.setdata(1,100,30,201,10,"5 star","navjivan","sarathana","www.navjivan.com");
	h1.getData();
	
}
