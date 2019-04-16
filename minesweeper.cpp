#include <ncurses.h>
#include <string>
#include "setting.h"
#include "outputfile.h"
using namespace std;

void initial();


int main()
{
	int level = 0;	//level for the game
	int y, x;	//location of cursor
	int input;	//input from keyboard
	initial();	//intial set for ncurses
	int start = 0;
	int leave = 0;
	int game_over = 0;
	int t;

	//set class
	setting game(game_over,leave,start);
	
	start_color();
	if (!has_colors())
	{
		printw("wrong for print color");
	}
	game.color();
	mvprintw(0, 30, "Hi!Welcome to the minesweeper!");
	mvprintw(1, 30, "Please choose the level between 1~3:");			
	refresh();
	game.control2();
	game.control(leave,t);
	game.control3();
	
	refresh();
	endwin();

	outputfile f;
	f.out(game.o);
	
	return 0;
}




void initial()
{
	initscr();

	cbreak();
	noecho();
	
	keypad(stdscr,TRUE);


	refresh();
}
