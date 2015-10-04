#include<bits/stdc++.h>
using namespace std;

char a[55][55];
int max=0,m=0,count1=0,visited[55][55];
struct no{
    char a;
    int r,c,depth;
} temp;

struct no save[6000];

void f(int r, int c, struct no t){
    int ar[]={0, 0, 1, -1, 1, 1, -1, -1},ac[]={1, -1, 0, 0, -1, 1, -1, 1};
    int rr, cc;
    for(int i=0;i<8;i++) {
        rr=t.r+ar[i];
        cc=t.c+ac[i];
        if(rr<0||cc<0){
            continue;
        }
        if(rr>=r||cc>=c){
            continue;
        }
        else if(a[rr][cc]==t.a+1&&visited[rr][cc]==0){
            struct no t1;
            t1.a=a[rr][cc];
            t1.r=rr;
            t1.c=cc;
            t1.depth=t.depth+1;
            if(t1.depth>m){
                m=t1.depth;
            }
            save[count1++]=t1;
            visited[rr][cc]=1;
        }
    }
    return;
}
void path(int r,int c) {
    if(count1!=0){
        m=1;
    }
    while(count1!=0){
        count1--;
        struct no t=save[count1];
        f(r,c,t);
    }
}
int main() {
    int r, c,t=0;
    char x;
    while(1){
    	t++;
    	scanf("%d %d",&r,&c);
    	if(r==0&&c==0){
    		break;
    	}
        count1=0;
        m=0;
        scanf("%c",&x);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%c",&a[i][j]);
                visited[i][j]=0;
                if (a[i][j]=='A') {
                    temp.a=a[i][j];
                    temp.r=i;
                    temp.c=j;
                    temp.depth=1;
                    save[count1++]=temp;
                }
            }
            scanf("%c",&x);
        }
        path(r,c);
        printf("Case %d: %d\n",t,m);
    }
    return 0;
}