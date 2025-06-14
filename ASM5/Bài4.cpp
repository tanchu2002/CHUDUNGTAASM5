/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    int i;

    while (n != 0) {
        i = n % 10;    
        n = n / 10;
    }
    printf("So dau tien la:%d", i);
}