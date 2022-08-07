#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
void gotoxy(int x, int y);
void gotoxy(int x, int y)
{
    COORD c = { x, y };  
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}

int main(){

    setlocale(LC_ALL,"");
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    printf("Pls enter the dimensions of the box:\n==> ");
    int dime;
    scanf("%d",&dime);
    int corner;
    int edge;
    corner = dime-1;
    edge = dime-2;
    system("cls");
    //corner 1
    gotoxy(50,10);
    putchar(201);
    //corner 2
    gotoxy(50+corner,10);
    putchar(187);
    //corner 3
    gotoxy(50,10+corner);
    putchar(200);
    //corner 4
    gotoxy(50+corner,10+corner);
    putchar(188);
    //upper
    for(int i=0;i<edge;i++){
    gotoxy(51+i,10);
    putchar(205);};
    //left
    for(int i=0;i<edge;i++){
    gotoxy(50,i+11);
    putchar(186);};
    //right
    for(int i=0;i<edge;i++){
    gotoxy(50+corner,i+11);
    putchar(186);};
    //bottom
    for(int i=0;i<edge;i++){
    gotoxy(51+i,10+corner);
    putchar(205);};
    return 0;
    
}