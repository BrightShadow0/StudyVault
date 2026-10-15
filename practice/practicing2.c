#include <stdio.h>
void even(int n, int end)
{
    if (n > end)
        return;

    if (n % 2 == 0)
        printf("%d ", n);

    even(n + 1, end);
}
int main()
{
    int start, end;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);
    even(start, end);
    return 0;
}