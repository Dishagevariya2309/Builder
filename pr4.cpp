#include<iostream>
#include<string.h>
using namespace std;
class state
{
	public:
		char state_name[100];
		char state_district_name[100];
		char state_city_name[100];
		public:
			static char india;
			void setData()
			{
				cout<<"\nEnter state name :"<<endl;
				cin>>state_name;
				cout<<"Enter the district_name:"<<endl;
				cin>>state_district_name;
				cout<<"Enter state city name:"<<endl;
				cin>>state_city_name;
			}
			void getData()
			{
				cout<<"\n Enter state name :"<<state_name<<endl;
				cout<<"Enter the district_name:"<<state_district_name<<endl;
				cout<<"Enter state city name:"<<state_city_name<<endl;
			}
};
char state::india;

int main()
{
	state s1;
	s1.setData();
	s1.getData();	
	return 0;
}
