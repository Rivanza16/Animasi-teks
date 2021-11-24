#include <ncurses.h>
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	initscr();
	start_color();
init_pair(1,COLOR_WHITE,COLOR_RED);
attron(COLOR_PAIR(1));
mvprintw(15,6,"===========================================SELAMAT JALAN==================================================");
Sleep(1000);
	refresh();
	clear();
attroff(COLOR_PAIR(1));
init_pair(2,COLOR_BLUE,COLOR_WHITE);
attron(COLOR_PAIR(2));
mvprintw(1,2,"JANGAN");
Sleep(1000);
	refresh();
	clear();
attroff(COLOR_PAIR(2));
init_pair(3,COLOR_GREEN,COLOR_WHITE);
attron(COLOR_PAIR(3));
mvprintw(14,55,"KEMBALI");
Sleep(1000);
	refresh();
	clear();
attroff(COLOR_PAIR(3));
init_pair(4,COLOR_BLACK,COLOR_WHITE);
attron(COLOR_PAIR(4));
mvprintw(28,106,"LAGI");
Sleep(1000);
	refresh();
	clear();
attroff(COLOR_PAIR(4));
init_pair(5,COLOR_WHITE,COLOR_RED);
attron(COLOR_PAIR(5));
mvprintw(10,8,"=========================================================================================================");
mvprintw(13,50,"JANGAN KEMBALI LAGI");
mvprintw(16,8,"=========================================================================================================");
Sleep(800);
	refresh();
	getch();
}
