#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
main(){
  gotoxy(3,7);
  printf("slçfhslçdfjçsldjfçadsljfçadsljfçlsfjçslafjsdaf");
  gotoxy(3,7);
  printf("9759357340957");
  gotoxy(20,3);
  printf("l:3 c:20");
}
