#include <iostream>
using namespace std;

bool isPrime(int number)
{
	int i;
	for (i=2; i<number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;	
}


int main()
{
	long n,d,i;
	cin>>n;
	i=4;
	while(1 && i<n){
		if(!isPrime(i)){
			d=n-i;
			if(!isPrime(d)){
				cout<<i<<" "<<d<<endl;
				break;
			}
			else{
				i++;
			}
		}
		else{
			i++;
		}
	}
	return 0;
}