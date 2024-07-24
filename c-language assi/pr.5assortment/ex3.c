#include<stdio.h>
int main (){
  int arrTwoD[3][3];
    int transposeMatrix;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Element Is  %d %d : ",i,j);
            scanf("%d",&arrTwoD[i][j]);
        }
    }

        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arrTwoD[j][i]);
        }
        printf("\n");
}
    return 0;
}