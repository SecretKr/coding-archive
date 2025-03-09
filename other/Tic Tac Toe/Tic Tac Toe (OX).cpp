#include<stdio.h>
#include<windows.h>

int a, b;
char table[3][3] = {'1','2','3','4','5','6','7','8','9'};
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
            if(table[0][0] != '1')
                b = 0;
            else{
                table[0][0] = player;
                b = 1;}}
        if(a == 2){
            if(table[0][1] != '2')
                b = 0;
            else{
                table[0][1] = player;
                b = 1;}}
        if(a == 3){
            if(table[0][2] != '3')
                b = 0;
            else{
                table[0][2] = player;
                b = 1;}}
        if(a == 4){
            if(table[1][0] != '4')
                b = 0;
            else{
                table[1][0] = player;
                b = 1;}}
        if(a == 5){
            if(table[1][1] != '5')
                b = 0;
            else{
                table[1][1] = player;
                b = 1;}}
        if(a == 6){
            if(table[1][2] != '6')
                b = 0;
            else{
                table[1][2] = player;
                b = 1;}}
        if(a == 7){
            if(table[2][0] != '7')
                b = 0;
            else{
                table[2][0] = player;
                b = 1;}}
        if(a == 8){
            if(table[2][1] != '8')
                b = 0;
            else{
                table[2][1] = player;
                b = 1;}}
        if(a == 9){
            if(table[2][2] != '9')
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
    if(table[0][0] == 'Y' && table[0][1] == 'Y' && table[0][2] == 'Y')
        return 'Y';
    if(table[1][0] == 'Y' && table[1][1] == 'Y' && table[1][2] == 'Y')
        return 'Y';
    if(table[2][0] == 'Y' && table[2][1] == 'Y' && table[2][2] == 'Y')
        return 'Y';
    if(table[0][0] == 'Y' && table[1][0] == 'Y' && table[2][0] == 'Y')
        return 'Y';
    if(table[0][1] == 'Y' && table[1][1] == 'Y' && table[2][1] == 'Y')
        return 'Y';
    if(table[0][2] == 'Y' && table[1][2] == 'Y' && table[2][2] == 'Y')
        return 'Y';
    if(table[0][0] == 'Y' && table[1][1] == 'Y' && table[2][2] == 'Y')
        return 'Y';
    if(table[0][2] == 'Y' && table[1][1] == 'Y' && table[2][0] == 'Y')
        return 'Y';
    return '/';

}

int main()
{
    draw();
    while(1){
        input();
        draw();
        splayer();
        if(win() == 'X'){
            printf("X wins!\n");
            break;
        if(win() == 'O'){
            printf("O wins!\n");
            break;
            }
            }
        }
    system("pause");
}
