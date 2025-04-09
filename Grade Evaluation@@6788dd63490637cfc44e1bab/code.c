#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'A'){
        printf("Excellent\n");
    }
    else if(ch == 'B'){
        printf("Good\n");
    }
    else if(ch == 'C'){
        printf("Average\n");
    }
    else if(ch == 'D'){
        printf("Below Average\n");
    }
    else if(ch == 'F' || ch == 'f'){
        printf("Fail\n");
    }
    else{
        printf("Invaild grade\n");
    }
    return 0;
}