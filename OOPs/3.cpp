#include<iostream>
using namespace std;

class two;

class one{
	private:
		int x;
	public:
		int getval(){
			return x;
		}
		void setval(int temp){
			x=temp;
		}
		friend void swap(one&,two&); 
};

class two{
	private:
		int y;
	public:
		int getval(){
			return y;
		}
		void setval(int temp){
			y=temp;
		}
		friend void swap(one&,two&);
};

void swap(one &c,two &d){
	int temp=c.x;
	c.x=d.y;
	d.y=temp;
}

int main(){
	one first;
	two second;
	first.setval(10);
	second.setval(5);
	cout<<"First val is "<<first.getval()<<endl;
	cout<<"Second val is "<<second.getval()<<endl;
	swap(first,second);
	cout<<"First val is "<<first.getval()<<endl;
	cout<<"Second val is "<<second.getval()<<endl;
}
