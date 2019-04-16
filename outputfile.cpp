#include "outputfile.h"

using namespace std;


void outputfile::out(char o[20][20])
{
	fstream file;
	string b;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			b += o[i][j];
		}
		b += "\n";
	}

	file.open("Mine.txt", ios::out);

	if (!file)
	{
		cerr << "Could not open file!!!\n";
		exit(1);
	}

	getline(file, b);
}