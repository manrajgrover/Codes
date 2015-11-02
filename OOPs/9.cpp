#include<iostream>
#include<string.h>
#include<stdio.h>
#include <sstream>
#include <fstream>
using namespace std;

class account{
	private:
    	int accno;
    	char accname[20];
    	char acctype[20];
    protected:
    	int balance;
    public:
    	void getinfo(char a[]){
		    cout<<"Enter the name:"<<endl;
		    cin>> accname;
		    cout<<"Enter the account number:"<<endl;
		    cin>>accno;
		    strcpy(acctype,a);
		    cout<<"Enter the account balance:"<<endl;
		    cin>>balance;
		}
		int getacc(){
			return accno;
		}
		char* gettype(){
			return acctype;
		}
		int getbal(){
			return balance;
		}
    	void display(){
    		cout<<accno<<endl;
    		cout<<accname<<endl;
    		cout<<acctype<<endl;
    		cout<<balance<<endl;
		}
		account(string details){
    		stringstream accountst(details);
    		accountst >> accno;
    		accountst >> accname;
    		accountst >> acctype;
    		accountst >> balance;
		}
};

int main(){
    account* cust[10];
    char acctype[20];
    ifstream accFile("storage.txt");
    string y;
    for(int i=0;i<3;i++){
    	getline(accFile,y);
    	account* s = new account(y);
    	cust[i] = s;
    }
    int acno;
    while(1){
    	cout<<"Enter account number you wish to search"<<endl;
    	cin>>acno;
    	int f=0;
    	for(int i=0;i<3;i++){
    		if(cust[i]->getacc()==acno){
    			cout<<"Account found!"<<endl;
    			cust[i]->display();
    			f=1;
    			break;
    		}
    	}
    	if(f==0){
    		cout<<"Account not found!"<<endl;
    	}
    }
    return 0;
}
