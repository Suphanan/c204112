#include "T112_HW03_2.h"

int main()
{
    int n;

    printf("Please input n: ");
    scanf("%d", &n);

    int result = find_nth_term(n);
    printf("%d\n", result);

    return 0;
}

