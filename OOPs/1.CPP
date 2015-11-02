#include<iostream>
using namespace std;
class area{
    private:
	int r;
	float a;
	int m,n;
    public:
    friend void parea(area box );
	area(){
	    cout<<"Default constructor called";
	    cout<<endl<<"No parameter passed"<<endl;
	}
	area(int b){
	    cout<<"Only one parameter passed"<<endl;
	    r=b;
	    float ar=3.14*b*b;
	    cout<<"Area of circle is "<<ar<<endl;
	}
	area(int x,int y){
		m=x;n=y;
		a=areaOfSq(x,y);
	    cout<<"Two parameter constructor called"<<endl;
	    cout<<"Area of square is "<<a<<endl;
	}
	inline int areaOfSq(int a, int b){
		return (a * b);
    };
    void seta(float x){
    	a=x;
    }
    float geta(){
    	return a;
    }
};
int a=3;

void parea(area box ){
   cout << "Inline function called, area of 2D is : " << box.a<<endl;
}

int main(){
    area d;
    area circle(4);
    area square(2,2);
    parea(square);
    int a=2;
    cout<<"Local Variable is a="<<a<<endl;
    cout<<"Global Variable is a="<<::a<<endl;
    return 0;
}
