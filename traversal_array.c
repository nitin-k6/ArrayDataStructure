// Traversing in array  --> accessing elements of an array
#include<stdio.h>
#include<stdlib.h>

int main(){
    int size,a[50];
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter elements of array\n");
    for (int i=0;i<size; i++){
    scanf("%d", &a[i]);
    }
    printf("Elements in the array are:\n");
    for (int i=0;i<size; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}