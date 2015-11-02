#include<iostream>
#include<string.h>
#include<stdio.h>
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
};

class savings:public account{
    public:
    	void withdrawl(){
		    cout<<"Enter amount you wish to withdraw: ";
		    int amount ;
		    cin>>amount;
		    if(amount>balance){
		        cout<<"You don't have enough money to withdraw"<<endl;
		    }
		    else{
		        if(amount >5000){
		            cout<<"You cannot withdraw more than 5k in savings account"<<endl;
		        }
		        else{
		            cout<<"Withdrawed amount is:"<<amount;
		            balance=balance-amount;
		            cout<<"Balance left: "<<balance<<endl;
		        }
    		}
		}
    	void deposit(){
		    cout<<"Enter the amount u want to deposit"<<endl;
		    int amount;
		    cin>>amount;
		    balance=balance+amount;
		    cout<<"Your current balance is "<<balance<<endl;
		    int r;
		    r=amount*(.01);
		    balance=balance +r;
		    cout<<"Balance after adding interest is "<<balance<<endl;
		}
};
class current:public account{
    public:
    	void withdrawl(){
		    cout<<"Enter amount you wish to withdraw: "<<endl;
		    int amount ;
		    cin>>amount;
		    if(amount>balance){
		        cout<<"You don't have enough money to withdraw "<<endl;
		    }
		    else{
		        cout<<"Withdrawed amount is: "<<amount<<endl;
		        balance=balance-amount;
		        cout<<"Balance left: "<<balance<<endl;
		        if (balance<1000){
		            balance=balance-(.01*(1000-balance));
		        }
		        cout<<"Balance left after imposing charge"<<balance<<endl;
		    }
		}
    	void deposit(){
		    cout<<"Enter the amount you want to deposit";
		    int amount;
		    cin>>amount;
		    balance=balance+amount;
		    cout<<"Balance now is: "<<balance<<endl;
		}
};

int main(){
    account* cust[10];
    char acctype[20];
    for(int i=0;i<3;i++){
    	cout<<"Enter details of customer #"<<i+1<<endl;
    	cout<<"Please enter account type"<<endl;
    	cin>>acctype;
    	if(acctype=="Savings"){
    		cust[i] = new savings;
    		cust[i]->getinfo("Savings");
    	}
    	else{
    		cust[i] =new current;
    		cust[i]->getinfo("Current");
    	}
    }
    for(int i=0;i<3;i++){
    	cout<<"Balance for customer with account number "<<cust[i]->getacc()<<" is "<<cust[i]->getbal()<<endl;
    }
    int x;
    cout<<"Enter customer number you want to change details of"<<endl;
    cin>>x;
    if(x>=3){
    	cout<<"No such customer currently in the list. Exiting!"<<endl;
    	return 0;
    }
    cout<<"Please choose what you want to do:"<<endl;
    int c1=1;
    while(c1!=4){
        cout<<"1. Withdrawl"<<endl;
        cout<<"2. Deposit"<<endl;
        cout<<"3. Display details"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>c1;
        switch(c1){
        	case 1:
        	    if(strcmp(cust[x]->gettype(),"Savings")==0){
					static_cast<savings*>(cust[x])->withdrawl();
        	    }
        	    else if(strcmp(cust[x]->gettype(),"Current")==0){
        	    	static_cast<current*>(cust[x])->withdrawl();
        	    }
            	break;
            case 2:
        	    if(strcmp(cust[x]->gettype(),"Savings")==0){
        	    	static_cast<savings*>(cust[x])->deposit();
        	    }
        	    else if(strcmp(cust[x]->gettype(),"Current")==0){
        	    	static_cast<current*>(cust[x])->deposit();
        	    }
            break;
            case 3:
        	    if(strcmp(cust[x]->gettype(),"Savings")==0){
        	    	cust[x]->display();
        	    }
        	    else if(strcmp(cust[x]->gettype(),"Current")==0){
        	    	cust[x]->display();
        	    }
            	break;
            case 4:
            	break;
        }
    }
    return 0;
}
