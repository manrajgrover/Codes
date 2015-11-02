#include<iostream>
using namespace std;

class student{
	private:
		char name[20];
		int rollno;
		char address[20];
		char contact[20];
		char branch[20];
	public:
       void set_details(){
		cout<<"Enter Roll no: ";
		cin>>rollno;
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Branch: ";
		cin>>branch;
		cout<<"Enter address: ";
		cin>>address;
		cout<<"Enter contact: ";
		cin>>contact;
       }
       void get_details(){
		cout<<"Roll no: "<<rollno<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Branch: "<<branch<<endl;
		cout<<"Address: "<<address<<endl;
		cout<<"Contact: "<<contact<<endl;
       }
};

int main(){
	student s[10];
	int i;
	for(i=0;i<3;i++){
		cout<<"Enter details for student #"<<i+1<<endl;
		s[i].set_details();
	}
	for(i=0;i<3;i++){
		cout<<"Details of student #"<<i+1<<endl;
		s[i].get_details();
	}
	return 0;
}
