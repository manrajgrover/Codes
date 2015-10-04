#define s(x) scanf("%d",&x)
#define r(i,x) for(i=0;i<=x;i++)
main(){int t,n,i,j,a[101][101];s(t);while(t--){s(n);r(i,n-1) r(j,i) s(a[i][j]); for(i=n-2;i>=0;i--) r(j,i) a[i][j]+=a[i+1][j]>a[i+1][j+1]?a[i+1][j]:a[i+1][j+1]; printf("%d\n",a[0][0]);}}