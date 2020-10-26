#include <stdio.h>
#include <string.h>

void win(){
    printf("Congratulations!\n");
    printf("StackOverflow Complete!\n");
    printf("Get the shell\n");
    system("/bin/sh");
}

int main(){
    char Alice[100]="Alice";
    char name[20];

    printf("Let's StackOverflow!\n\n");
    printf("My name is %s!\n",Alice);
    printf("What's your name?  :  ");

    //vuln
    gets(name);

    printf("%s: Hello,%s!\n\n",Alice,name);

    if(strcmp(Alice,"Alice")!=0){
        win();
    }

    printf("Your name is so cool!\n");
    
    return 0;
}