#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter a number of term:");
    scanf("%d",&n);
    if(n==1){
        printf("Nth Fabonacci term =%d",a);
    }
   else if(n==2){
        printf("Nth Fabonacci term =%d",b);
    }
    else {
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("Nth Fabonacci term %d",b);
    }
    return 0;
}