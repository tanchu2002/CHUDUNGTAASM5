/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int tong = 0;
    int i;

    while (n != 0) {
        i = n % 10;    
       if(i>tong){
           tong=i;
       }
        n = n / 10;
    }
    printf("chu so lon nhat la: %d\n", tong);
}