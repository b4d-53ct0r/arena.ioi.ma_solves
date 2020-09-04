#include <stdio.h>
#include <string.h>
//#include <love.h>
int fact(int n){
    if(n==0){
        return 1;
    }if(n>5){return 0;}else{return n*fact(n-1);}
    }

int main()
{
    int num;
    int inp,i ;
    scanf("%d", &inp);
    for(i = 0 ; i<inp;i++){
        scanf("%d", &num);
        printf("%d\n",fact(num)%10);
    }
 
}
