#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
printf("hello world\n");

int arr[3][3];
int row;
int col;
int rowSum=0;
int colSum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("enter value at row %d and col %d : ",i,j);
        scanf("%d",&arr[i][j]);
    }
}
printf("enter row no : ");
scanf("%d",&row);
printf("row no is %d\n",row);

for(int i=row;i==row;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
        rowSum+=arr[i][j];
    }
}
printf("sum of row elements is %d\n",rowSum);
printf("enter col no : ");
scanf("%d",&col);


for(int i=row;i<3;i++){
    for(int j=col;j==col;j++){
   printf("%d ",arr[i][j]);
   colSum+=arr[i][j];
    }
}
printf("sum of col elements is %d\n",colSum);
return 0;
}