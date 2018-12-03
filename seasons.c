#include <stdio.h>


int main()
{
    int month;
    printf ("Give me the number of the month: ");

    scanf("%i",&month);

    {
        switch(month)

            {
                case 1: case 2: case 12: printf("Winter is here!!!");
                break;
                case 3: case 4: case 5: printf("It's spring!!!");
                break;
                case 6: case 7: case 8: printf("It's summertime!!!");
                break;
                case 9: case10: case 11: printf("It's autumn!!!!");
                break;
            }
    }


        return 0;
}
