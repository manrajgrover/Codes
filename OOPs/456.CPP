#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class ba{
    private:
	char name[100],type[100];
	long long accno,balance;
    public:
	char* get_name(){
	    return name;
	}
	long long get_accno(){
	    return accno;
	}
	long long get_balance(){
	    return balance;
	}
	char* get_type(){
	    return type;
	}
	void set_name(char a[]){
	    strcpy(name,a);
	}
	void set_type(char a[]){
	     strcpy(type,a);
	}
	void set_accno(long long a){
	     accno=a;
	}
	void set_balance(long long a){
	    balance=a;
	}
	ba(long long a, long long v,char x[],char y[]){
	    balance=v;
	    accno=a;
	    strcpy(type,x);
	    strcpy(name,y);
	}
	long long deposit(long long x){
	    balance=balance+x;
	    return balance;
	}
	long long withdraw(long long x){
	    if(balance-x<0){
		return -1;
	    }
	    balance=balance-x;
	    return balance;
	}
	void display(){
	   cout<<name<<" "<<accno<<" "<<type<<" "<<balance<<endl;
	}
};


int main(){
	ba* customers[10];
	ba tommy(1,10000,"Type1","Tommy");
	tommy.display();
	cout<<"Depositing.."<<endl;
	long long bal=tommy.deposit(3000);
	tommy.display();
	cout<<"Withdrawing.."<<endl;
	bal=tommy.withdraw(14000);
	if(bal==-1){
	  	cout<<"Cannot withdraw this much amount"<<endl;
	}
	else{
		tommy.display();
	}
	char name[100],type[100];
	long long accno,balance;
	for(int i=0;i<3;i++){
		cout<<"Enter details of customer #"<<i+1<<endl;
		cout<<"Enter name"<<endl;
		cin>>name;
		cout<<"Enter type"<<endl;
		cin>>type;
		cout<<"Enter accno"<<endl;
		cin>>accno;
		cout<<"Enter balance"<<endl;
		cin>>balance;
		customers[i]=new ba(accno,balance,type,name);
	}
	for(int i=0;i<3;i++){
		cout<<"Details of customer #"<<i+1<<endl;
		customers[i]->display();
	}
	return 0 ;
}
