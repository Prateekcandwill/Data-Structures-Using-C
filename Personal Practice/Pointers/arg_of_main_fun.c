/* Program-21. main() function arguments-1 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int x, y, z;
    if (argc == 3)
    {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        z = x + y;
        printf("\nResult = %d\n", z);
    }
    else
    {
        printf("\nIncorrect argument number\n");
    }
    return 0;
}
