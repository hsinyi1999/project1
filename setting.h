#ifndef SETTING_H
#define SETTING_H
#include <ncurses.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unistd.h>

using namespace std;

class setting {
	public:
		setting(int &,int & ,int &);	//constructor
		void setsetgame();//initial set
		void getsetgame();//answer
		void control(int &,int &);//cursor
		void control2();
		void control3();
		void run();
		void color();
		char g[20][20];//gap for print the game
		char o[20][20];//for output
		int leave;
		int start;
		int game_over;
	private:
		char gap[10][10];//gap for level 1
		char Gap[15][15];//gap for level 2
		char GAP[20][20];//gap for level 3
		char G[20][20];//gap for copy the initial gap
		int mine;//numbers of bomb
		int level=1;//level for the game
		int size;//size of the gap
		int c = 0;
		int go_on = true;//control while to check if program keep working
};


#endif

