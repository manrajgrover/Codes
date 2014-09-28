#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string.h>
using namespace std;
#define gc getchar_unlocked
int prime[1000005];
int a[100002];
void seive();
int check(int n);
void markmultiples(int i);
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 
int main()
{
    int t,n,flag,flag1,ans,i,j,max,count;
    seive();
    scanint(t);
    //cin >> t;
    while (t--) {
        //cin >> n;
        scanint(n);
        ans = 0;
        flag = 0;
        memset(a,0,sizeof(a));
        //scanint(n);
        for (i = 0; i < n; i++) {
            //cin >> a[i];
            scanint(a[i]);
        }
        flag = check(n);
        if (flag == 1) {
            cout << ans << endl;
        } else {
            for (i = 2; i <= 99983; i++) {
                if (prime[i] == 0) {
                    max = 0;
                    for (j = 0; j < n; j++) {
                        count = 0;
                        if (a[j] % i == 0) {
                            while (a[j] % i == 0) {
                                a[j] = a[j] / i;
                                count++;
                            }
                            if (max < count) {
                                max = count;
                            }
                        }
                    }
                    flag = check(n);
                    ans = ans + max;
                    if (flag == 1) {
                        break;
                    }
                }
            }
            cout << ans << endl;
        }
    }
 
    return 0;
}
 
void seive()
{
    int i;
    for (i = 2; i <= 1000000; i++) {
        if (prime[i] == 0) {
            markmultiples(i);
        }
    }
}
 
void markmultiples(int i)
{
    int t = 2;
    while (i*t <= 1000000) {
        prime[i*t] = 1;
        t++;
    }
}
 
int check(int n)
{
    int i,flag;
    for (i = 0; i < n; i++) {
        if (a[i] != 1) {
            return 0;
        }
    }
    return 1;
} 