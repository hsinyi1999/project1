#include"setting.h"


setting::setting(int &g , int &l ,int &s)
{
	g = game_over;
	s = start;
	l = leave;
}

//設定遊戲初始值
void setting::setsetgame()
{
	srand(time(NULL));
	//different level
	/*-----Here is for level '1'-----*/
	/*size:10x10 . mine:x20*/
	if (level==1)
	{
		mine = 20;
		//first input all '0' in gap
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				gap[i][j] = '0';
				g[i][j] = ' ';
			}
		}	//end first input '0'
		

		//randomly choose place to input mine
		int minenum = 0;
		while (minenum<mine)
		{
			int I = 0 + rand() % 10;
			int J = 0 + rand() % 10;
			
			if (gap[I][J] != 'b')
			{
				gap[I][J] = 'b';
				G[I][J] = 'b';
				minenum++;
			}
		}	//end input mine


		//find the 'value' of the gap
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				int hasmine = 0;	//count how many mines aside
				if (gap[i][j]=='0')	//check the must change value(pre) is '0'
				{
					//up-left
					if (gap[i-1][j-1]=='b'&&(i-1)>=0&&(j-1)>=0)
					{
						hasmine++;
					}
					//up
					if (gap[i-1][j]=='b'&&(i-1)>=0)
					{
						hasmine++;
					}
					//up-right
					if (gap[i-1][j+1]=='b'&&(i-1)>=0&&(j+1)<10)
					{
						hasmine++;
					}
					//left
					if (gap[i][j-1]=='b'&&(j-1)>=0)
					{
						hasmine++;
					}
					//right
					if (gap[i][j+1]=='b'&&(j+1)<10)
					{
						hasmine++;
					}
					//down-left
					if (gap[i+1][j-1]=='b'&&(i+1)<10&&(j-1)>=0)
					{
						hasmine++;
					}
					//down
					if (gap[i+1][j]=='b'&&(i+1)<10)
					{
						hasmine++;
					}
					//down-right
					if (gap[i+1][j+1]=='b'&&(i+1)<10&&(j+1)<10)
					{
						hasmine++;
					}
					//test->cout << hasmine << endl;

					//determine the value
					switch (hasmine)
					{
					case 0:
						gap[i][j] = '0';
						G[i][j] = '0';
						break;
					case 1:
						gap[i][j] = '1';
						G[i][j] = '1';
						break;
					case 2:
						gap[i][j] = '2';
						G[i][j] = '2';
						break;
					case 3:
						gap[i][j] = '3';
						G[i][j] = '3';
						break;
					case 4:
						gap[i][j] = '4';
						G[i][j] = '4';
						break;
					case 5:
						gap[i][j] = '5';
						G[i][j] = '5';
						break;
					case 6:
						gap[i][j] = '6';
						G[i][j] = '6';
						break;
					case 7:
						gap[i][j] = '7';
						G[i][j] = '7';
						break;
					case 8:
						gap[i][j] = '8';
						G[i][j] = '8';
						break;
					default:
						break;
					}	//end determine value
				}
			}
		}	//end find value
	}	//end level '1'
	/*-----here is for level '2'-----*/
	/*size:15x15 . mine:x60*/
	if (level==2)
	{
		mine = 60;
		//first input all '0' in gap
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				Gap[i][j] = '0';
				g[i][j] = ' ';
			}
		}	//end first input '0'


		//randomly choose place to input mine
		int minenum = 0;
		while (minenum < mine)
		{
			int I = 0 + rand() % 15;
			int J = 0 + rand() % 15;

			if (Gap[I][J] != 'b')
			{
				Gap[I][J] = 'b';
				G[I][J] = 'b';
				minenum++;
			}
		}	//end input mine


		//find the 'value' of the gap
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				int hasmine = 0;	//count how many mines aside
				if (Gap[i][j] == '0')	//check the must change value(pre) is '0'
				{
					//up-left
					if (Gap[i - 1][j - 1] == 'b' && (i - 1) >= 0 && (j - 1) >= 0)
					{
						hasmine++;
					}
					//up
					if (Gap[i - 1][j] == 'b' && (i - 1) >= 0)
					{
						hasmine++;
					}
					//up-right
					if (Gap[i - 1][j + 1] == 'b' && (i - 1) >= 0 && (j + 1) < 15)
					{
						hasmine++;
					}
					//left
					if (Gap[i][j - 1] == 'b' && (j - 1) >= 0)
					{
						hasmine++;
					}
					//right
					if (Gap[i][j + 1] == 'b' && (j + 1) < 15)
					{
						hasmine++;
					}
					//down-left
					if (Gap[i + 1][j - 1] == 'b' && (i + 1) < 15 && (j - 1) >= 0)
					{
						hasmine++;
					}
					//down
					if (Gap[i + 1][j] == 'b' && (i + 1) < 15)
					{
						hasmine++;
					}
					//down-right
					if (Gap[i + 1][j + 1] == 'b' && (i + 1) < 15 && (j + 1) < 15)
					{
						hasmine++;
					}
					//test->cout << hasmine << endl;

					//determine the value
					switch (hasmine)
					{
					case 0:
						Gap[i][j] = '0';
						G[i][j] = '0';
						break;
					case 1:
						Gap[i][j] = '1';
						G[i][j] = '1';
						break;
					case 2:
						Gap[i][j] = '2';
						G[i][j] = '2';
						break;
					case 3:
						Gap[i][j] = '3';
						G[i][j] = '3';
						break;
					case 4:
						Gap[i][j] = '4';
						G[i][j] = '4';
						break;
					case 5:
						Gap[i][j] = '5';
						G[i][j] = '5';
						break;
					case 6:
						Gap[i][j] = '6';
						G[i][j] = '6';
						break;
					case 7:
						Gap[i][j] = '7';
						G[i][j] = '7';
						break;
					case 8:
						Gap[i][j] = '8';
						G[i][j] = '8';
						break;
					default:
						break;
					}	//end determine value
				}
			}
		}	//end find value
		
	}	//end level '2'
	/*-----here is for level '2'-----*/
	/*size:20x20 . mine:x150*/
	if (level == 3)
	{
		mine = 150;
		//first input all '0' in gap
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				GAP[i][j] = '0';
				g[i][j] = ' ';
			}
		}	//end first input '0'


		//randomly choose place to input mine
		int minenum = 0;
		while (minenum < mine)
		{
			int I = 0 + rand() % 20;
			int J = 0 + rand() % 20;

			if (GAP[I][J] != 'b')
			{
				GAP[I][J] = 'b';
				G[I][J] = 'b';
				minenum++;
			}
		}	//end input mine


		//find the 'value' of the gap
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				int hasmine = 0;	//count how many mines aside
				if (GAP[i][j] == '0')	//check the must change value(pre) is '0'
				{
					//up-left
					if (GAP[i - 1][j - 1] == 'b' && (i - 1) >= 0 && (j - 1) >= 0)
					{
						hasmine++;
					}
					//up
					if (GAP[i - 1][j] == 'b' && (i - 1) >= 0)
					{
						hasmine++;
					}
					//up-right
					if (GAP[i - 1][j + 1] == 'b' && (i - 1) >= 0 && (j + 1) < 20)
					{
						hasmine++;
					}
					//left
					if (GAP[i][j - 1] == 'b' && (j - 1) >= 0)
					{
						hasmine++;
					}
					//right
					if (GAP[i][j + 1] == 'b' && (j + 1) < 20)
					{
						hasmine++;
					}
					//down-left
					if (GAP[i + 1][j - 1] == 'b' && (i + 1) < 20 && (j - 1) >= 0)
					{
						hasmine++;
					}
					//down
					if (GAP[i + 1][j] == 'b' && (i + 1) < 20)
					{
						hasmine++;
					}
					//down-right
					if (GAP[i + 1][j + 1] == 'b' && (i + 1) < 20 && (j + 1) < 20)
					{
						hasmine++;
					}
					//test->cout << hasmine << endl;

					//determine the value
					switch (hasmine)
					{
					case 0:
						GAP[i][j] = '0';
						G[i][j] = '0';
						break;
					case 1:
						GAP[i][j] = '1';
						G[i][j] = '1';
						break;
					case 2:
						GAP[i][j] = '2';
						G[i][j] = '2';
						break;
					case 3:
						GAP[i][j] = '3';
						G[i][j] = '3';
						break;
					case 4:
						GAP[i][j] = '4';
						G[i][j] = '4';
						break;
					case 5:
						GAP[i][j] = '5';
						G[i][j] = '5';
						break;
					case 6:
						GAP[i][j] = '6';
						G[i][j] = '6';
						break;
					case 7:
						GAP[i][j] = '7';
						G[i][j] = '7';
						break;
					case 8:
						GAP[i][j] = '8';
						G[i][j] = '8';
						break;
					default:
						break;
					}	//end determine value
				}
			}
		}	//end find value

	}	//end level '3'
	
}


