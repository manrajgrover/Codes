#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

class books{
    private:
	char name[100],publisher[100],title[100],author[100];
	long long stock,cost;
    public:
	char* get_name(){
	    return name;
	}
	char* get_publisher(){
	    return publisher;
	}
	char* get_author(){
	    return author;
	}
	long long get_stock(){
	    return stock;
	}
	long long get_cost(){
	    return cost;
	}
	char* get_title(){
	    return title;
	}
	void set_name(char a[]){
	    strcpy(name,a);
	}
	void set_title(char a[]){
	     strcpy(title,a);
	}
	void set_author(char a[]){
	     strcpy(author,a);
	}
	void set_publisher(char a[]){
	    strcpy(publisher,a);
	}
	void set_cost(long long a){
	     cost=a;
	}
	void set_stock(long long a){
	    stock=a;
	}
	void display(){
	   cout<<name<<" "<<publisher<<" "<<author<<" "<<title<<" "<<cost<<" "<<stock<<endl;
	}
};


int main(){
   int sz=3;
   books book[3];
   char n[100],a[100],p[100],t[100];
   long long c,s;
   int i=0;
   for(i=0;i<sz;i++){
   	   cout<<"Enter details of book #"<<i+1<<endl;
       cin>>n>>a>>p>>t>>c>>s;
       book[i].set_name(n);
       book[i].set_author(a);
       book[i].set_publisher(p);
       book[i].set_title(t);
       book[i].set_cost(c);
       book[i].set_stock(s);
   }
   while(1){
	cout<<"Enter book name to be searched"<<endl;
	cin>>n;
	int pos=-1;
	for(i=0;i<sz;i++){
	   if(strcmp(n,book[i].get_name())==0){
		pos=i;
		break;
	   }
	}
	if(pos==-1){
	    cout<<"NOT FOUND "<<endl;
	}
	else{
	    book[pos].display();
	    long long x;
	    cout<<"Enter number of books needed"<<endl;
	    cin>>x;
	    if(book[pos].get_stock()<x){
		cout<<"Required stock not available"<<endl;
	    }
	    else{
			cout<<"Ordered placed! Total cost is: ";
			cout<<book[pos].get_cost()*x<<endl;
			int y=book[pos].get_stock()-x;
			book[pos].set_stock(y);
	    }
	}
   }
   return 0 ;
}
