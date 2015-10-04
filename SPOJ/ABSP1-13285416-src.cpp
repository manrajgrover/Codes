//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[10005];

inline unsigned long long scan_ll(){
    int c;
    do
        c = fgetc(stdin);
    while ( (c < '0' || c > '9') && c != EOF );
    unsigned long long a = 0;
    while ( c >= '0' && c <= '9' )
    {
        a = a*10 + (c - '0');
        c = fgetc(stdin);
    }
    return a;
}

inline void print_ll(long long n){
    char buffer[sizeof(n) * 8 * 3 / 10 + 3]; 
    int index = sizeof(buffer)-1;
    int end = index;
    buffer[index--] = 0;
    do {
       buffer[index--] = (n % 10) + '0';
       n /= 10;
    } while(n);
    puts(&buffer[index+1]);
}

int main() {
	ll t;
	t=scan_ll();
	while(t--){
		ll n;
		n=scan_ll();
		for(ll i=0;i<n;i++){
			a[i]=scan_ll();
		}
		ll fact=-(n-1),total=0;
		for(ll i=0;i<n;i++){
			total=total+fact*a[i];
			fact+=2;
		}
		print_ll(total);
	}
	return 0;
}