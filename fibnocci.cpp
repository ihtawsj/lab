#include<iostream>
#include<cmath>
int fib(int n){
    int a,b,c;
    printf("enter the first 2 elements of a fibn. series");
    scanf("%d %d",&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    
    for(int i=0;i<n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        
    }
}
int main(){
    int n;
    
    printf("enter a numbers");
    scanf("%d",&n);
    fib(n);
    return 0;
}