//output the setup of the game(aka.answer)
void setting::getsetgame()
{
	clear();
	attrset(COLOR_PAIR(3));
	mvprintw(15,30, "Here is the answer~");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (size==10)	//for level 1
			{
				switch (gap[i][j])
				{
				case '0':
					attrset(COLOR_PAIR(1));
					mvprintw(i, j, "0");
					o[i][j] = '0';
					break;
				case '1':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "1");
					o[i][j] = '1';
					break;
				case '2':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "2");
					o[i][j] = '2';
					break;
				case '3':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "3");
					o[i][j] = '3';
					break;
				case '4':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "4");
					o[i][j] = '4';
					break;
				case '5':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "5");
					o[i][j] = '5';
					break;
				case '6':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "6");
					o[i][j] = '6';
					break;
				case '7':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "7");
					o[i][j] = '7';
					break;
				case '8':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "8");
					o[i][j] = '8';
					break;
				case 'b':
					attrset(COLOR_PAIR(3));
					mvprintw(i, j, "b");
					o[i][j] = 'b';
					break;
				default:
					break;
				}
			}
			else if (size==15)	//for level 2
			{
				switch (Gap[i][j])
				{
				case '0':
					attrset(COLOR_PAIR(1));
					mvprintw(i, j, "0");
					break;
				case '1':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "1");
					break;
				case '2':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "2");
					break;
				case '3':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "3");
					break;
				case '4':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "4");
					break;
				case '5':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "5");
					break;
				case '6':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "6");
					break;
				case '7':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "7");
					break;
				case '8':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "8");
					break;
				case 'b':
					attrset(COLOR_PAIR(3));
					mvprintw(i, j, "b");
					break;
				default:
					break;
				}
			}
			else if (size==20)	//for level 3
			{
				switch (GAP[i][j])
				{
				case '0':
					attrset(COLOR_PAIR(1));
					mvprintw(i, j, "0");
					break;
				case '1':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "1");
					break;
				case '2':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "2");
					break;
				case '3':
					attrset(COLOR_PAIR(4));
					mvprintw(i, j, "3");
					break;
				case '4':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "4");
					break;
				case '5':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "5");
					break;
				case '6':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "6");
					break;
				case '7':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "7");
					break;
				case '8':
					attrset(COLOR_PAIR(5));
					mvprintw(i, j, "8");
					break;
				case 'b':
					attrset(COLOR_PAIR(3));
					mvprintw(i, j, "b");
					break;
				default:
					break;
				}
			}
		}
	}
}



