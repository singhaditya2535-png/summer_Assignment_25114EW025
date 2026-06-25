#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i,j;
    printf("Enter a string: ");
    scanf("%s",str);

    printf("common (repeated) characters are: ");
    for(i=0;str[i]!='\0';i++){
        int count=1;
        if(str[i]==' ')
        continue;
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
                str[j]='0';
            }
        }
        if(count>1 && str[i]!='0'){
            printf("%c",str[i]);
        }
    }
    return 0;
}