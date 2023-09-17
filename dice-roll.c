#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
int opt, ndice, roll, rollT, i;

main (){
do{
    system("cls");
    system("color 0F");
    printf("\n  ...........................\n");
    printf("  :    ROLAGEM DE DADOS     :\n");
    printf("  :.........................:\n");
    printf("  : 1 : D4                  :\n");
    printf("  : 2 : D6                  :\n");
    printf("  : 3 : D8                  :\n");
    printf("  : 4 : D10                 :\n");
    printf("  : 5 : D12                 :\n");
    printf("  : 6 : D20                 :\n");
    printf("  : 7 : D100                :\n");
    printf("  : 0 : SAIR                :\n");
    printf("  :...:.....................:\n");
    printf("    ");
    scanf("%d", &opt);

    if(opt == 1 || opt == 2 ||opt == 3 ||opt == 4 ||opt == 5 ||opt == 6 ||opt == 7)
    {
            Sleep(200);
            system("cls");
            printf("\n  Quantos dados deseja rolar?\n  ");
            scanf("%d", &ndice);
            Sleep(200);
            system("cls");

            if(ndice > 0 )
            {
                printf("\n  Gerando ");
                Sleep(500);
                printf(".");
                Sleep(500);
                printf(".");
                Sleep(500);
                printf(".\n\n  ");
                Sleep(500);
                system("Pause");

                rollT = 0;
                i = 0 ;
                if(opt == 1 ) // ROLAGEM DO D4
                {
                system("color 09");
                    for(i = 0; i < ndice; i++)
                    {
                    srand(time(NULL));
                    roll = (rand() % 4)+1;
                    rollT += roll;
                    }
                system("cls");
                printf("\n        ^ \n");
                printf("       / \\ \n");
                printf("      /   \\ \n");
                printf("     /     \\ \n");
                printf("    /  %d    \\ \n", rollT);
                printf("   /         \\ \n");
                printf("  *-----------* \n\n");
                ndice = 0;
                system("Pause");
                }

                if(opt == 2 ) // ROLAGEM DO D6
                {
                    system("color 03");
                    for(i = 0; i < ndice; i++)
                    {
                    srand(time(NULL));
                    roll = (rand() % 6)+1;
                    rollT += roll;
                    }
                system("cls");
                printf("\n   ;------; \n");
                printf("  +------+| \n");
                printf("  |      || \n");
                printf("  |  %d   || \n", rollT);
                printf("  |      |; \n");
                printf("  +------+  \n\n");
                ndice = 0;
                system("Pause");
                }

                if(opt == 3 ) // ROLAGEM DO D8
                {
                    system("color 06");
                    for(i = 0; i < ndice; i++)
                    {
                    srand(time(NULL));
                    roll = (rand() % 8)+1;
                    rollT += roll;
                    }
                    system("cls");
                    printf("\n      ^   \n");
                    printf("   / / \\ \\  \n");
                    printf("  | /   \\ |  \n");
                    printf("  |/  %d   |  \n", rollT);
                    printf("  +------+  \n");
                    printf("   \\    /  \n");
                    printf("    \\  /  \n");
                    printf("     @ @  \n\n");
                    ndice = 0;
                    system("Pause");
                }

                if(opt == 4 ) // ROLAGEM DO D10
                {
                    system("color 0B");
                    for(i = 0; i < ndice; i++)
                    {
                    srand(time(NULL));
                    roll = (rand() % 10)+1;
                    rollT += roll;
                    }
                    system("cls");

printf("\n                @            \n");
printf("             &*   ,*           \n");
printf("          ,. .     / *.        \n");
printf("        #  @         @  #      \n");
printf("     @   @             @   @   \n");
printf("  @    /                     @ \n");
printf("      .                   /     \n");
printf("  @ @           %d          @ @ \n",rollT);
printf("  ,&                         @  \n");
printf("      @@                 @@    \n");
printf("         /,@.       *%%        \n");
printf("             @ .@  @    \n\n");

                    ndice = 0;
                    system("Pause");
                }

                if(opt == 5 ) // ROLAGEM DO D12
                {
                    system("color 0D");
                    for(i = 0; i < ndice; i++)
                    {
                    srand(time(NULL));
                    roll = (rand() % 12)+1;
                    rollT += roll;
                    }
                    system("cls");
                    printf("\n             _______ \n");
                    printf("        (@@@(   @   &@@@       \n");
                    printf("      @@        @        @@    \n");
                    printf("    @@      @/     @@      @@   \n");
                    printf("  .@     @             @     @ \n");
                    printf("  @*   @                 @   %@ \n");
                    printf("  @*            %d            %@ \n", rollT);
                    printf("  @*    @               @    %@ \n");
                    printf("   @     @             @     @  \n");
                    printf("    @@    @           @    @@   \n");
                    printf("      @@ @             @ @@    \n");
                    printf("         @@@@-------@@@@  \n\n");
                    ndice = 0;
                    system("Pause");
                }

                if(opt == 6 ) // ROLAGEM DO D20
                {
                    system("color 0C");
                    for(i = 0; i < ndice; i++)
                    {
                    srand(time(NULL));
                    roll = (rand() % 20)+1;
                    rollT += roll;
                    }
                    system("cls");

printf("\n              @              \n");
printf("          @@  @  @@           \n");
printf("      @@   .@@@@@.   @@      \n");
printf("  @@@@      @@ @@      @@@@  \n");
printf("  @        @     @        @  \n");
printf("  @@      @       @      @@  \n");
printf("  @ @   @#         @@   @ @  \n");
printf("  @ @@ @      %d     @ @  @ \n", rollT);
printf("  @  @@@@@@@@@@@@@@@@@@@  @  \n");
printf("  @@   @@           @@   @@  \n");
printf("      @@ @@       @  @@      \n");
printf("          @@@   @@@  \n\n");
                    ndice = 0;
                    system("Pause");
                }

                if(opt == 7 ) // ROLAGEM DO D100
                {
                    system("color 01");
                    for(i = 0; i < ndice; i++)
                    {
                    srand(time(NULL));
                    roll = (rand() % 100)+1;
                    rollT += roll;
                    }
                    system("cls");
                    printf("\n             _____    \n");
                    printf("         @@@@     %@@@%      \n");
                    printf("      @@                @@   \n");
                    printf("    @                     @@  \n");
                    printf("  @@                       @@  \n");
                    printf("  @                         @@ \n");
                    printf("  @            %d           @@ \n", rollT);
                    printf("  @                         @@ \n");
                    printf("  (@                       @@  \n");
                    printf("    @#                    @@  \n");
                    printf("      @@               #@@    \n");
                    printf("         @@@@@   .@@@@ \n\n");
                    ndice = 0;
                    system("Pause");
                }
            }
            else
            {
            system("cls");
            printf("\n  Entrada Invalida!\n\n");
            Sleep(200);
            system("Pause");
            }
    }
    else if(opt != 0)
    {
            system("cls");
            printf("\n  Entrada Invalida!\n\n");
            Sleep(200);
            system("Pause");
    }

} while (opt != 0);
printf("\n\n");
}
