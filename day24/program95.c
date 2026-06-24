#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    char longest[100];
    int maxlen=0,len=0,start=0;

    printf("enter a string: ");
    scanf("%s",str);
    for(int i=0; ;i++){
        if(str[i]!=' ' && str[i]!='\0' && str[i]!='\n'){
            len++;
        }
        else{
            if(len>maxlen){
                maxlen=len;
                strncpy(longest,&str[start], len);
                longest[len]='\0';
            }
            len=0;
            start=i+1;
        }
        if(str[i]=='\0')
        break;
    }
    printf("longest word:%s\n",longest);
    printf("length:%d\n",maxlen);
    return 0;
}