/*PROGRAM TO SHOW A TIC TAC TOE GAME*/
#include <stdio.h>

blocks();
char s[10] = {'0','1','2','3','4','5','6','7','8','9'};



int main(){
        int i,d,p = 1;
        char mark;
        i=-1;
    while (i ==  - 1){
        blocks();

        p = (p % 2) ? 1 : 2;
        mark =(p==1) ? 'X' : 'O';

        printf("Player %d, enter the block number: ", p);
        scanf("%d", &d);


        if (d == 1 && s[1] == '1')
            s[1] = mark;

        else if (d == 2 && s[2] == '2')
            s[2] = mark;

        else if (d == 3 && s[3] == '3')
            s[3] = mark;

        else if (d == 4 && s[4] == '4')
            s[4] = mark;

        else if (d == 5 && s[5] == '5')
            s[5] = mark;

        else if (d == 6 && s[6] == '6')
            s[6] = mark;

        else if (d == 7 && s[7] == '7')
            s[7] = mark;

        else if (d == 8 && s[8] == '8')
            s[8] = mark;

        else if (d == 9 && s[9] == '9')
            s[9] = mark;

        else
        {
            printf("Invalid move ");
            p--;
        }
    if (s[1] == s[2] && s[2] == s[3])
        i=1;
    else if (s[4] == s[5] && s[5] == s[6])
        i=1;
    else if (s[7] == s[8] && s[8] == s[9])
        i=1;
    else if (s[1] == s[4] && s[4] == s[7])
        i=1;
    else if (s[2] == s[5] && s[5] == s[8])
        i=1;
    else if (s[3] == s[6] && s[6] == s[9])
        i=1;
    else if (s[1] == s[5] && s[5] == s[9])
        i=1;
    else if (s[3] == s[5] && s[5] == s[7])
        i=1;
    else if (s[1] != '1' && s[2] != '2' && s[3] != '3' &&
            s[4] != '4' && s[5] != '5' && s[6] != '6' && s[7]
            != '7' && s[8] != '8' && s[9] != '9')
        i=0;
    else
        i=-1;

        p++;
    }


    blocks();
    if (i == 1)
        printf("Player %d win ", --p);
    else
        printf("Game draw");

    return 0;
}



int blocks()
{
    printf("\n\n\tTic Tac Toe\n\n\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n",s[1],s[2],s[3]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n",s[4],s[5],s[6]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n",s[7],s[8],s[9]);
    printf("\t     |     |     \n");

    return 0;
}
