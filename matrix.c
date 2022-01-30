#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int rows,columns,a[20][20],i,j;
  printf("\nEnter the rows= ");
  scanf("%d",&rows);
  printf("\nEnter the columns= ");
  scanf("%d",&columns);
  for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
      printf("\nEnter the number a[%d,%d]= ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
      printf("\t%d",a[i][j]);
    }
    printf("\n");
    }
 
  
  
  return 0;
}