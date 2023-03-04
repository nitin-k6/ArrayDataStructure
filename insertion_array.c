#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int a[25];
    int i;
    int size ,pos,num;

    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter elements of array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    printf("The elements of array are:\n");
    for (i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    printf("Enter the element you want to insert:\n");
    scanf("%d", &num);

    printf("Enter the position:\n");
    scanf("%d",&pos);
     

     if(pos>size+1 || pos<=0){
       printf("Invalid Position\n");
     }
     else{
    for(i=size;i>=pos-1; i--){  // nth position = n-1 index
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("The new array is:\n");
    for(i=0;i<size;i++){
        
        printf("%d\n",a[i]); 
    }
     }
        

    return 0;
}