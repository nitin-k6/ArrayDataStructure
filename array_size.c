#include<stdio.h>
#include<stdlib.h>


int main(){
    int i;
    int *p;
    int *q;

    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;
      
      
    q=(int *)malloc(10*sizeof(int));
    
    for (i=0;i<5;i++)
         q[i]=p[i];
         free(p);
         p=q;
         q=NULL;
        

        p[5]=13;
        p[6]=15;
        for (i=0;i<7;i++){  // if we write i<10  after index 6 it will give us garbage value.
            printf("%d\n",p[i]);
        }    
      return 0;
}