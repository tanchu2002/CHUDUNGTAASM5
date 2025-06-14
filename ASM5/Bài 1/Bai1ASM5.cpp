/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n;
	printf("nhap n: ");
	scanf("%d",&n);

	int cnt=1;
	int tong=0;

	while(cnt<n) {
		if(n%cnt==0) {
			printf("cac uoc la: %d\n", cnt);
			tong= tong+cnt;
		}
		cnt=cnt+1;
	}
	printf("tong cac uoc la: %d",tong);
}