#include <stdio.h>

// function to find difference between two matrix
void Add(int row1,int col1,int row2,int col2,double A[][col1],double B[][col2]){
   // resultant matrix C.
   double C[row1][col1];
   int i,j;
  
   // finding sum.
   for(i=0;i<row1;i++){
       for(j=0;j<col1;j++){
           C[i][j] = A[i][j] + B[i][j];
       }
   }
  
   
   printf("\n Sum of matrices is :\n");
   for(i=0;i<row1;i++){
       for(j=0;j<col1;j++){
           printf("%.2lf ",C[i][j]);
       }
       printf("\n");
   }
}

// function to find difference between two matrix
void Sub(int row1,int col1,int row2,int col2,double A[][col1],double B[][col2]){
   // resultant matrix C.
   double C[row1][col1];
   int i,j;
  
   // finding difference
   for(i=0;i<row1;i++){
       for(j=0;j<col1;j++){
           C[i][j] = A[i][j] - B[i][j];
       }
   }
  

   printf("\n Difference of matrices is :\n");
   for(i=0;i<row1;i++){
       for(j=0;j<col1;j++){
           printf("%.2lf ",C[i][j]);
       }
       printf("\n");
   }
}

// function to find multiplication oftwo matrix A and B.
void Mul(int row1,int col1,int row2,int col2,double A[][col1],double B[][col2]){
   // resultant matrix C.
   double C[row1][col2];
   int i,j,k;
  
   // finding multiplication of two matrix
   for(i=0;i<row1;i++){
       for(j=0;j<col2;j++){
           C[i][j] = 0;
           for(k=0;k<col1;k++){
               C[i][j] += A[i][k]*B[k][j];
           }
       }
   }
  
  
   printf("\n Multiplication of matrices is :\n");
   for(i=0;i<row1;i++){
       for(j=0;j<col2;j++){
           printf("%.2lf ",C[i][j]);
       }
       printf("\n");
   }
}

int main()
{
   // choice variable of type integer.
   int choice;
  
   // loop validation for user choice
   while(1){
       printf("\nSelect and Operation:\n\n1. Addition\n2. Subtraction\n3. Multiplication\n\n\nYour Choice: ");
       scanf("%d",&choice);
      
       if(choice != 1 && choice != 2 && choice != 3){
           printf("\nError:\tInvalid choice!!\n");
           continue;
       }
       else break;
   }
  
   int row1,col1,row2,col2;
   // loop validation for dimension
   while(1){
       printf("Enter the dimension of matrix A: ");
       scanf("%d%d",&row1,&col1);
      
       printf("Enter the dimension of matrix B: ");
       scanf("%d%d",&row2,&col2);
      
       if(row1<0 || row2<0 || col1<0 || col2<0){
           printf("\nError:\tInvalid dimension!!\n");
           continue;
       }
       else break;
   }
  
   // creating matrix A and B of dimensions row1 x col1 and row2 x col2 resp.
   double A[row1][col1],B[row2][col2];
   int i,j;
  
   // getting elements of matrix A.
   printf("\nEnter the elements of matrix A\n");
   for(i=0;i<row1;i++){
       for(j=0;j<col1;j++){
           scanf("%lf",&A[i][j]);
       }
   }
  
   // getting elements of matrix B.
   printf("\nEnter the elements of matrix B\n");
   for(i=0;i<row2;i++){
       for(j=0;j<col2;j++){
           scanf("%lf",&B[i][j]);
       }
   }
  
   // using switch case for appropriate choice
   switch(choice)
   {
       case 1:
           // checks if dimesnions are same or not
           if(row1 == row2 && col1 == col2)
               Add(row1,col1,row2,col2,A,B);
           else
               printf("\nError:\tDimension should be equal!!\n");
           break;
       case 2:
           // checks if dimesnions are same or not
           if(row1 == row2 && col1 == col2)
               Sub(row1,col1,row2,col2,A,B);
           else
               printf("\nError:\tDimension should be equal!!\n");
           break;
       case 3:
           // checks the condition for multiplication of two matrix
           // i.e. column of first matrix must be equal to row of second matrix
           if(col1 == row2)
               Mul(row1,col1,row2,col2,A,B);
           else
               printf("\nError:\tDimension Mismatch!!\n");
           break;
   }
  
   return 0;
}

   
