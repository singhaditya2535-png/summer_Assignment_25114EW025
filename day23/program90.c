#include <stdio.h>
#include <string.h>
int main(){
    int i,j;
    char str[100];

    printf("enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                printf("First repeating character:%c\n",str[i]);
                return 0;
            }
        }
    }
    printf("no repeating character found.\n");
    return 0;
}