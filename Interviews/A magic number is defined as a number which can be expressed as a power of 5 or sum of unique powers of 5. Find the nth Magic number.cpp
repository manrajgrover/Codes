#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int answer=0,number_of_bits=0,N;
    cin>>N;
    while(N){
        number_of_bits++;
        if(N&1){
            answer+=pow(5,number_of_bits);
        }
        N>>=1;
    }
    cout<<answer;
    return 0;
}