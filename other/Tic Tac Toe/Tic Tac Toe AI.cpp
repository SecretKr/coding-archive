#include<stdio.h>
#include<windows.h>
#include <stdlib.h>

int tscore, score, n, a, b, s, p = 0;
char aitable[3][3],table[3][3] = {'0','0','0','0','0','0','0','0','0'};
char player = 'X';

void draw()
{
    for(int i = 0;i < 3;i++ )
    {
        for(int j = 0;j < 3;j++)
        {
            printf("%c ",table[i][j]);
        }
        printf("\n");
    }
}

void input()
{
    b = 0;
    while(b == 0){
        printf("select the number: ");
        scanf("%d", &a);
        if(a == 1){
            if(table[0][0] != '0')
                b = 0;
            else{
                table[0][0] = player;
                b = 1;}}
        if(a == 2){
            if(table[0][1] != '0')
                b = 0;
            else{
                table[0][1] = player;
                b = 1;}}
        if(a == 3){
            if(table[0][2] != '0')
                b = 0;
            else{
                table[0][2] = player;
                b = 1;}}
        if(a == 4){
            if(table[1][0] != '0')
                b = 0;
            else{
                table[1][0] = player;
                b = 1;}}
        if(a == 5){
            if(table[1][1] != '0')
                b = 0;
            else{
                table[1][1] = player;
                b = 1;}}
        if(a == 6){
            if(table[1][2] != '0')
                b = 0;
            else{
                table[1][2] = player;
                b = 1;}}
        if(a == 7){
            if(table[2][0] != '0')
                b = 0;
            else{
                table[2][0] = player;
                b = 1;}}
        if(a == 8){
            if(table[2][1] != '0')
                b = 0;
            else{
                table[2][1] = player;
                b = 1;}}
        if(a == 9){
            if(table[2][2] != '0')
                b = 0;
            else{
                table[2][2] = player;
                b = 1;}}
    }
}

void splayer()
{
    if(player == 'X'){
        player = 'O';}
    else
        player = 'X';
}

