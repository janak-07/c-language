#include <stdio.h>
void printstring (char arr[]);
int main(){


char firstName[]="janak";
char lastName[]="diyora";
printstring("firstName");
printstring("lastName");
    return 0;

}

void printstring (char arr[]){

    for (int i = 0; arr[i]!='\0'; i++) {
        printf("%c",arr[i]);
    }
    printf("\n");
}