//main game setting
void setting::control(int &l,int &t)
{
	int h, w, y=0, x=0;//for the size of the gap
	int input;//input
	
	
	nodelay(stdscr, TRUE);

	getmaxyx(stdscr, h, w);
	h = size; w = size;

	while (go_on)
	{
		//input==ERR
		while ((input = getch()) == ERR)//nodelay
		{
			move(y, x);
			while (x < 0)x += w;
			while (x >= w)x -= w;
			while (y < 0)y += h;
			while (y >= h)y -= h;
		}//end (input==ERR)
		
		 //cursor
		switch (input)
		{
			//up
		case KEY_UP:
		case 'w':
		case 'W':
			--y; break;
			//down
		case KEY_DOWN:
		case's':
		case 'S':
			++y; break;
			//left
		case KEY_LEFT:
		case 'a':
		case 'A':
			--x; break;
			//right
		case KEY_RIGHT:
		case 'd':
		case 'D':
			++x; break;
			//uncover
		case 'o':
		case'O':
			/*這邊寫打開gap*/  /*要檢查有無bug or採炸彈or結束*/
			if (g[y][x] == ' ' && y >= 0 && y < size && x >= 0 && x < size || g[y][x] == 'F'&& y >= 0 && y < size && x >= 0 && x < size)//check if the gap is already uncover
			{
				switch (G[y][x])
				{

				case '0':
					attrset(COLOR_PAIR(1));
					g[y][x] = '0';
					mvaddstr(y, x, "0");
					/*可以再寫找出其他非B之gap*/
					break;
				case '1':
					attrset(COLOR_PAIR(4));
					g[y][x] = '1';
					mvaddstr(y, x, "1");
					break;
				case '2':
					attrset(COLOR_PAIR(4));
					g[y][x] = '2';
					mvaddstr(y, x, "2");
					break;
				case '3':
					attrset(COLOR_PAIR(4));
					g[y][x] = '3';
					mvaddstr(y, x, "3");
					break;
				case '4':
					attrset(COLOR_PAIR(5));
					g[y][x] = '4';
					mvaddstr(y, x, "4");
					break;
				case '5':
					attrset(COLOR_PAIR(5));
					g[y][x] = '5';
					mvaddstr(y, x, "5");
					break;
				case '6':
					attrset(COLOR_PAIR(5));
					g[y][x] = '6';
					mvaddstr(y, x, "6");
					break;
				case '7':
					attrset(COLOR_PAIR(5));
					g[y][x] = '7';
					mvaddstr(y, x, "7");
					break;
				case '8':
					attrset(COLOR_PAIR(5));
					g[y][x] = '8';
					mvaddstr(y, x, "8");
					break;
					/*-----uncover a mine-----*/
					/*-----(1)踩到炸彈-----*/
				case 'b':
					/*炸彈全部顯示*/
					for (int i = 0; i < size; i++)
					{
						for (int j = 0; j < size; j++)
						{
							if (G[i][j] == 'b')
							{
								g[i][j] = 'b';
							}//end if
						}//end for
					}//end for
					leave=3;
					game_over = 1;
					go_on = false;
					break;
				default:
					break;
				}//end switch
			}//end if
			break;
		//flag
		case 'f':
		case 'F':
			/*這邊寫放(收)旗子*/
			if (g[y][x] == ' ')
			{
				/*bug:g[y][x]原本之值會被改掉；解決方法-->(1)可能在gap上再新寫一層gap2。(2)換個鍵來消除F。*/
				g[y][x] = 'F';
				attrset(COLOR_PAIR(6));
				mvaddstr(y, x, "F");
			}
			else if (g[y][x] == 'F')
			{
				//g[y][x] = '原來';
				g[y][x] = ' ';
				attrset(COLOR_PAIR(2));
				mvaddstr(y, x, " ");//要換顏色
			}
			break;
		//quit
		case 'q':
		case 'Q':
			/*這邊寫離開遊戲*/
			  /*新增變數或進入function強制跳出*/
			leave=2;
			clear();
			mvprintw(0,0,"Exit the game...");
			refresh();
			getch();
			
			game_over = 1;
			go_on = false;
			break;
			//hint
		case 'h':
		case 'H':
			/*這邊寫提示*/
			srand(time(NULL));
			while (c == 0)
			{
				y = rand() % size;
				x = rand() % size;
				if (G[y][x] != 'b'&&g[y][x] == ' ' || G[y][x] != 'b'&&g[y][x] == 'F')
				{
					switch (G[y][x])
					{
					case '0':
						attrset(COLOR_PAIR(1));
						g[y][x] = '0';
						mvaddstr(y, x, "0");
						c++;
						break;
					case '1':
						attrset(COLOR_PAIR(4));
						g[y][x] = '1';
						mvaddstr(y, x, "1");
						c++;
						break;
					case '2':
						attrset(COLOR_PAIR(4));
						g[y][x] = '2';
						mvaddstr(y, x, "2");
						c++;
						break;
					case '3':
						attrset(COLOR_PAIR(4));
						g[y][x] = '3';
						mvaddstr(y, x, "3");
						c++;
						break;
					case '4':
						attrset(COLOR_PAIR(5));
						g[y][x] = '4';
						mvaddstr(y, x, "4");
						c++;
						break;
					case '5':
						attrset(COLOR_PAIR(5));
						g[y][x] = '5';
						mvaddstr(y, x, "5");
						c++;
						break;
					case '6':
						attrset(COLOR_PAIR(5));
						g[y][x] = '6';
						mvaddstr(y, x, "6");
						c++;
						break;
					case '7':
						attrset(COLOR_PAIR(5));
						g[y][x] = '7';
						mvaddstr(y, x, "7");
						c++;
						break;
					case '8':
						attrset(COLOR_PAIR(5));
						g[y][x] = '8';
						mvaddstr(y, x, "8");
						c++;
						break;
					default:
						break;
					}//end switch
					t += c;
					switch (t)
					{
					case 1:
						attrset(COLOR_PAIR(6));
						mvaddstr(5, 30, "Hint--->press 'H'(used times:1)"); break;
					case 2:
						attrset(COLOR_PAIR(6));
						mvaddstr(5, 30, "Hint--->press 'H'(used times:2)"); break;
					case 3:
						attrset(COLOR_PAIR(6));
						mvaddstr(5, 30, "Hint--->press 'H'(used times:3)"); break;
					case 4:
						attrset(COLOR_PAIR(6));
						mvaddstr(5, 30, "Hint--->press 'H'(used times:4)"); break;
					case 5:
						attrset(COLOR_PAIR(6));
						mvaddstr(5, 30, "Hint--->press 'H'(used times:5)"); break;
					case 6:
						attrset(COLOR_PAIR(6));
						mvaddstr(5, 30, "Hint--->press 'H'(your suck)"); break;
					default:
						attrset(COLOR_PAIR(3));
						mvaddstr(5, 30, "Hint--->press 'H'(pretty suck)");break;
					}
				}//end if
			}//end while
			c = 0;
			break;
		default:
			break;
		}//end switch



		/*判斷遊戲是否結束*/
		/*結束方式---->(1)採到炸彈(在上面了)；(2)過關；(3)按Q離開*/

		//(2)
		int acc = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (G[i][j]=='0'&&g[i][j]=='0')
				{
					acc++;
				}
				if (G[i][j] == '1'&&g[i][j] == '1')
				{
					acc++;
				}
				if (G[i][j] == '2'&&g[i][j] == '2')
				{
					acc++;
				}
				if (G[i][j] == '3'&&g[i][j] == '3')
				{
					acc++;
				}
				if (G[i][j] == '4'&&g[i][j] == '4')
				{
					acc++;
				}
				if (G[i][j] == '5'&&g[i][j] == '5')
				{
					acc++;
				}
				if (G[i][j] == '6'&&g[i][j] == '6')
				{
					acc++;
				}
				if (G[i][j] == '7'&&g[i][j] == '7')
				{
					acc++;
				}
				if (G[i][j] == '8'&&g[i][j] == '8')
				{
					acc++;
				}
			}
		}
		if (acc==(size*size-mine))
		{
			leave=1;
			game_over=1;
			/*選擇:顯示遊戲結果時間，然後結束or再玩一場*/
			clear();
			mvprintw(0, 25, "You win~~~~~~~!!!");
			for (int x = 0; x < size; x++)
			{
				for (int y = 0; y < size; y++)
				{
					switch (G[y][x])
					{
					case '0':
						attrset(COLOR_PAIR(1));
						mvaddstr(y, x, "0");
						break;
					case '1':
						attrset(COLOR_PAIR(4));
						mvaddstr(y, x, "1");
						break;
					case '2':
						attrset(COLOR_PAIR(4));
						mvaddstr(y, x, "2");
						break;
					case '3':
						attrset(COLOR_PAIR(4));
						mvaddstr(y, x, "3");
						break;
					case '4':
						attrset(COLOR_PAIR(5));
						mvaddstr(y, x, "4");
						break;
					case '5':
						attrset(COLOR_PAIR(5));
						mvaddstr(y, x, "5");
						break;
					case '6':
						attrset(COLOR_PAIR(5));
						mvaddstr(y, x, "6");
						break;
					case '7':
						attrset(COLOR_PAIR(5));
						mvaddstr(y, x, "7");
						break;
					case '8':
						attrset(COLOR_PAIR(5));
						mvaddstr(y, x, "8");
						break;
					default:
						break;
					}
				}
			}
			refresh();
			getch();
			go_on = false;
		}
	}//end while(go_on)
}//end control()


