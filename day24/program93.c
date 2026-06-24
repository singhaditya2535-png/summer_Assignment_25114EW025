#include <stdio.h>
#include <string.h>
int isrotation(char str1[],char str2[]){
    int len1=strlen(str1);
    int len2=strlen(str2);

    if(len1!=len2)
    return 0;
    char temp[200];
    strcpy(temp,str1);
    strcat(temp,str1);

    if(strstr(temp,str2)!=NULL)
    return 1;

    return 0;
}
int main(){
    char str1[100],str2[100];
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    if(isrotation(str1,str2)){
        printf("The string are rotation of each other.\n");
    }
    else{
        printf("the string are not rotation of each other.\n");
    }
    return 0;
}