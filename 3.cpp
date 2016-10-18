#include <iostream>
using namespace std;

struct DATA
{
	unsigned int first[4],total=0,average,one,second,third,fourth;	 
};

int main () 
{	
	DATA east;
	DATA north;
	DATA west;
	DATA south;

///////////////////////////////////////////////////////////////
	
	cout << "EAST" <<endl;
	
	for(int i=0 ; i<4 ;i++)
	{
		east.first;
		
		cout <<"input quarter "<<i+1 << "'s sales = ";
		cin>>east.first[i];cout<<endl;
		
		while (east.first[i] < 0)
		{
			cout << "input the right positive amount of sales = ";
			cin >> east.first[i];
		}
		
		east.total = east.total + east.first[i];
	}
	
	cout<<endl<<endl;

///////////////////////////////////////////////////////////////
	
	cout << "WEST" <<endl;
	
		for(int i=0 ; i<4 ;i++)
	{
		west.first;
		
		cout <<"input quarter "<<i+1 << "'s sales = ";
		cin>>west.first[i];
		
			while (west.first[i] < 0)
		{
			cout << "input the right positive amount of sales = ";
			cin >> west.first[i];
		}
		
		west.total = west.total + west.first[i];
	}
	
		cout <<endl<<endl;
		
/////////////////////////////////////////////////////////////
		
		cout << "NORTH" <<endl;
		
		for(int i=0 ; i<4 ;i++)
	{
		north.first;
		
		cout <<"input quarter "<<i+1 << "'s sales = ";
		cin>>north.first[i];
		
			while (north.first[i] < 0)
		{
			cout << "input the right positive amount of sales = ";
			cin >> north.first[i];
		}
		
		north.total = north.total + north.first[i];
	}
	
		cout<<endl<<endl;
		
///////////////////////////////////////////////////////////////
		
		cout << "SOUTH" <<endl;
	
		for(int i=0 ; i<4 ;i++)
	{
		south.first;
		
		cout <<"input quarter "<<i+1 << "'s sales = ";
		cin>>south.first[i];
		
			while (south.first[i] < 0)
		{
			cout << "input the right positive amount of sales = ";
			cin >> south.first[i];
		}
		
		south.total = south.total + south.first[i];
	}
	
//////////////////////////////////////////////////////////////
	
	DATA final;
	
	final.total=east.total+west.total+south.total+north.total;
	
	final.one = east.total/4;
	final.second = west.total/4;
	final.third = north.total/4;
	final.fourth = south.total/4;
	
	final.average=final.total/4;
	
	cout<<"-------------------------------------------"<<endl<<endl;
	
	cout<<"east average sales = "<<final.one<<endl;
	cout<<"west average sales = "<<final.second<<endl;
	cout<<"north average sales = "<<final.third<<endl;
	cout<<"south average sales = "<<final.fourth<<endl<<endl;
	
	cout<<"total sales = "<<final.total<<endl;
	cout <<"final average sales = "<<final.average;
	
return 0;
}