//getch the first input of level
void setting::control2()
{
	int input;
	input = getch();
	switch (input)
	{
	case '1':
		if (start == 0)
		{
			level = 1;
			size = 10;
			printw("1");
			start++;
		}
		break;
	case '2':
		if (start == 0)
		{
			level = 2;
			size = 15;
			printw("2");
			start++;
		}
		break;
	case '3':
		if (start == 0)
		{
			level = 3;
			size = 20;
			printw("3");
			start++;
		}
		break;
	default:
		control2();
		break;
	}
	setsetgame();
	run();
}


void setting::control3()
{
	

	if (leave==1)//when win the game
	{
		clear();
		mvaddstr(10,25,"You win!!!");
		for (int x = 0; x < size; x++)
		{
			for (int y = 0; y < size; y++)
			{
				switch (G[y][x])
				{
				case '0':
					attrset(COLOR_PAIR(1));
					mvaddstr(y, x, "0");
					break;
				case '1':
					attrset(COLOR_PAIR(4));
					mvaddstr(y, x, "1");
					break;
				case '2':
					attrset(COLOR_PAIR(4));
					mvaddstr(y, x, "2");
					break;
				case '3':
					attrset(COLOR_PAIR(4));
					mvaddstr(y, x, "3");
					break;
				case '4':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "4");
					break;
				case '5':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "5");
					break;
				case '6':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "6");
					break;
				case '7':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "7");
					break;
				case '8':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "8");
					break;
				default:
					break;
				}
			}
		}
		refresh();
		getch();
	}//end if
	if (leave==2)//when press 'Q'
	{
		clear();
		attrset(COLOR_PAIR(3));
		mvaddstr(0,0,"why guit?!");
		mvaddstr(1,0,"want to find mommy?");
		refresh();
		getch();
	}
	if (leave==3)//uncover a mine~
	{
		clear();
		mvprintw(0,25,"It's really not your day... =_=");
		for (int x = 0; x < size; x++)
		{
			for (int y = 0; y < size; y++)
			{
				switch (g[y][x])
				{
				case '0':
					attrset(COLOR_PAIR(1));
					mvaddstr(y, x, "0");
					break;
				case '1':
					attrset(COLOR_PAIR(4));
					mvaddstr(y, x, "1");
					break;
				case '2':
					attrset(COLOR_PAIR(4));
					mvaddstr(y, x, "2");
					break;
				case '3':
					attrset(COLOR_PAIR(4));
					mvaddstr(y, x, "3");
					break;
				case '4':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "4");
					break;
				case '5':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "5");
					break;
				case '6':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "6");
					break;
				case '7':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "7");
					break;
				case '8':
					attrset(COLOR_PAIR(5));
					mvaddstr(y, x, "8");
					break;
				case'b':
					attrset(COLOR_PAIR(3));
					mvaddstr(y, x, "8");
				default:
					break;
				}
			}
		}
		refresh();
		getch();
	}
	
	sleep(5);
}


