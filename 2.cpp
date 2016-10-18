#include <iostream>
#include <string>

using namespace std;   

struct DATA
	{
		string title,director,year,time;
		int production,revenues,profitloss;
	};
	
void printInfo (DATA info);
	
int main (){
	
	DATA movie1;
	movie1.title= "lord of the rings";
	movie1.director= "peter jackson";
	movie1.year= "2001";
	movie1.time="120 minutes";
	movie1.production=100000000000;
	movie1.revenues=250000000000;
	movie1.profitloss=movie1.revenues-movie1.production;
	
	DATA movie2;
	movie2.title="alice in wonderland";
	movie2.director="tim burton";
	movie2.year="2010";
	movie2.time="90 minutes";
	movie2.production=200000000000;
	movie2.revenues=150000000000;
	movie2.profitloss=movie2.production-movie1.revenues;
	
	DATA arr[]={movie1,movie2};
	
	for(int i = 0; i < 2; i++) 
	{
	 	printInfo(arr[i]);
	}
	
	return 0;
}

void printInfo (DATA info)
	{
		cout << "title = " << info.title<<endl ;
		cout << "director = "<<info.director<<endl ;
		cout << "year = " << info.year <<endl ;
		cout << "time = "<<info.time <<endl;
		cout <<"production cost = "<<info.production<<endl;
		cout<< "1st year's revenue = "<< info.revenues<<endl;
		cout<< "profit/loss = "<<info.profitloss<<endl<<endl;
	}

