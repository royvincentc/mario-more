#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get value of int
    int n;

    // do - while func
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // row
    for (int i = 0; i < n ; i++)
    {
        // column space
        for (int j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        // column hash
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("  ");

        // right row
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // move next row
        printf("\n");
    }
}
