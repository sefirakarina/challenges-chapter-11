#include <iostream>
#include <string>

using namespace std;  

struct DATA
{
	string name[12],maxName;
	int number[12],scores[12],totalScores=0,maxScores,maxNumber;
};

int main ()
{
	DATA info;
	
	for (int i=0 ; i<12 ; i++)
	{
		cout<< "input player "<<i+1 <<"'s name = ";
		cin >> info.name[i];
///////////////////////////////////////////////////////////////////		
		cout <<"input player "<<i+1 <<"'s number = ";
		cin>>info.number[i];
		
			while (info.number[i] < 0)
		{
			cout << "input the right positive number = ";
			cin >> info.number[i];
		}
//////////////////////////////////////////////////////////////////
		cout <<"input player "<<i+1 <<"'s score = ";
		cin>>info.scores[i]; cout<<endl;
		
			while (info.scores[i] < 0)
		{
			cout << "input the right positive number = ";
			cin >> info.scores[i];
		}
		
		info.totalScores=info.totalScores+info.scores[i];	
			
		info.maxScores=info.scores[i];
		info.maxName =info.name[i];
		info.maxNumber=info.number[i];
				
				if(info.scores[i+1]>info.scores[i])
			{
				info.scores[i]=info.scores[i+1];

				info.scores[i+1]=info.maxScores;
				
				info.name[i+1]=info.maxName;
				info.number[i+1]=info.maxNumber;
			}
	}
		
//////////////////////////////////////////////////////////////////		
	
	cout<<"total points = "<<info.totalScores<<endl;
	cout <<"highest goal is " << info.maxScores<<" by player number " << info.maxNumber<<" named "<<info.maxName;
	
	
return 0 ;
}
