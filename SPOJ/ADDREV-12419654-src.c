#include <stdio.h>

unsigned int reverse(unsigned long long n){
	unsigned long long rem,rev=0; 
	while(n!=0)
  	{
   		rem=n%10;
     	rev=rev*10+rem;
     	n/=10;
  	}
  	return rev;
}
void main() {
	unsigned long long t,sum,a,b;
	scanf("%llu",&t);
	while(t--){
		scanf("%llu",&a);
		scanf("%llu",&b);
		a=reverse(a);
		b=reverse(b);
		sum=a+b;
		sum=reverse(sum);
		printf("%llu\n",sum);
	}
}