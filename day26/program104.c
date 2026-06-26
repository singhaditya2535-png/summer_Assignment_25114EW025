#include <stdio.h>
int main(){
    int answer,score=0;
    printf("===welcome to the quiz application===\n");

    printf("Q1.whate is the capital of india?\n");
    printf("1.mumbai\n2.new delhi\n3.kolkata\n4.chennai\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer==2)
    score++;

    printf("Q2.which language is used to write C programs?\n");
    printf("1.python\n2.java\n3.C\n4.HTML\n");
    printf("enter your answer: ");
    scanf("%d",&answer);

    if(answer==3)
    score++;

    printf("\n===Quiz Result===\n");
    printf("your score: %d\2\n",score);
    if(score==2){
        printf("Excellent! you got all answer correct.\n");

    }
    else if(score==1){
        printf("good job!\n");
    }
else{
    printf("better luck next time!\n");
    return 0;
}

}