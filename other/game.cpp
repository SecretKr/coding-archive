#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

int j,i,x=10,y=10,n,s = 219;
char c;
void gotoxy(short xx, short yy) {
    COORD pos = {xx, yy}; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	while(true){
		gotoxy(x,y);
		printf("%c",s);
		gotoxy(0,0);
		printf("%d",n);
		c = getch();
		n++;
		gotoxy(x,y);
		printf("  ");
		if(c == 'g'){
			scanf("%d",&s);
			gotoxy(x,y);
			printf("     ");
		}
		if(c == 'w' && y != 0) y--;
		if(c == 'a' && x != 0) x--;
		if(c == 's') y++;
		if(c == 'd') x++;
	}
	/*for(i = 10;i >= 0;i--){
		gotoxy(0,10-i);
		printf("%d ",i);
		for(j = 0;j < 525044000;j++);
		printf("\r  ");
	}*/
}
//219
