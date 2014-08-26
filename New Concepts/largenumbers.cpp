#include <iostream>
#include <string>
#define OVERFLOW 2
#define ROW b_len
#define COL a_len+b_len+OVERFLOW
 
using namespace std;
 
int getCarry(int num) {
    int carry = 0;
    if(num>=10) {
        while(num!=0) {
            carry = num %10;
            num = num/10;
        }
    }
    else carry = 0;
    return carry;
}
 
int num(char a) {
    return int(a)-48;
}
 
string mult(string a, string b) {
        string ret;
        int a_len = a.length();
        int b_len = b.length();
        int mat[ROW][COL];
        for(int i =0; i<ROW; ++i) {
            for(int j=0; j<COL; ++j) {
                mat[i][j] = 0;
 
            }
        }
 
        int carry=0, n,x=a_len-1,y=b_len-1;
        for(int i=0; i<ROW; ++i) {
            x=a_len-1;
            carry = 0;
            for(int j=(COL-1)-i; j>=0; --j) {
                if((x>=0)&&(y>=0))  {
                    n = (num(a[x])*num(b[y]))+carry;
                    mat[i][j] = n%10;
                    carry = getCarry(n);
                }
                else if((x>=-1)&&(y>=-1)) mat[i][j] = carry;
                x=x-1;
            }
            y=y-1;
        }
 
        carry = 0;
        int sum_arr[COL];
        for(int i =0; i<COL; ++i) sum_arr[i] = 0;
        for(int i=0; i<ROW; ++i) {
            for(int j=COL-1; j>=0; --j) {
                sum_arr[j] += (mat[i][j]);
            }
        }
        int temp;
        for(int i=COL-1; i>=0; --i) {
            sum_arr[i] += carry;
            temp = sum_arr[i];
            sum_arr[i] = sum_arr[i]%10;
            carry = getCarry(temp);
        }
 
        for(int i=0; i<COL; ++i) {
            ret.push_back(char(sum_arr[i]+48));
        }
 
        while(ret[0]=='0'){
            ret = ret.substr(1,ret.length()-1);
        }
        return ret;
}
 
void printhuge(string a) {
    cout<<"\n";
    for(string::iterator i = a.begin(); i!=a.end(); ++i) {
        cout<<*i;
    }
}
 
int main() {
    string a,b;
    cin>>a>>b;
    printhuge(mult(a,b));
    return 0;
}
