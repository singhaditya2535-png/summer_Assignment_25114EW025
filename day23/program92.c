#include <stdio.h>
int main(){
    int freq[256]={0};
    int i,max=0;
    char str[100];
    char maxchar;

    printf("enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[i];
            maxchar=i;
        }
    }
    printf("maximum occurring character: %c\n",maxchar);
    printf("Frequency: %d\n",max);
    return 0;
}