//print the initial set screen
void setting::run()
{
	//print the covered gap
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			switch (g[i][j])
			{
			case ' ':
				attrset(COLOR_PAIR(2));
				mvaddstr(i, j, " ");
				break;
			default:
				break;
			}
		}
	}//end for
	refresh();
	
	attrset(COLOR_PAIR(6));
	mvaddstr(2, 30, "control--->you can use 'keypad' or 'wasd' to do it!");
	mvaddstr(3, 30, "uncover--->press 'O'");
	mvaddstr(4, 30, "flag--->press 'F' ");
	mvaddstr(5, 30, "Hint--->press 'H'");
	mvaddstr(6, 30, "Leave--->press 'Q'");
	attrset(A_NORMAL);
}//end run()


//change the color
void setting::color()
{
	init_pair(1,COLOR_WHITE,COLOR_BLACK);//for normal and '0'
	init_pair(2,COLOR_CYAN,COLOR_CYAN);//for cover
	init_pair(3,COLOR_RED,COLOR_BLACK);//for mines
	init_pair(4,COLOR_GREEN,COLOR_BLACK);//for '1' '2' '3'
	init_pair(5,COLOR_BLUE,COLOR_BLACK);//for others 
	init_pair(6,COLOR_MAGENTA,COLOR_BLACK);//for flag
}//end color()