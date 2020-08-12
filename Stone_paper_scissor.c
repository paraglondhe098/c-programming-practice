#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Randgen(int n) {
    srand((time(NULL)-1345)*5343);
    return rand()%n;
}
int yourscore=0;
int compscore=0;
int Game() {
    int a, b;
    begining:
    scanf("%d", &a);
    //Generation by computer (Random)
    b=Randgen(3);
    if (a==1)
    {
        printf("You choose Stone\n");
    }
    else if (a==2)
    {
        printf("You choose Paper\n");
    }
    else if (a==3)
    {
        printf("You choose Scissor\n");
    }
    else if ((a!=1)&&(a!=2)&&(a!=3))
    {
        printf("Wrong input!....Please try again___>");
        goto begining;
    }
    if (b+1==1)
    {
        printf("Computer choose Stone\n");
    }
    else if (b+1==2)
    {
        printf("Computer choose Paper\n");
    }
    else if (b+1==3)
    {
        printf("Computer choose Scissor\n");
    }
    if (a==b+1)
    {
        printf("Oh! it's tie.\n");
        yourscore++;
        compscore++;
    }
    else if ((a==1 && b+1==2)||(a==3 && b+1==1)||(a==2 && b+1==3))
    {
        printf("You loose!\n");
        compscore++;
    }
    else
    {
        printf("You win!\n");
        yourscore++;
    }
    return 0;
}

int main()
{
    int times;
    char name[30];
    printf("Enter your name here =>  ");
    gets(name);
    printf("\nHello %s, you are most welcome to our game\n", name);
    printf("\n%s, please Enter how many time do you want to play the game ? =>  ", name);
    input_value:
    scanf("%d", &times);
    if (times>0 && times<100) {
        // int score_list[times];
        for (int i = 0; i < times; i++)
        {
            if (i==0)
            {
                printf("\n1)Enter 1 to choose stone \t\t\t\t\t\t\tYou have total %d chances\n2)Enter 2 to choose paper\n3)Enter 3 to choose scissor.\n", times);
                Game();
                continue;
            }
            else if (i==times-1)
            {
                printf("\n1)Enter 1 to choose stone \t\t\t\t\t\t\t\tLast chance!\n2)Enter 2 to choose paper\n3)Enter 3 to choose scissor.\n");
                Game();
                continue;
            }
            else
            {
                printf("\n1)Enter 1 to choose stone \t\t\t\t\t\t\tChances left %d/%d\n2)Enter 2 to choose paper\n3)Enter 3 to choose scissor.\n", times-i, times);
                Game();
                continue;
            }
        }
        printf("\nGame ended!\n\nTime for results\n\n");
        printf("1)Your score is %d/%d\n2)Computer's score is %d/%d\n\n", yourscore, times, compscore, times);
        if (yourscore==compscore)
        {
            printf("Match has been tie!\nWell played! %s\n", name);
        }
        else if (yourscore<compscore)
        {
            printf("You lost the match!\nSorry %s, try your luck next time!\n", name);
        }
        else if (yourscore>compscore)
        {
            printf("You won the match!\nnice played %s You are so lucky!\n", name);
        }
    }
    else
    {
        printf("\n Please enter a vaalid value,%s ____ =>", name);
        goto input_value;
    }
    return 0;
}