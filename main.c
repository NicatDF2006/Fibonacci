#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, num2 = 1;
    // fibonaccinin hara kimi gedəcəyini soruşuruq
    int i;

    printf("Enter number: ");
    scanf("%d",&i);

    while(num2 <= i) {
        printf("%d %d ", num1, num2);
        num1 = num1 + num2;
        num2 = num1 + num2;
    }

    return 0;
}
