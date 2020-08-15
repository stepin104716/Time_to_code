#include <stdio.h>
int main(){
int n,flag=0;
printf("enter the number");
scanf("%d",&n);
for(int i=2;i<=n/2;i++){
if(n%i==0)
flag=1;
break;
}
if(n==1){
    printf("true");
}
else{
if(flag==1)
    printf("false");
else
    printf("true");
}


return 0;
}
