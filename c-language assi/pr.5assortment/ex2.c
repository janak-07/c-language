#include <stdio.h>

int main (){
   int arrTwo[3][3];
    int max = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("number is %d %d :",i,j);
            scanf("%d",&arrTwo[i][j]);
        }
        printf("\n");
    }
        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arrTwo[i][j] > max){
                max = arrTwo[i][j];
            }
        }
        printf("\n");
    }
    printf("Largest Number Is %d: ",max);

    return 0;
}