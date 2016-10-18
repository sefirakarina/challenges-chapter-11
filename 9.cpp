#include <iostream>
#include <string>

using namespace std;

struct DATA 
{
	string name[10],telp[10],topic[10],fee[10];
};

int main ()
{
	DATA info ;
	
	for (int i=1 ; i<11 ; i++) 
	{
		cout <<"input name "<<i<<" : ";
		getline(cin,info.name[i]);
		
		cout <<"input telephone number "<<i<<" : ";
		getline(cin,info.telp[i]);
		
		cout <<"input speaking topic "<<i<<" : ";
		getline(cin,info.topic[i]);
		
		cout <<"input fee "<<i<<" : ";
		getline(cin,info.fee[i]);
		cout<<endl;
		
		
	}
	
//////////////////////////////////////////////////////////////////////////

	int answer;
	
	cout << "-------------------------------------------------"<<endl;
	
	cout<<endl<<"PLEASE CHOOSE "<<endl
		<<"1.see all data"<<endl
		<<"2.edit certain data"<<endl<<endl;
	cout<<"your choice : " ; cin>>answer;
	
	cout<<endl<<"-------------------------------------------"<<endl;
	
///////////////////////////////////////////////////////////////////////////	
	if(answer==1)
	{
		for (int i=1 ; i<11 ; i++)
		{
			cout<<"name "<<i <<" : " << info.name[i]<<endl;
			cout<<"Telephone number "<<i <<" : "<< info.telp[i]<<endl;
			cout<<"speaking topic " <<i <<" : " <<info.topic[i]<<endl;
			cout<<"fee required "<<i<<" : "<<info.fee[i]<<endl<<endl;	
		}
	}
///////////////////////////////////////////////////////////////////////////

	else if (answer==2)
	{
		int i;
		
		cout <<"enter the data you'd like to re input (1-10) = " ; cin>>i;
		
		if (0<i<11)
		{
			cout <<"input name "<<i<<" : ";
			getline(cin,info.name[i]);
		
			cout <<"input telephone number "<<i<<" : ";
			getline(cin,info.telp[i]);
		
			cout <<"input speaking topic "<<i<<" : ";
			getline(cin,info.topic[i]);
		
			cout <<"input fee "<<i<<" : ";
			getline(cin,info.fee[i]);
			cout<<endl<<endl;
		
			cout <<"--------------------------------------------"<<endl<<endl;
		
			cout<<"the new data is : "<<endl;
			
				for (int i=0 ; i<11 ; i++)
				{
					cout<<"name "<<i <<" : " << info.name[i]<<endl;
					cout<<"Telephone number "<<i <<" : "<< info.telp[i]<<endl;
					cout<<"speaking topic " <<i <<" : " <<info.topic[i]<<endl;
					cout<<"fee required "<<i<<" : "<<info.fee[i]<<endl<<endl;	
				}
				
		}
		
	}
	
	
	return 0;
}
