#include <stdio.h>
#include<math.h>

int main() {
    int a;
    printf("enter a number to see if  it is armstrong or not");
    scanf("%d",&a);
    int n=0 ;
    int z = a;
    while(z!=0){
        z=z/10;
         n++;
    }
    int s = a;
    int w=0;
    int sum = 0;
    while(s!=0){
        w=s%10;
        s=s/10;
        sum =sum + pow(w,n);
    }
    if(sum==a )
    printf("the number is armstrong");
    else
    printf("number is not armstrong");
    
    return 0;
}