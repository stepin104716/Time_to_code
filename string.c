#include <stdio.h>
#include <string.h>
int main(){
char str[100];
int len;
printf("enter string: ");
gets(str);
len=strlen(str);
char *token=strtok(str,"_");
while(token!=NULL){
    printf("%s ",token);
    token=strtok(NULL,"_");
}


return 0;
}
