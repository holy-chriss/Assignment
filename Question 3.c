#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int i, n, fakt = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i=1;i<= n;i++) //use braces to write more than one statement inside the loop
    {
    fakt=fakt*i;
    printf("Factorial of %d is %d\n", i, fakt);
    }
}
