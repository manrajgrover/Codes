#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1,b1,a2,b2,a3,b3;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    int area1=a1*b1,area2=a2*b2,area3=a3*b3;
    int f=0;
    if((a2+a3<=a1) &&(b2<=b1) &&(b3<=b1)){
        f=1;
    }
    else if((a2+b3<=a1) &&(b2<=b1) &&(a3<=b1)){
        f=1;
    }
    else if((b2+a3<=a1) &&(a2<=b1) &&(b3<=b1)){
        f=1;
    }
    else if((b2+b3<=a1) &&(a2<=b1) &&(a3<=b1)){
        f=1;
    }
    else if((a2+a3<=b1) &&(b2<=a1) &&(b3<=a1)){
        f=1;
    }
    else if((a2+b3<=b1) &&(b2<=a1) &&(a3<=a1)){
        f=1;
    }
    else if((b2+a3<=b1) &&(a2<=a1) &&(b3<=a1)){
        f=1;
    }
    else if((b2+b3<=b1) &&(a2<=a1) &&(a3<=a1)){
        f=1;
    }
    if(f==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}