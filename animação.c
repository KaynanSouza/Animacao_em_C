#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int primeiro();
void irParaXY(int x, int y){
    COORD coord;
    coord.X = (short) x;
    coord.Y = (short) y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void main(){
    printf("%i",primeiro());
}
int primeiro(){
    int i=0;
    while (i++ < 10){
        irParaXY(i,0);
        printf(" 0");
        printf("\n");

        if (i%2 == 0){
            irParaXY(i,1);
            printf(" |");
            irParaXY(i,2);
            printf("/ \\");
        }else{
            irParaXY(i,1);
            printf("-|-");
            irParaXY(i,2);
            printf(" |");
        }
        sleep(1);
        system("cls");
    }
    return 0;

}
