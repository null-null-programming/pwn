#include <stdio.h>
#include <string.h>

int main(){
    char ans[10];
    
    printf("Do you want to get the shell ?\n");
    printf("yes/no : ");

    fgets(ans,10,stdin);

    if(strcmp(ans,"yes\n")==0){
        system("/bin/sh");
    }else if(ans=="no\n"){
        printf("Bye!\n");
    }else{
        printf("Huh?\n");
    }

    return 0;
}