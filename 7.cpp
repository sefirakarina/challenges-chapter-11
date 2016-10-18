#include <iostream>
#include <string>

using namespace std;  

struct DATA 
	{
		string name[10],adress[10],city[10],state[10];
		string zip[10],telp[10],balance[10],date[10];
	};
	
int main(){
	
	
	DATA info;
	
	for (int i=1 ; i<11 ; i++)
	{
		cout <<"input name "<<i<<" : ";
		getline(cin,info.name[i]);
		
		cout <<"input adress "<<i << " : "; 
		getline(cin,info.adress[i]);
		
		cout << "input state "<<i <<" : ";
		getline(cin,info.state[i]);
		
		cout << "input ZIP "<<i <<" : ";
		getline(cin,info.zip[i]);
		
		cout << "input telephone number "<<i <<" : ";
		getline(cin,info.telp[i]);
		
		cout << "input account balance "<<i <<" : ";
		getline(cin,info.balance[i]);
		
		cout << "input date of last payment "<<i <<" : ";
		getline(cin,info.date[i]);
		
		cout <<endl;	
	}
////////////////////////////////////////////////////////////////

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
			cout<<"adress "<<i <<" : "<< info.adress[i]<<endl;
			cout<<"city " <<i <<" : " <<info.city[i]<<endl;
			cout<<"state "<<i<<" : "<<info.state[i]<<endl;
			cout <<"ZIP "<<i <<" : "<<info.zip[i]<<endl;
			cout<<"telephone number "<<i<<" : " <<info.telp[i]<<endl;
			cout<<"account balance "<< i<<" : "<<info.balance[i]<<endl;
			cout<<"date of last payment "<<i<<" : "<<info.date[i]<<endl<<endl;	
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
		
			cout <<"input adress "<<i<< " : "; 
			getline(cin,info.adress[i]);
		
			cout << "input state "<<i<<" : ";
			getline(cin,info.state[i]);
		
			cout << "input ZIP "<<i<<" : ";
			getline(cin,info.zip[i]);
		
			cout << "input telephone number "<<i<<" : ";
			getline(cin,info.telp[i]);
		
			cout << "input account balance "<<i<<" : ";
			getline(cin,info.balance[i]);
		
			cout << "input date of last payment "<<i<<" : ";
			getline(cin,info.date[i]);
			cout<<endl<<endl;
		
			cout <<"--------------------------------------------"<<endl<<endl;
		
			cout<<"the new data is : "<<endl;
			
				for (int i=0 ; i<11 ; i++)
				{
					cout<<"name "<<i <<" : " << info.name[i]<<endl;
					cout<<"adress "<<i <<" : "<< info.adress[i]<<endl;
					cout<<"city " <<i <<" : " <<info.city[i]<<endl;
					cout<<"state "<<i<<" : "<<info.state[i]<<endl;
					cout <<"ZIP "<<i<<" : "<<info.zip[i]<<endl;
					cout<<"telephone number "<<i<<" : " <<info.telp[i]<<endl;
					cout<<"account balance "<< i<<" : "<<info.balance[i]<<endl;
					cout<<"date of last payment "<<i<<" : "<<info.date[i]<<endl<<endl;	
				}
				
		}
		
	}

return 0;
}

