#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 13195;

	for (x = 13195; x > 0; x)
	{
		if (x % 2 == 0)
		{
            x = x/2;
		    printf("2\n");
		}
		else if (x % 3 == 0)
        {
            x = x / 3;
            printf("3\n");
        }
        else if (x % 5 == 0)
        {
            x = x / 5;
            printf("5\n");
        }
        else if (x % 7 == 0)
        {
            x = x / 7;
            printf("7\n");
        }
        else if (x % 11 == 0)
        {
            x = x / 11;
            printf("11\n");
        }
        else if (x % 13 == 0)
        {
            x = x / 13;
            printf("13\n");
        }
        else if (x % 29 == 0)
        {
            x = x/29;
            printf("29\n");
        }
	}

    return 0;
}
