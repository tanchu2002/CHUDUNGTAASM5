/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("nhap a: ");
    scanf("%d",&a);
    
    int b;
    printf("nhap b: ");
    scanf("%d",&b);
    
    int min;
    
    if(a<b){
        min=a;
    }else{
        min=b;
    }
    
    int i;
    i=min;
    int ucln=1;
    
    while(i>=1){
        if(a%i==0&&b%i==0){
            ucln=i;
            i=0;
        }else{
            i=i-1;
        }
    }
    printf("uoc chung lon nhat la: %d\n", ucln);
    
    int bcnn;
    bcnn=(a*b)/ucln;
    printf("boi chung nho nhat la: %d\n", bcnn);
}