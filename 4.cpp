#include <iostream>
#include <string>

using namespace std;  

struct DATA 
	{
		int rain[12],meanRain,temp,temp1;
		float high[12],low[12],average[12],totalAverage=0,meanAverage;
		int totalRain=0;
	};
	
int main(){
	
	DATA info;
	
	for(int i=0 ; i<12 ; i++)
	{
		cout << "input month " << i+1 <<"'s total rainfall = ";
		cin>> info.rain[i];
		
		info.totalRain=info.totalRain+info.rain[i];
////////////////////////////////////////////////////////////////////
		cout << "input month " << i+1 <<"'s high temprature = ";
		cin>> info.high[i];
		
		while (-101>info.high[i] || info.high[i]>141)
		{
			cout << "input the right temprature(between -100 and 140) = ";
			cin >> info.high[i];
		}
		
				
			info.temp=info.high[i];
				
				if(info.high[i+1]>info.high[i])
			{
				info.high[i]=info.high[i+1];

				info.high[i+1]=info.temp;
			}
/////////////////////////////////////////////////////////////////////	
		cout << "input month " << i+1 <<"'s low temprature = ";
		cin>> info.low[i];
		
		while (-101>info.high[i] || info.high[i]>141)
		{
			cout << "input the right temprature(between -100 and 140) = ";
			cin >> info.low[i];
		}
		
			info.temp1=info.low[i];
				
				if(info.low[i+1]<info.low[i])
			{
				info.low[i]=info.low[i+1];

				info.low[i+1]=info.temp1;

			}	
/////////////////////////////////////////////////////////////////////		
		cout << "input month " << i+1 <<"'s average temprature = ";
		cin>> info.average[i];
		
		while (-101>info.average[i] || info.average[i]>141)
		{
			cout << "input the right temprature(between -100 and 140) = ";
			cin >> info.average[i];
		}
		
		cout <<endl;
		
		info.totalAverage=info.totalAverage+info.average[i];
	
	}
//////////////////////////////////////////////////////////////////////////////

		info.meanRain=info.totalRain/12;
		info.meanAverage=info.totalAverage/12;
	
		cout<<"-------------------------------------------------------"<<endl<<endl;
		
		cout<<"total rainfall this year = " << info.totalRain<<endl;
		cout <<"average rainfall per month = "<<info.meanRain<<endl;
		cout <<"highest temprature this year = "<<info.temp<<endl;
		cout <<"lowest temprature this year = "<<info.temp1<<endl;
		cout << "average temprature this year = "<<info.meanAverage<<endl<<endl; 
		
		cout<< "BYE!!!!!"<<endl;
		
	return 0;
}