char win()
{
    if(table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X')
        return 'X';
    if(table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X')
        return 'X';
    if(table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X')
        return 'X';
    if(table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X')
        return 'X';
    if(table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X')
        return 'X';
    if(table[0][2] == 'X' && table[1][2] == 'X' && table[2][2] == 'X')
        return 'X';
    if(table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X')
        return 'X';
    if(table[0][2] == 'X' && table[1][1] == 'X' && table[2][0] == 'X')
        return 'X';
    if(table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O')
        return 'O';
    if(table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O')
        return 'O';
    if(table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O')
        return 'O';
    if(table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O')
        return 'O';
    if(table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O')
        return 'O';
    if(table[0][2] == 'O' && table[1][2] == 'O' && table[2][2] == 'O')
        return 'O';
    if(table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O')
        return 'O';
    if(table[0][2] == 'O' && table[1][1] == 'O' && table[2][0] == 'O')
        return 'O';

    return '/';

}

int minimax()
{
    if(win() == 'X')
        return -1000;
    if(win() == 'O')
        return 10;
    tscore = 0;

    if(table[0][0] == '0'){
        table[0][0] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[0][0] = '0';
        splayer();
    }
    if(table[0][1] == '0'){
        table[0][1] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[0][1] = '0';
        splayer();
    }
    if(table[0][2] == '0'){
        table[0][2] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[0][2] = '0';
        splayer();
    }
    if(table[1][0] == '0'){
        table[1][0] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[1][0] = '0';
        splayer();
    }
    if(table[1][1] == '0'){
        table[1][1] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[1][1] = '0';
        splayer();
    }
    if(table[1][2] == '0'){
        table[1][2] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[1][2] = '0';
        splayer();
    }
    if(table[2][0] == '0'){
        table[2][0] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[2][0] = '0';
        splayer();
    }
    if(table[2][1] == '0'){
        table[2][1] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[2][1] = '0';
        splayer();
    }
    if(table[2][2] == '0'){
        table[2][2] = player;
        splayer();
        int thisScore = minimax();
        if(thisScore < 0)
            tscore += -10;
        if(thisScore > 0)
            tscore += 10;
        table[2][2] = '0';
        splayer();
    }
    return tscore;
}

int bot()
{
    p = 0;
    int move = 0;
    int score = 0;
    if(table[0][0] == '0'){
        table[0][0] = player;
        if(win() != '/'){
            move = 1;
            p = 1;}
        splayer();
        table[0][0] = player;
        if(win() != '/'){
            move = 1;
            p = 1;}
        splayer();
        table[0][0] = '0';
    }
    if(table[0][1] == '0'){
        table[0][1] = player;
        if(win() != '/'){
            move = 2;
            p = 1;}
        table[0][1] = player;
        if(win() != '/'){
            move = 2;
            p = 1;}
        splayer();
        table[0][1] = '0';
    }
    if(table[0][2] == '0'){
        table[0][2] = player;
        if(win() != '/'){
            move = 3;
            p = 1;}
        table[0][2] = player;
        if(win() != '/'){
            move = 3;
            p = 1;}
        splayer();
        table[0][2] = '0';
    }
    if(table[1][0] == '0'){
        table[1][0] = player;
        if(win() != '/'){
            move = 4;
            p = 1;}
        table[1][0] = player;
        if(win() != '/'){
            move = 4;
            p = 1;}
        splayer();
        table[1][0] = '0';
    }
    if(table[1][1] == '0'){
        table[1][1] = player;
        if(win() != '/'){
            move = 5;
            p = 1;}
        table[1][1] = player;
        if(win() != '/'){
            move = 5;
            p = 1;}
        splayer();
        table[1][1] = '0';
    }
    if(table[1][2] == '0'){
        table[1][2] = player;
        if(win() != '/'){
            move = 6;
            p = 1;}
        table[1][2] = player;
        if(win() != '/'){
            move = 6;
            p = 1;}
        splayer();
        table[1][2] = '0';
    }
    if(table[2][0] == '0'){
        table[2][0] = player;
        if(win() != '/'){
            move = 7;
            p = 1;}
        table[2][0] = player;
        if(win() != '/'){
            move = 7;
            p = 1;}
        splayer();
        table[2][0] = '0';
    }
    if(table[2][1] == '0'){
        table[2][1] = player;
        if(win() != '/'){
            move = 8;
            p = 1;}
        table[2][1] = player;
        if(win() != '/'){
            move = 8;
            p = 1;}
        splayer();
        table[2][1] = '0';
    }
    if(table[2][2] == '0'){
        table[2][2] = player;
        if(win() != '/'){
            move = 9;
            p = 1;}
        table[2][2] = player;
        if(win() != '/'){
            move = 9;
            p = 1;}
        splayer();
        table[2][2] = '0';
    }
    if(p != 1){
        if(table[0][0] == '0'){
            table[0][0] = player;
            splayer();
            int tempScore = minimax();
            table[0][0] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 1;
            printf("%d\n",score);
            }
        }
        if(table[0][1] == '0'){
            table[0][1] = player;
            splayer();
            int tempScore = minimax();
            table[0][1] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 2;
            printf("%d\n",score);
            }
        }
        if(table[0][2] == '0'){
            table[0][2] = player;
            splayer();
            int tempScore = minimax();
            table[0][2] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 3;
            printf("%d\n",score);
            }
        }
        if(table[1][0] == '0'){
            table[1][0] = player;
            splayer();
            int tempScore = minimax();
            table[1][0] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 4;
            printf("%d\n",score);
            }
        }
        if(table[1][1] == '0'){
            table[1][1] = player;
            splayer();
            int tempScore = minimax();
            table[1][1] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 5;
            printf("%d\n",score);
            }
        }
        if(table[1][2] == '0'){
            table[1][2] = player;
            splayer();
            int tempScore = minimax();
            table[1][2] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 6;
            printf("%d\n",score);
            }
        }
        if(table[2][0] == '0'){
            table[2][0] = player;
            splayer();
            int tempScore = minimax();
            table[2][0] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 7;
            printf("%d\n",score);
            }
        }
        if(table[2][1] == '0'){
            table[2][1] = player;
            splayer();
            int tempScore = minimax();
            table[2][1] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 8;
            printf("%d\n",score);
            }
        }
        if(table[2][2] == '0'){
            table[2][2] = player;
            splayer();
            int tempScore = minimax();
            table[2][2] = '0';
            splayer();
            if(tempScore > score){
                score = tempScore;
                move = 9;
            printf("%d\n",score);
            }
        }
    }
    if(move == 1)

        table[0][0] = player;
    if(move == 2)
        table[0][1] = player;
    if(move == 3)
        table[0][2] = player;
    if(move == 4)
        table[1][0] = player;
    if(move == 5)
        table[1][1] = player;
    if(move == 6)
        table[1][2] = player;
    if(move == 7)
        table[2][0] = player;
    if(move == 8)
        table[2][1] = player;
    if(move == 9)
        table[2][2] = player;
}

int main()
{
    printf("\n\n");
    draw();
    while(1){
        input();
        splayer();
        bot();
        splayer();
        draw();
        if(win() == 'X'){
            printf("X wins!\n");
            break;
        }
        if(win() == 'O'){
            printf("O wins!\n");
            break;
        }
    }
    system("pause");
}

