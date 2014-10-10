#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(void) {
  char str[3000],*p;
  int t,l,i;
  cin>>t;
  while(t--){
  	cin>>str;
  	l=strlen(str);
  	for(i=l-4;i>=0;i--){
  	if(!strncmp(str+i,"????",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"C???",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"?H??",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"??E?",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"???F",4))
  		strncpy (str+i,"CHEF",4);
 	if(!strncmp(str+i,"CH??",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"C?E?",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"C??F",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"?HE?",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"?H?F",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"??EF",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"CHE?",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"CH?F",4))
  		strncpy (str+i,"CHEF",4);
  	if(!strncmp(str+i,"C?EF",4))
  		strncpy (str+i,"CHEF",4);
if(!strncmp(str+i,"?HEF",4))
  		strncpy (str+i,"CHEF",4);
  	  	if(!strncmp(str+i,"????",4))
  		strncpy (str+i,"CHEF",4);
  	}
  	while(p= strstr(str,"?"))
  		*p='A';
  	cout<<str<<endl;
  }
  return 0;
} 