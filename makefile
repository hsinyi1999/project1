bomb:setting.o minesweeper.o outputfile.o
	g++ -o bomb setting.o minesweeper.o outputfile.o  -lncursesw
setting.o:setting.cpp setting.h
	g++ -c setting.cpp
outputfile.o:outputfile.cpp outputfile.h
	g++ -c outputfile.cpp
minesweeper.o:minesweeper.cpp setting.h outputfile.h
	g++ -c minesweeper.cpp
clean:
	bomb *.o
