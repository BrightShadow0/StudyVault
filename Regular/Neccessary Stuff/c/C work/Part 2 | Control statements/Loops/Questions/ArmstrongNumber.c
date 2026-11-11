#include <stdio.h>
int main()
{
    int n, temp, ld, sum;
    for(int i = 1; i <= 500; i++)
    {
        n = i;
        temp = n;
        sum = 0;
        while(temp > 0)
        {
            ld = temp % 10;
            temp /= 10;
            sum += ld * ld * ld;
        }
        if(sum == n)
            printf("%d\n", n);
    }
    return 0;
}