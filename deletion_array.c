#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int a[20];
    int i,num,size,pos;

    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements are :");
    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
    }
    printf("At what position you want to delete the element\n");
    scanf("%d",&pos);

    if(pos<=0 || pos>size){
        printf("Invalid position");
    }
    else{
        for(i=pos-1;i<size-1;i++){
            a[i]=a[i+1];
        
        }
        // Deleting an element does not affect the size of the array
        printf("The resultant array is :\n");
         for(i=0;i<size-1;i++){
            printf("%d\n",a[i]);
         }
    }
    return 0;
}