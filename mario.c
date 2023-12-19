

#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int height;

    do
    {
        printf("Specificati inaltimea piramidei: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);


    for (int line = 0; line < height; line++)
    {
        for (int spaces = height - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < line + 2; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
