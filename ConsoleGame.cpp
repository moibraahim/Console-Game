/*

	. C++ Console Game
	. Mohamed Ibrahim || Yehia Mohamed || Omar Eid 



*/






#include <iostream>
#include <conio.h>
using namespace std;
void drawbll(char z[][150], int br, int bc, int rh, int ch, int tott2)
{

	z[br][bc] = '>';
	z[br][bc - 1] = '-';
}
void movbll(char z[][150], int& br, int& bc, int& rh, int& ch, int& tott2, int& bllflg2)
{


	if (z[br][bc + 2] == ' ')
	{
		bc += 4;
	}
	if (z[br][bc + 2] != ' ')
	{
		bc = ch + 1;
		br = rh;
		bllflg2 = 0;
	}
	if (z[br][bc + 2] == char(178) || z[br][bc + 1] == char(178) || z[br][bc + 3] == char(178) || z[br][bc + 4] == char(178))
	{
		tott2 -= 10;

	}
}
void door(char z[][150])
{
	int r, c;
	for (c = 84; c < 93; c++)
	{
		z[37][c] = '_';
	}
	for (r = 38; r < 43; r++)
	{
		z[r][84] = '|';
	}
	for (r = 38; r < 43; r++)
	{
		z[r][92] = '|';
	}
}
void ewall(char x[][150])
{
	int r, c;
	for (r = 7; r < 45; r++)
	{
		x[r][83] = (219);
	}
}
void sttic(char z[][150])////////////////////////////////////////////level3
{
	int cc = 114;
	int rr = 1;
	int r, c;
	for (r = 0; r < 45; r++)
	{
		for (c = 0; c < 150; c++)
		{
			z[r][c] = ' ';
		}

	}

	z[1][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'w';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'h';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' n';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'R';
	z[rr][cc++] = 'A';
	z[rr][cc++] = 'P';
	z[rr][cc++] = 'I';
	z[rr][cc++] = 'D';
	z[rr][cc++] = 'L';
	z[rr][cc++] = 'Y';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'j';
	z[rr][cc++] = 'u';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'p';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'i';
	z[rr][cc++] = 'g';
	z[rr][cc++] = 'h';
	z[rr][cc++] = 't';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'w';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'h';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' n';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'q';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'R';
	z[rr][cc++] = 'A';
	z[rr][cc++] = 'P';
	z[rr][cc++] = 'I';
	z[rr][cc++] = 'D';
	z[rr][cc++] = 'L';
	z[rr][cc++] = 'Y';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'j';
	z[rr][cc++] = 'u';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'p';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 'f';
	z[rr][cc++] = 't';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'w';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'j';
	z[rr][cc++] = 'u';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'p';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'o';
	z[rr][cc++] = 'n';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'y';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'f';
	z[rr][cc++] = 'a';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'l';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'a';
	z[rr][cc++] = 'p';
	z[rr][cc++] = 'i';
	z[rr][cc++] = 'd';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'y';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'd';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'o';
	z[rr][cc++] = 'v';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'i';
	z[rr][cc++] = 'g';
	z[rr][cc++] = 'h';
	z[rr][cc++] = 't';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'a';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'o';
	z[rr][cc++] = 'v';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 'f';
	z[rr][cc++] = 't';

	/////////////////////////
	for (c = 113; c < 149; c++)
	{

		z[7][c] = (219);
	}
	for (r = 0; r < 45; r++)
	{
		z[r][149] = (219);
	}
	for (r = 0; r < 45; r++)
	{
		z[r][0] = (219);
	}
	for (c = 0; c < 150; c++)
	{////row
		z[43][c] = (219);
		z[0][c] = (219);
		z[8][c] = (219);
	}
	for (r = 1; r < 9; r++)
	{
		z[r][112] = (219);
	}
	///////////////////////
	for (c = 13; c < 18; c++)
	{
		z[38][c] = (219);
	}
	for (c = 5; c < 10; c++)
	{
		z[34][c] = (219);
	}
	for (c = 13; c < 18; c++)
	{
		z[20][c] = (219);
	}
	for (c = 1; c < 9; c++)
	{
		z[26][c] = (219);
	}
	z[27][4] = 'b';
	z[27][5] = 'o';
	z[27][6] = 'o';
	z[27][7] = 's';
	z[27][8] = 't';
	for (c = 13; c < 18; c++)
	{
		z[29][c] = (219);
	}
	for (r = 2; r < 7; r++)//f
	{
		z[r][3] = (219);
	}
	for (c = 4; c < 7; c++)//f
	{
		z[2][c] = (219);
	}
	for (c = 4; c < 7; c++)//f
	{
		z[4][c] = (219);
	}
	for (c = 8; c < 12; c++)//i
	{
		z[2][c] = (178);
	}
	for (r = 2; r < 7; r++)//i
	{
		z[r][9] = (178);
	}
	for (c = 8; c < 12; c++)//i
	{
		z[6][c] = (178);
	}
	for (r = 2; r < 7; r++)//n
	{
		z[r][14] = (219);
	}
	r = 2;
	c = 14;
	for (; ; r++ && c++)//n
	{
		z[r][c] = (219);
		if (r == 6)
		{
			break;
		}
	}
	for (r = 2; r < 7; r++)//n
	{
		z[r][18] = (219);
	}
	r = 2;
	c = 21;
	for (; ; r++ && c++)//a
	{
		z[r][c] = (178);
		if (r == 6)
		{
			break;
		}
	}
	for (r = 2; r < 7; r++)//a
	{
		z[r][20] = (178);
	}
	for (c = 20; c < 24; c++)//a
	{
		z[5][c] = (178);
	}
	for (r = 2; r < 7; r++)//L
	{
		z[r][27] = (219);
	}
	for (c = 27; c < 31; c++)//L
	{
		z[6][c] = (219);
	}
	for (c = 33; c < 38; c++)//s
	{
		z[2][c] = (178);
	}
	for (r = 2; r < 4; r++)//s
	{
		z[r][33] = (178);
	}
	for (c = 33; c < 38; c++)//s
	{
		z[4][c] = (178);
	}
	for (r = 4; r < 7; r++)//s
	{
		z[r][37] = (178);
	}
	for (c = 33; c < 38; c++)//s
	{
		z[6][c] = (178);
	}
	for (c = 40; c < 45; c++)//t
	{
		z[2][c] = (219);
	}
	for (r = 2; r < 7; r++)//t
	{
		z[r][42] = (219);
	}
	r = 2;
	c = 48;
	for (; ; r++ && c++)//a
	{
		z[r][c] = (178);
		if (r == 6)
		{
			break;
		}
	}
	for (r = 2; r < 7; r++)//a
	{
		z[r][47] = (178);
	}
	for (c = 47; c < 51; c++)//a
	{
		z[5][c] = (178);
	}
	for (c = 54; c < 59; c++)//g
	{
		z[2][c] = (219);
	}
	for (r = 2; r < 4; r++)//g
	{
		z[r][54] = (219);
	}
	for (c = 54; c < 59; c++)//g
	{
		z[4][c] = (219);
	}
	for (r = 3; r < 7; r++)//g
	{
		z[r][58] = (219);
	}
	for (c = 54; c < 59; c++)//g
	{
		z[6][c] = (219);
	}
	for (c = 61; c < 66; c++)//e
	{
		z[2][c] = (178);
	}
	for (c = 61; c < 66; c++)//e
	{
		z[4][c] = (178);
	}
	for (c = 61; c < 66; c++)//e
	{
		z[6][c] = (178);
	}
	for (r = 3; r < 7; r++)//e
	{
		z[r][61] = (178);
	}
	for (r = 1; r < 9; r++)/////////////
	{
		z[r][68] = (219);
	}
	for (c = 68; c < 73; c++)/////////////
	{
		z[1][c] = (219);
	}
	for (c = 68; c < 71; c++)/////////////
	{
		z[2][c] = (219);
	}
	for (c = 68; c < 71; c++)/////////////
	{
		z[5][c] = (219);
	}
	for (c = 68; c < 73; c++)/////////////
	{
		z[6][c] = (219);
		z[7][c] = (219);
		z[8][c] = (219);
	}
	for (r = 7; r < 9; r++)/////////////
	{
		z[r][75] = (219);
		z[r][78] = (219);
	}
	for (c = 81; c < 85; c++)/////////////
	{
		z[1][c] = (219);
		z[6][c] = (219);
		z[7][c] = (219);


	}
	for (r = 3; r < 5; r++)
	{
		for (c = 79; c < 82; c++)
		{
			z[r][c] = (219);
		}
		for (c = 72; c < 75; c++)
		{
			z[r][c] = (219);
		}
	}
	for (c = 83; c < 85; c++)/////////////
	{
		z[2][c] = (219);
		z[5][c] = (219);
	}
	for (c = 76; c < 78; c++)/////////////
	{
		z[5][c] = (219);
	}
	for (r = 1; r < 9; r++)/////////////
	{
		z[r][85] = (219);
	}

	for (r = 18; r < 45; r++)
	{
		for (c = 24; c < 35; c++)
		{
			z[r][c] = (219);

		}
	}
	/////////////////////////////

}
void mveb(char z[][150], int& ebr, int& ebc, int& ebsr1, int& ebsc1, int& ebsr2, int& ebsc2)
{
	if (ebr > 12)
	{
		ebr -= 5;
	}
	if (ebr < 12)
	{
		ebr = 35;
	}
	if (ebr <= 35 && ebsr1 >= 12)
	{
		ebsr1 += 7;
	}
	if (ebsr1 >= 45)
	{
		ebsr1 = 12;
	}
	if (ebsc2 >= 85)
	{
		ebsc2 -= 5;
	}
	if (ebsc2 <= 85)
	{
		ebsc2 = 145;
	}
}
void flleb(char z[][150], int ebr, int ebc, int ebsr1, int ebsc1, int ebsr2, int ebsc2)
{
	z[ebr + 2][ebc + 14] = (178);
	z[ebr + 1][ebc + 14] = (178);
	z[ebr][ebc + 14] = (178);
	z[ebr - 1][ebc + 14] = (178);
	z[ebr - 2][ebc + 14] = (178);
	z[ebr - 3][ebc + 13] = (178);
	z[ebr - 4][ebc + 13] = (178);
	z[ebr - 5][ebc + 12] = (178);
	z[ebr - 6][ebc + 11] = (178);
	z[ebr - 6][ebc + 10] = (178);
	z[ebr - 6][ebc + 11] = (178);
	z[ebr - 6][ebc + 10] = (178);
	z[ebr - 7][ebc + 9] = (178);
	z[ebr - 7][ebc + 8] = (178);
	z[ebr - 7][ebc + 7] = (178);
	z[ebr - 7][ebc + 6] = (178);
	z[ebr - 7][ebc + 5] = (178);
	z[ebr - 6][ebc + 4] = (178);
	z[ebr - 6][ebc + 3] = (178);
	z[ebr - 5][ebc + 2] = (178);
	z[ebr - 4][ebc + 1] = (178);
	z[ebr - 3][ebc + 1] = (178);
	z[ebr - 2][ebc] = (178);
	z[ebr - 1][ebc] = (178);
	z[ebr][ebc] = (178);
	z[ebr + 1][ebc] = (178);
	z[ebr + 2][ebc] = (178);
	////
	z[ebr + 1][ebc + 14] = (178);
	z[ebr + 2][ebc + 14] = (178);
	z[ebr + 3][ebc + 13] = (178);
	z[ebr + 4][ebc + 13] = (178);
	z[ebr + 5][ebc + 12] = (178);
	z[ebr + 6][ebc + 11] = (178);
	z[ebr + 6][ebc + 10] = (178);
	z[ebr + 6][ebc + 11] = (178);
	z[ebr + 6][ebc + 10] = (178);
	z[ebr + 7][ebc + 9] = (178);
	z[ebr + 7][ebc + 8] = (178);
	z[ebr + 7][ebc + 7] = (178);
	z[ebr + 7][ebc + 6] = (178);
	z[ebr + 7][ebc + 5] = (178);
	z[ebr + 6][ebc + 4] = (178);
	z[ebr + 6][ebc + 3] = (178);
	z[ebr + 5][ebc + 2] = (178);
	z[ebr + 4][ebc + 1] = (178);
	z[ebr + 3][ebc + 1] = (178);
	z[ebr - 3][ebc + 3] = (219);////
	z[ebr - 2][ebc + 4] = (219);
	z[ebr - 1][ebc + 5] = (219);
	z[ebr][ebc + 4] = (219);
	z[ebr][ebc + 5] = (219);
	z[ebr + 1][ebc + 4] = (219);
	z[ebr + 1][ebc + 5] = (219);
	z[ebr - 3][ebc + 11] = (219);////
	z[ebr - 2][ebc + 10] = (219);
	z[ebr - 1][ebc + 9] = (219);
	z[ebr][ebc + 9] = (219);
	z[ebr][ebc + 9] = (219);
	z[ebr][ebc + 10] = (219);
	z[ebr + 1][ebc + 9] = (219);
	z[ebr + 1][ebc + 10] = (219);
	z[ebr + 4][ebc + 5] = (219);
	z[ebr + 3][ebc + 6] = (219);
	z[ebr + 3][ebc + 7] = (219);
	z[ebr + 3][ebc + 8] = (219);
	z[ebr + 4][ebc + 9] = (219);
	//
	z[ebsr1][ebsc1] = 'X';
	z[ebsr1 - 1][ebsc1] = 'X';
	z[ebsr1 - 2][ebsc1] = 'X';
	z[ebsr1 - 3][ebsc1] = 'X';

	z[ebsr1][ebsc1 + 15] = 'X';
	z[ebsr1 - 1][ebsc1 + 15] = 'X';
	z[ebsr1 - 2][ebsc1 + 15] = 'X';
	z[ebsr1 - 3][ebsc1 + 15] = 'X';
	//
	z[ebsr1][ebsc1 + 30] = 'X';
	z[ebsr1 - 1][ebsc1 + 30] = 'X';
	z[ebsr1 - 2][ebsc1 + 30] = 'X';
	z[ebsr1 - 3][ebsc1 + 30] = 'X';
	z[ebsr2][ebsc2] = '<';
	z[ebsr2][ebsc2 + 1] = '*';
	z[ebsr2][ebsc2 + 2] = '*';
	z[ebsr2][ebsc2 + 3] = '*';
	z[ebsr2][ebsc2 + 4] = '*';
}
void Disp(char z[][150])
{
	system("cls");
	int r, c;
	for (r = 0; r < 45; r++)
	{
		for (c = 0; c < 150; c++)
		{
			cout << z[r][c];
		}
	}

}
///////////////////////////////////////////////////////////////////////////
void spikedrop(char z[][150], int re1, int ce1)
{
	z[re1][ce1] = '\\';
	z[re1 - 2][ce1 + 1] = '\\';
	z[re1 - 2][ce1] = '/';
	z[re1 - 1][ce1 - 1] = '<';
	z[re1][ce1 + 1] = '/';
	z[re1 - 1][ce1 + 2] = '>';
	//
	z[re1][ce1 + 20] = '\\';
	z[re1 - 2][ce1 + 21] = '\\';
	z[re1 - 2][ce1 + 20] = '/';
	z[re1 - 1][ce1 + 19] = '<';
	z[re1][ce1 + 21] = '/';
	z[re1 - 1][ce1 + 22] = '>';

}
void spikedropmove(char z[][150], int& re1, int& ce1)
{
	if (z[re1 + 1][ce1] == ' ' && z[re1 + 1][ce1 + 1] == ' ' || z[re1 + 2][ce1] == ' ' && z[re1 + 2][ce1 + 1] == ' ' || z[re1 + 3][ce1] == ' ' && z[re1 + 3][ce1 + 1] == ' ')
	{
		re1 += 3;
	}
	if (z[re1 + 2][ce1] == char(219) || z[re1 + 2][ce1 + 1] == char(219))
	{
		re1 = 11;
		ce1 = 60;
	}

}
void fle2(char z[][150], int re2, int ce2)
{
	z[re2][ce2] = '>';
	z[re2][ce2 - 1] = '*';
	z[re2][ce2 - 2] = '*';
	z[re2][ce2 - 3] = '*';
	z[re2][ce2 - 4] = '*';
	z[re2][ce2 - 5] = '>';
}
void mve2(char z[][150], int& re2, int& ce2)
{
	if (ce2 < 82)
	{
		ce2 += 3;
	}
	else
	{
		ce2 = 34;
	}
}
void fle1(char z[][150], int sre, int sce, int rs1, int cs1, int rs2, int cs2)
{
	z[sre][sce] = '_';
	z[sre][sce + 1] = (217);
	z[sre][sce + 2] = ')';
	z[sre][sce - 1] = (192);
	z[sre][sce - 2] = '(';
	z[rs1][cs1] = '#';
	z[rs2][cs2] = '#';
	sre -= 1;
	sce -= 2;
	for (int c = 0; c < 5; c++)
	{
		z[sre][sce + c] = '*';
	}
	sre += 2;
	for (int c = 0; c < 5; c++)
	{
		z[sre][sce + c] = '*';
	}
}
void mve1(char z[][150], int& sre, int& sce, int& rs1, int& cs1, int& rs2, int& cs2)
{

	if (sce > 0)
	{
		sce++;
	}
	if (sce == 32)
	{
		sce = 4;
	}
	if (z[rs1 + 1][cs1] == ' ')
	{
		rs1++;
	}

	if (z[rs1 + 1][cs1] == char(219))
	{
		rs1 = sre + 1;
		cs1 = sce - 2;
	}

	if (z[rs2 + 1][cs2] == ' ')
	{
		rs2++;
	}

	if (z[rs2 + 1][cs2] == char(219))
	{
		rs2 = sre + 1;
		cs2 = sce + 2;
	}




}
///////////////////////////////////////////////////////////////////////////
void FllHro1(char z[][150], int rh, int ch)
{
	z[rh][ch] = 'O';
	z[rh + 1][ch] = (219);
	z[rh + 1][ch - 1] = (217);
	z[rh + 1][ch + 1] = (192);
	z[rh + 2][ch - 1] = '|';
	z[rh + 2][ch + 1] = '\\';
}
void hroan(char z[][150], int rh, int ch)
{
	z[rh][ch] = 'O';
	z[rh + 1][ch] = (219);
	z[rh + 1][ch - 1] = (217);
	z[rh + 1][ch + 1] = (192);
	z[rh + 2][ch - 1] = '/';
	z[rh + 2][ch + 1] = '|';

}
////////////////////////////////////////////////////////////////////////////
void MovHro1(char z[][150], int& rh, int& ch, char o)
{

	if (z[rh + 3][ch] == char(219))
	{
		if (o == 'a' && z[rh][ch - 3] == ' ')
		{
			ch--;
		}
	}


	if (z[rh + 3][ch] == char(219))
	{
		if (o == 'd' && z[rh][ch + 3] == ' ')
		{
			ch++;
		}
	}
	if (o == 's' && z[rh + 3][ch + 2] == ' ' && z[rh + 3][ch - 2] == ' ')
	{
		for (;;)
		{
			rh++;
			if (z[rh + 3][ch] != ' ')
			{
				break;
			}
		}
	}

	if (o == 'w' && z[rh + 3][ch] == char(219) && z[rh - 4][ch] != char(219) && z[rh - 3][ch] != char(219) && z[rh - 2][ch] != char(219) && z[rh - 1][ch] != char(219))
	{

		rh -= 6;

	}
	////////////////////////////////////////////////////jump

	if (o == 'e' && z[rh + 3][ch] == ' ' && z[rh][ch + 5] != char(219) && z[rh][ch + 6] != char(219) && z[rh][ch + 7] != char(219) && z[rh][ch + 4] != char(219) && z[rh][ch + 3] != char(219))
	{
		ch += 7;
		for (;;)
		{
			rh++;
			if (z[rh + 3][ch] == char(219))
			{
				break;
			}

		}

	}



	if (o == 'q' && z[rh + 3][ch] == ' ' && z[rh][ch - 5] != char(219) && z[rh][ch - 6] != char(219) && z[rh][ch - 7] != char(219) && z[rh][ch - 4] != char(219) && z[rh][ch - 3] != char(219))
	{
		ch -= 7;
		for (;;)
		{
			rh++;
			if (z[rh + 3][ch] == char(219))
			{
				break;
			}

		}

	}

	//////////////////////////////////////////////////////////////////jump^operation
}


void Fillx(char x[][150])
{
	int r, c;

	// Fill screen with spaces
	for (r = 0; r < 45; r++)
	{
		for (c = 0; c < 150; c++)
		{
			x[r][c] = ' ';
		}
	}

	// Fill board upside and downside adsad
	for (c = 0; c < 150; c++)
	{
		x[0][c] = (223);
		x[1][c] = (223);
		x[44][c] = (220);
	}

	// start line
	for (int c = 0; c < 50; c++)
	{
		x[30][c] = (194);
	}


	for (int r = 30; r < 44; r++)
	{


		x[r][50] = (197);
	}

	for (int r = 30; r < 44; r++)
	{


		x[r][50 + 2] = (197);
	}



	x[3][3] = 'C';	x[3][4] = 'a'; 	x[3][5] = 'p'; 	x[3][6] = 't'; 	x[3][7] = 'u'; 	x[3][8] = 'r'; 	x[3][9] = 'e';
	x[3][11] = 'T'; x[3][12] = 'h'; x[3][13] = 'e';
	x[3][15] = 'F'; x[3][16] = 'l'; x[3][17] = 'a'; x[3][18] = 'g';
	x[4][3] = 'F';	x[4][4] = 'l'; 	x[4][5] = 'a'; 	x[4][6] = 'g'; x[4][7] = 's'; x[4][9] = '>';


















}




void Menu()
{

	for (int i = 0; i < 1000; i++)
	{






		system("cls");
		cout << "                               '. V   V .'                      " << endl;
		cout << "                                | >===< |                           " << endl;
		cout << "                                | >===< |                           " << "            -----------------------------------------------------------" << endl;
		cout << "                              _| >===< |_                         " << "             /                                                        / " << endl;
		cout << "                       ..-X, | >=== < | , X-..                    " << "            /          .Kill enemies as much as you can              /  " << endl;
		cout << "                .-    Xx,   'X; >===< ;X', xX`-.                  " << "           /           .Dont Lose Your Health                       /   " << endl;
		cout << "               .-    Xx,   'X; >===< ;X', xX`-.                   " << "          /            .Get to the Gate to move to next Stage      /    " << endl;
		cout << "               .-    Xx,   'X; >===< ;X', xX`-.                   " << "         /                                                        /     " << endl;
		cout << "             .'`X.    'Xx.  'X,>===<,X'  .xX'    .X`.		     " << "     /              Press K to Play ......                    /     " << endl;
		cout << "             .'`X.    'Xx.  'X,>===<,X'  .xX'    .X`.		     " << "    /--------------------------------------------------------/      " << endl;
		cout << "             .'X    `X,   'Xx   'X === X'   xX'   ,X'   X'.		 " << endl;
		cout << "           .xXXXXx,   'X    'Xx  'X = X'  xX'    X'   ,xXXXXx.		 " << endl;
		cout << "         .'       'X.   'X   'Xx  'X X'  xX'   X'   .X'       '.	 " << endl;
		cout << "       .xXXXXXXXXXXXXX,  `Xx. 'Xx, .X. ,xX' .xX'  ,XXXXXXXXXXXXXx. 	 " << endl;
		cout << "      /               `X   XX  'XX//^||XX'  XX   X`               | 	" << endl;
		cout << "     /XXXXXXXXXXXXXXXXXXX   XX  'X||_||X'  XX   XXXXXXXXXXXXXXXXXXX|	 " << endl;
		cout << "    /                    X_.XX__XX'='XX__XX._X                    |	" << endl;
		cout << "    |XXXXXXXXXXXXXXXXXXX.'                     '.XXXXXXXXXXXXXXXXXXX|	" << endl;
		cout << "    |                  |                                            |	" << endl;

		cout << "    |XXXXXXXXXXXXXXXXX|   ..::::.       .::::..    XXXXXXXXXXXXXXXXX|" << endl;
		cout << "    |                |  .'       '     '       '.                   |" << endl;
		cout << "    /XXXXXXXXXXXXXXXX|      _.--.      . -  - ._        | XXXXXXXXXXXXXXXX\ " << endl;
		cout << "   |                .==.;   '.(').'\   /'.(').'         ;.==.             |" << endl;
		cout << "   |XXXXXXXXXXX.'.-, |            |   |            | ,-.'.XXXXXXXXXXX|" << endl;
		cout << "   |           |; (               |   |               ) ;|           |" << endl;
		cout << "   |XXXXXXXXXXX|;  `,            /    .|            ,'  ;|XXXXXXXXXXX|" << endl;
		cout << "   |           ;;'--            ( _   _ )            --';;           |" << endl;
		cout << "   |XXXXXXXXXXXX\' o             `'`-`'`             o '/XXXXXXXXXXXX|" << endl;
		cout << "   |             '-J-'|            : :            |'-L-'             |" << endl;
		cout << "   |XXXXXXXXXXXXXX()X           _   _          X()XXXXXXXXXXXXXX|" << endl;
		if (i % 2 == 0)
		{
			cout << "   |                           -'  `'`  '-.                         |" << endl;
		}
		if (i % 2 != 0)
		{
			cout << "   |                           -'  `'`  '-.                         |" << endl;
		}
		if (i % 2 == 0)
		{
			cout << "   |                            ---------                           |" << endl;
		}
		if (i % 2 != 0)
		{
			cout << "   |                            `-.....-'                           |" << endl;
		}


		cout << "   |XXXXXXXXXXXXXXXXXXXXXX'.                 .'XXXXXXXXXXXXXXXXXXXXXX|" << endl;
		cout << "    \                       `;-._       _.-;`                       /" << endl;
		cout << "     \XXXXXXXXXXXXXXXXXXXXXXX|   `}}}}}`   |XXXXXXXXXXXXXXXXXXXXXXX/" << endl;
		cout << "      '.                     |    {{{{{    |                     .'" << endl;
		cout << "        '.XXXJGSXXXXXXXXXXXXX|     }}}}    |XXXXXXXXXXXXXXXXXXX.'" << endl;
		cout << "         \                  |     {{{     |                  /" << endl;
		cout << "          'XXXXXXXXXXXXXXXXX|      }}     |XXXXXXXXXXXXXXXXX'" << endl;
		cout << "           \                |      (      |                /" << endl;
		cout << "             'XXXXXXXXXXXXXXX|             |XXXXXXXXXXXXXXX'" << endl;
		cout << "              \              |             |              /" << endl;
		cout << "               \XXXXXXXXXXXXX|             |XXXXXXXXXXXXX/" << endl;
		cout << "               |             |             |             |" << endl;
		cout << "               |XXXXXXXXXXXXX|             |XXXXXXXXXXXXX|" << endl;
		cout << "               |             |             |             |" << endl;
		cout << "               |XXXXXXXXXXXXX|             |XXXXXXXXXXXXX|" << endl;
		cout << "                \             |             |             /" << endl;
		cout << "                'XXXXXXXXXXXX|             |XXXXXXXXXXXX'" << endl;
		cout << "                  `-.___/             \___.-`" << endl;


		char Q;
		Q = _getch();

		if (Q == 'k')
		{
			break;
		}




	}
}

//---------------------------


void FillHeroInX(char x[][150], int rH, int cH, int& parcount)
{

	if (parcount < 22)
	{
		x[rH][cH] = '.';
		x[rH][cH + 1] = '-';
		x[rH][cH + 2] = '-';
		x[rH][cH + 3] = '-';
		x[rH][cH + 4] = '.';

		x[rH + 1][cH - 1] = '(';
		x[rH + 1][cH] = '_';
		x[rH + 1][cH + 1] = '_';
		x[rH + 1][cH + 2] = '_';
		x[rH + 1][cH + 3] = '_';
		x[rH + 1][cH + 4] = '_';
		x[rH + 1][cH + 5] = ')';

		x[rH + 2][cH] = '\\';
		x[rH + 2][cH + 1] = ' ';
		x[rH + 2][cH + 2] = ' ';
		x[rH + 2][cH + 3] = ' ';
		x[rH + 2][cH + 4] = '/';

		x[rH + 3][cH] = '_';
		x[rH + 3][cH + 1] = '\\';
		x[rH + 3][cH + 2] = 'o';
		x[rH + 3][cH + 3] = '/';
		x[rH + 3][cH + 4] = '_';

		x[rH + 4][cH + 2] = (219);

		x[rH + 5][cH + 1] = '/';
		x[rH + 5][cH + 3] = '\\';


		parcount++;




	}

	else
	{

		x[rH][cH] = (149);
		x[rH + 1][cH] = (219);
		x[rH + 1][cH - 1] = (217);
		x[rH + 1][cH + 1] = (192);
		x[rH + 2][cH - 1] = '/';
		x[rH + 2][cH + 1] = '\\';
		x[rH + 1][cH + 2] = 'D';
	}

	if (cH == 49)
	{
		x[rH + 1][cH + 1] = ' ';
		x[rH + 1][cH + 3] = ' ';
		x[rH][cH + 1] = '|';
		x[rH][cH + 3] = '|';
	}





}
void MoveHeroPosition(char x[][150], int& rH, int& cH, char Q, int& Jumpcoun, int& WinFlag)
{


	if (Q == 'v')
	{
		rH--;
		rH--;

	}
	if (Q == 'a')
	{
		cH--;
		cH--;

	}
	if (rH > 1)
	{
		if (Q == 'w')
		{
			rH--;
			rH--;

		}
	}
	if (rH < 40)
	{
		if (Q == 's')
		{
			rH++;
			rH++;

		}
	}
	if (Q == 'd')
	{
		cH++;
		cH++;

	}
	// Jump Hit 
	if (Q == ' ')
	{

		rH--;
		rH--;
		rH--;
		Jumpcoun = 1;



	}

	if (cH == 140)
	{
		WinFlag = 1;
	}








}
void DropHeroFromPlane(int& rH, int& cH, int& count4h)
{
	if (count4h < 23)
	{
		rH++;
		count4h++;
	}
}


//---------------------------


void MoveMidlleEnemy(int& rmE, int& cmE)
{
	// 30 70 


	cmE++;
	cmE++;
	cmE++;














}

void FillMidlleEnemy(char x[][150], int rmE, int cmE, int& DropEgg, int& rH, int& cH)
{
	// 30   50


	x[rmE][cmE] = '/'; 	x[rmE][cmE + 1] = '\\'; x[rmE][cmE + 18] = '/'; x[rmE][cmE + 19] = '\\';

	x[rmE + 1][cmE] = '/'; x[rmE + 1][cmE + 2] = '\\'; x[rmE + 1][cmE + 3] = '`';
	x[rmE + 1][cmE + 4] = '.'; x[rmE + 1][cmE + 5] = '_';
	x[rmE + 1][cmE + 9] = '('; x[rmE + 1][cmE + 10] = '\\';
	x[rmE + 1][cmE + 11] = '_'; x[rmE + 1][cmE + 12] = '/';
	x[rmE + 1][cmE + 13] = ')'; x[rmE + 1][cmE + 17] = '_';
	x[rmE + 1][cmE + 18] = '.'; x[rmE + 1][cmE + 19] = '"';
	x[rmE + 1][cmE + 20] = '/'; x[rmE + 1][cmE + 22] = '\\';

	x[rmE + 2][cmE] = '|';  x[rmE + 2][cmE + 1] = '.'; x[rmE + 2][cmE + 2] = '"';
	x[rmE + 2][cmE + 3] = '.'; x[rmE + 2][cmE + 4] = '_'; x[rmE + 2][cmE + 6] = '"';
	x[rmE + 2][cmE + 7] = '-'; x[rmE + 2][cmE + 8] = '-'; x[rmE + 2][cmE + 9] = '(';
	x[rmE + 2][cmE + 10] = 'o'; x[rmE + 2][cmE + 11] = '.'; x[rmE + 2][cmE + 12] = 'o';
	x[rmE + 2][cmE + 13] = ')'; x[rmE + 2][cmE + 14] = '-'; x[rmE + 2][cmE + 15] = '-';
	x[rmE + 2][cmE + 16] = '"'; x[rmE + 2][cmE + 17] = '_'; x[rmE + 2][cmE + 18] = '"';
	x[rmE + 2][cmE + 19] = '"'; x[rmE + 2][cmE + 20] = '.'; x[rmE + 2][cmE + 22] = '|';


	x[rmE + 3][cmE + 1] = '\\'; x[rmE + 3][cmE + 2] = '_'; x[rmE + 3][cmE + 4] = '/';
	x[rmE + 3][cmE + 6] = '`'; x[rmE + 3][cmE + 7] = ';'; x[rmE + 3][cmE + 8] = '=';
	x[rmE + 3][cmE + 9] = '/'; x[rmE + 3][cmE + 10] = ' '; x[rmE + 3][cmE + 11] = '"';
	x[rmE + 3][cmE + 13] = '\\'; x[rmE + 3][cmE + 14] = '='; x[rmE + 3][cmE + 15] = ';';
	x[rmE + 3][cmE + 16] = '`'; x[rmE + 3][cmE + 18] = '\\'; x[rmE + 3][cmE + 21] = '_';
	x[rmE + 3][cmE + 22] = '/';

	x[rmE + 4][cmE + 3] = '`'; x[rmE + 4][cmE + 4] = '\\'; x[rmE + 4][cmE + 5] = '_';
	x[rmE + 4][cmE + 6] = '_'; x[rmE + 4][cmE + 7] = '|'; x[rmE + 4][cmE + 9] = '\\';
	x[rmE + 4][cmE + 10] = ' '; x[rmE + 4][cmE + 11] = ' '; x[rmE + 4][cmE + 12] = '_';
	x[rmE + 4][cmE + 13] = '/'; x[rmE + 4][cmE + 15] = '|'; x[rmE + 4][cmE + 16] = '_';
	x[rmE + 4][cmE + 17] = '_'; x[rmE + 4][cmE + 18] = '/'; x[rmE + 4][cmE + 19] = '`';

	x[rmE + 5][cmE + 8] = '\\'; x[rmE + 5][cmE + 9] = '('; x[rmE + 5][cmE + 10] = '_';
	x[rmE + 5][cmE + 11] = '|'; x[rmE + 5][cmE + 12] = '_'; x[rmE + 5][cmE + 13] = ')';
	x[rmE + 5][cmE + 14] = '/';

	x[rmE + 6][cmE + 9] = '"'; x[rmE + 6][cmE + 11] = '`'; x[rmE + 6][cmE + 13] = '"';

	x[rmE + DropEgg][cmE + 11] = (222);
	DropEgg++;
	if (DropEgg > 20)
	{
		DropEgg = 5;
	}



}

//---------------------------

void MoveBigEnemy(int& rbE, int& cbE)
{
	if (cbE <= 20)
	{
		cbE++;


	}
	if (cbE >= 10)
	{

		for (int i = 0; i < 5; i++)
		{
			cbE--;

		}

		cbE = 2;

	}



}

void FillBigEnemy(char x[][150], int rbE, int cbE)
{

	x[rbE][cbE + 16] = '/'; x[rbE][cbE + 17] = '\\';
	x[rbE][cbE + 18] = '_'; x[rbE][cbE + 19] = '[';
	x[rbE][cbE + 20] = ']'; x[rbE][cbE + 21] = '_';
	x[rbE][cbE + 22] = '/'; x[rbE][cbE + 23] = '\\';

	x[rbE + 1][cbE + 15] = '|'; x[rbE + 1][cbE + 16] = ']';
	x[rbE + 1][cbE + 18] = '_';  x[rbE + 1][cbE + 19] = '|';
	x[rbE + 1][cbE + 20] = '|'; x[rbE + 1][cbE + 21] = '_';
	x[rbE + 1][cbE + 23] = '['; x[rbE + 1][cbE + 24] = '|';

	x[rbE + 2][cbE + 16] = '\\'; x[rbE + 2][cbE + 17] = '/';
	x[rbE + 2][cbE + 19] = '|'; x[rbE + 2][cbE + 20] = '|';
	x[rbE + 2][cbE + 22] = '\\'; x[rbE + 2][cbE + 23] = '/';


	x[rbE + 2][cbE + 9] = ' '; x[rbE + 2][cbE + 10] = ' ';
	x[rbE + 2][cbE + 11] = '_';


	x[rbE + 3][cbE + 8] = '/'; x[rbE + 3][cbE + 9] = '_';
	x[rbE + 3][cbE + 10] = ' '; x[rbE + 3][cbE + 11] = ' ';
	x[rbE + 3][cbE + 12] = '\\'; x[rbE + 3][cbE + 19] = '|';
	x[rbE + 3][cbE + 20] = '|';

	x[rbE + 4][cbE + 7] = '('; x[rbE + 4][cbE + 8] = '|';
	x[rbE + 4][cbE + 9] = '0'; x[rbE + 4][cbE + 11] = '0';
	x[rbE + 4][cbE + 12] = '|'; x[rbE + 4][cbE + 13] = ')';
	x[rbE + 4][cbE + 19] = '|'; x[rbE + 4][cbE + 20] = '|';


	x[rbE + 5][cbE + 5] = ' '; x[rbE + 5][cbE + 6] = ' ';
	x[rbE + 5][cbE + 7] = '/'; x[rbE + 5][cbE + 8] = '{';
	x[rbE + 5][cbE + 9] = '\\'; x[rbE + 5][cbE + 10] = 'U';
	x[rbE + 5][cbE + 11] = '/'; x[rbE + 5][cbE + 12] = '}';
	x[rbE + 5][cbE + 13] = '\\'; x[rbE + 5][cbE + 14] = '_';
	x[rbE + 5][cbE + 16] = '_';
	x[rbE + 5][cbE + 17] = '_'; x[rbE + 5][cbE + 18] = '/';
	x[rbE + 5][cbE + 19] = 'v'; x[rbE + 5][cbE + 20] = 'v';
	x[rbE + 5][cbE + 21] = 'v';


	x[rbE + 6][cbE + 5] = '/'; x[rbE + 6][cbE + 7] = '\\'; x[rbE + 6][cbE + 9] = '{';
	x[rbE + 6][cbE + 10] = '~'; x[rbE + 6][cbE + 11] = '}'; x[rbE + 6][cbE + 15] = '/';
	x[rbE + 6][cbE + 16] = ' '; x[rbE + 6][cbE + 17] = '|'; x[rbE + 6][cbE + 18] = ' ';
	x[rbE + 6][cbE + 19] = 'P'; x[rbE + 6][cbE + 21] = '|';

	x[rbE + 7][cbE + 5] = '|'; x[rbE + 7][cbE + 6] = ' '; x[rbE + 7][cbE + 7] = '/';
	x[rbE + 7][cbE + 8] = '\\';
	x[rbE + 7][cbE + 10] = '~'; x[rbE + 7][cbE + 14] = '/'; x[rbE + 7][cbE + 13] = '_';

	x[rbE + 8][cbE + 5] = '|'; x[rbE + 8][cbE + 6] = '_';  x[rbE + 8][cbE + 7] = '|';
	x[rbE + 8][cbE + 8] = '('; x[rbE + 8][cbE + 9] = ' '; x[rbE + 8][cbE + 10] = ' ';
	x[rbE + 8][cbE + 11] = ' '; x[rbE + 8][cbE + 12] = ' '; x[rbE + 8][cbE + 13] = '_';

	x[rbE + 8][cbE + 14] = ')';

	x[rbE + 9][cbE + 5] = '\\'; x[rbE + 9][cbE + 6] = '_'; x[rbE + 9][cbE + 7] = ']';
	x[rbE + 9][cbE + 8] = '/'; x[rbE + 9][cbE + 9] = ' '; x[rbE + 9][cbE + 10] = ' ';
	x[rbE + 9][cbE + 9] = ' '; x[rbE + 9][cbE + 10] = ' '; x[rbE + 9][cbE + 11] = '_';
	x[rbE + 9][cbE + 12] = '_'; x[rbE + 9][cbE + 13] = '\\';

	x[rbE + 10][cbE + 7] = '_';
	x[rbE + 10][cbE + 8] = '\\'; x[rbE + 10][cbE + 9] = '_'; x[rbE + 10][cbE + 10] = '|';
	x[rbE + 10][cbE + 11] = '|'; x[rbE + 10][cbE + 12] = '_'; x[rbE + 10][cbE + 13] = '/';
	x[rbE + 10][cbE + 14] = '_';

	x[rbE + 11][cbE + 6] = '('; x[rbE + 11][cbE + 7] = '_'; x[rbE + 11][cbE + 8] = ',';
	x[rbE + 11][cbE + 9] = ' '; x[rbE + 11][cbE + 10] = ' '; x[rbE + 11][cbE + 11] = '|';
	x[rbE + 11][cbE + 12] = '|'; x[rbE + 11][cbE + 13] = '_'; x[rbE + 11][cbE + 14] = ',';
	x[rbE + 11][cbE + 15] = '_'; x[rbE + 11][cbE + 16] = ')';



}


//---------------------------

void FillPlaneinX(char x[][150], int rP, int cP, int& count4Remove)
{
	// rP = 0, cP = 0;

	if (count4Remove <= 39)
	{
		for (int i = 4; i < 9; i++)
		{
			x[rP + 2][cP + i] = '_';
		}

		x[rP + 3][cP + 4] = '\\';
		x[rP + 3][cP + 5] = ' ';
		x[rP + 3][cP + 6] = 'C';
		x[rP + 3][cP + 7] = 'S';
		x[rP + 3][cP + 8] = '\\';
		x[rP + 3][cP + 9] = '_';
		x[rP + 3][cP + 10] = '_';
		x[rP + 3][cP + 11] = '_';

		x[rP + 4][cP + 5] = '\\';
		x[rP + 4][cP + 10] = '_';
		x[rP + 4][cP + 11] = '_';
		x[rP + 4][cP + 12] = '_';
		x[rP + 4][cP + 13] = '\\';
		x[rP + 4][cP + 14] = '\\';
		x[rP + 4][cP + 15] = '\\';
		x[rP + 4][cP + 16] = '\\';
		for (int i = 4; i < 25; i++)
		{
			x[rP + 4][cP + i] = '_';
		}

		x[rP + 5][cP + 4] = '\\';
		x[rP + 5][cP + 5] = ' ';
		x[rP + 5][cP + 6] = '/';
		x[rP + 5][cP + 7] = '_';
		x[rP + 5][cP + 8] = '//';

		x[rP + 5][cP + 7] = '_';

		x[rP + 5][cP + 9] = ' ';
		x[rP + 5][cP + 10] = ' ';
		x[rP + 5][cP + 11] = ' ';

		for (int i = 9; i < 23; i++)
		{
			x[rP + 5][cP + i] = '.';
		}

		x[rP + 5][cP + 22] = '-';
		x[rP + 5][cP + 23] = '-';
		x[rP + 5][cP + 24] = '.';
		x[rP + 5][cP + 25] = (62);

		for (int i = 4; i < 25; i++)
		{
			x[rP + 6][cP + i] = '-';
		}

		x[rP + 6][cP + 26] = (96);




		x[rP + 7][cP + 15] = '/';
		x[rP + 7][cP + 19] = '/';

		x[rP + 7][cP + 14] = '_';
		x[rP + 7][cP + 13] = '_';

		x[rP + 7][cP + 16] = '_';
		x[rP + 7][cP + 17] = '_';
		x[rP + 7][cP + 18] = '_';


		count4Remove++;
	}

}

void MovePlanePosition(int& rP, int& cP, int& count4p)
{


	if (count4p < 40)
	{
		if (cP > 0)
		{
			cP++;
			cP++;
			cP++;
			count4p++;

		}

	}






}

//---------------------------

void FillLadder(char x[][150], int rLad, int cLad, int& rH, int& cH)
{
	// rLad = 22 cLad = 100

	x[21 + 10][96] = '|';
	x[20 + 10][96] = '|';
	x[20 + 10][97] = '>';

	x[42][4] = '|';
	x[41][4] = '|';
	x[41][5] = '>';

	for (int i = 95; i < 100; i++)
	{
		x[rLad + 10][i] = (220);
	}
	for (int i = 90; i < 95; i++)
	{
		x[rLad + 12][i] = (220);
	}
	for (int i = 85; i < 90; i++)
	{
		x[rLad + 14][i] = (220);
	}
	for (int i = 80; i < 85; i++)
	{
		x[rLad + 16][i] = (220);
	}
	for (int i = 75; i < 80; i++)
	{
		x[rLad + 18][i] = (220);
	}
	for (int i = 70; i < 75; i++)
	{
		x[rLad + 20][i] = (220);
	}

	x[3][145] = '_';
	x[3][146] = '_';
	x[3][147] = '_';
	x[3][148] = '_';
	x[3][149] = '_';

	x[3][146] = '|';
	x[2][146] = '|';
	x[2][147] = '>';


	x[42][140] = (178);
	x[42][139] = (178);
	x[43][139] = (178);
	x[43][140] = (178);


}

//---------------------------
void CheckCaptured(char x[][150], int& rH, int& cH)
{
	int i = 10;
	if (rH == 22 && cH == 100)
	{
		x[4][i] = '>';
		i++;
	}
}




// Hero`s Arrow
void drawarrow(char x[][150], int br, int bc, int rh, int ch)
{

	x[br][bc + 4] = '>';

	x[br][bc + 3] = '-';

}
//Moving of hero`s arrow
void movearrow(char x[][150], int& br, int& bc, int& rh, int& ch, int& bllflg, int& c1, int& c2, int& c3, int& c4, int& c5, int& c6, int& c7, int& c8, int& c9, int& c10, int& c11)
{
	//Arrow movement
	if (x[br][bc + 2] == ' ')
	{
		bc += 3;
	}
	//detecting enemies harm
	for (int r = 11; r < 14; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c1 = 1;

			}

		}

	}
	for (int r = 14; r < 17; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c2 = 1;

			}

		}

	}
	for (int r = 17; r < 20; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c3 = 1;

			}

		}

	}
	for (int r = 20; r < 23; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c4 = 1;

			}

		}

	}
	for (int r = 23; r < 26; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c5 = 1;

			}

		}

	}
	for (int r = 26; r < 29; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c6 = 1;

			}

		}

	}
	for (int r = 29; r < 32; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c7 = 1;

			}

		}

	}
	for (int r = 32; r < 35; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c8 = 1;

			}

		}

	}
	for (int r = 35; r < 38; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c9 = 1;

			}

		}

	}
	for (int r = 38; r < 41; r++)
	{

		for (int c = 142; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c10 = 1;

			}

		}

	}
	for (int r = 41; r < 45; r++)
	{

		for (int c = 141; c < 146; c++)
		{

			if (x[r][c] == '>')
			{

				c11 == 1;

			}

		}

	}
	if (x[br][bc + 2] != ' ')
	{

		bc = ch + 5;

		br = rh + 1;

		bllflg = 0;

	}

}

void Filling(char X[][150], int count, int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int c10, int c11)
{
	// Desgn all static Objects
	int r, c;
	// clearing first half of the page
	for (r = 1; r < 44; r++)
	{

		for (c = 1; c < 149; c++)
		{

			X[r][c] = ' ';

			X[44][149] = ' ';

			X[44][0] = ' ';

		}

	}
	// clearing second half of the page
	for (r = 11; r < 45; r++)
	{

		for (c = 1; c < 149; c++)
		{

			X[r][c] = ' ';

			X[44][149] = ' ';

			X[44][0] = ' ';

		}

	}
	//Filling the enemies
	for (int i = 11; i < 41; i += 3)
	{

		X[i][144] = (153);

		X[i + 1][144] = (219);

		X[i + 1][144 - 1] = (217);

		X[i + 1][144 + 1] = (192);

		X[i + 2][144 - 1] = '/';

		X[i + 2][144 + 1] = '\\';

		X[i + 1][144 - 2] = (155);

	}
	//clearing dead enemies
	if (c1 == 1)
	{
		for (int r = 11; r < 14; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	if (c2 == 1)
	{
		for (int r = 14; r < 17; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	if (c3 == 1)
	{
		for (int r = 17; r < 20; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	if (c4 == 1)
	{

		for (int r = 20; r < 23; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	if (c5 == 1)
	{

		for (int r = 23; r < 26; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	if (c6 == 1)
	{

		for (int r = 26; r < 29; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	if (c7 == 1)
	{

		for (int r = 29; r < 32; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	if (c8 == 1)
	{

		for (int r = 32; r < 35; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	if (c9 == 1)
	{

		for (int r = 35; r < 38; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';
			}

		}

	}
	if (c10 == 1)
	{

		for (int r = 38; r < 41; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';
			}

		}

	}
	if (c11 == 1)
	{

		for (int r = 41; r < 44; r++)
		{

			for (int c = 142; c < 146; c++)
			{

				X[r][c] = ' ';

			}

		}

	}
	for (int r = 24; r < 31; r++)
	{

		X[r][10] = (219);

	}
	//The pyramids
	for (int c = 109; c <= 126; c++)
	{
		X[9][c] = (178);
	}
	for (int c = 127; c <= 139; c++)
	{
		X[9][c] = (177);
	}
	for (int c = 140; c <= 147; c++)
	{
		X[9][c] = (176);
	}
	for (int c = 110; c <= 125; c++)
	{
		X[8][c] = (178);
	}
	for (int c = 126; c <= 138; c++)
	{
		X[8][c] = (177);
	}
	for (int c = 139; c <= 146; c++)
	{
		X[8][c] = (176);
	}
	for (int c = 111; c <= 124; c++)
	{
		X[7][c] = (178);
	}
	for (int c = 127; c <= 137; c++)
	{
		X[7][c] = (177);
	}
	for (int c = 139; c <= 145; c++)
	{
		X[7][c] = (176);
	}
	for (int c = 112; c <= 123; c++)
	{
		X[6][c] = (178);
	}
	for (int c = 128; c <= 136; c++)
	{
		X[6][c] = (177);
	}
	for (int c = 140; c <= 144; c++)
	{
		X[6][c] = (176);
	}
	for (int c = 113; c <= 122; c++)
	{
		X[5][c] = (178);
	}
	for (int c = 129; c <= 135; c++)
	{
		X[5][c] = (177);
	}
	for (int c = 141; c <= 143; c++)
	{
		X[5][c] = (176);
	}
	for (int c = 114; c <= 121; c++)
	{
		X[4][c] = (178);
	}
	for (int c = 130; c <= 134; c++)
	{
		X[4][c] = (177);
	}
	for (int c = 142; c <= 142; c++)
	{
		X[4][c] = (176);
	}
	for (int c = 115; c <= 120; c++)
	{
		X[3][c] = (178);
	}
	for (int c = 131; c <= 133; c++)
	{
		X[3][c] = (177);
	}
	for (int c = 116; c <= 119; c++)
	{
		X[2][c] = (178);
	}
	for (int c = 132; c <= 132; c++)
	{
		X[2][c] = (177);
	}
	for (int c = 117; c <= 118; c++)
	{
		X[1][c] = (178);
	}
	//Full Health
	if (count == 0)
	{
		X[8][3] = 'H';
		X[8][4] = 'E';
		X[8][5] = 'A';
		X[8][6] = 'L';
		X[8][7] = 'T';
		X[8][8] = 'H';
		X[8][9] = ' ';
		X[9][10] = (178);
		X[9][11] = (178);
		X[9][12] = (178);
		X[9][13] = (178);
		X[9][14] = (178);
		X[9][15] = (178);
		X[9][16] = (178);
		X[9][17] = (178);
		X[9][18] = (178);
		X[9][19] = (178);
		X[9][20] = (178);
		X[9][21] = (178);
		X[9][22] = (178);
		X[9][23] = (178);
		X[9][24] = (178);
		X[9][25] = (178);
		X[9][26] = (178);
		X[9][27] = (178);
		X[9][28] = (178);
		X[9][29] = (178);
		X[9][30] = (178);
		X[9][31] = (178);
		X[9][32] = (178);
		X[9][33] = (178);
		X[9][34] = (178);
		X[9][35] = (178);
		X[8][10] = (178);
		X[8][11] = (178);
		X[8][12] = (178);
		X[8][13] = (178);
		X[8][14] = (178);
		X[8][15] = (178);
		X[8][16] = (178);
		X[8][17] = (178);
		X[8][18] = (178);
		X[8][19] = (178);
		X[8][20] = (178);
		X[8][21] = (178);
		X[8][22] = (178);
		X[8][23] = (178);
		X[8][24] = (178);
		X[8][25] = (178);
		X[8][26] = (178);
		X[8][27] = (178);
		X[8][28] = (178);
		X[8][29] = (178);
		X[8][30] = (178);
		X[8][31] = (178);
		X[8][32] = (178);
		X[8][33] = (178);
		X[8][34] = (178);
		X[8][35] = (178);
	}
	// -1 from Health
	if (count == 1)
	{
		X[8][3] = 'H';
		X[8][4] = 'E';
		X[8][5] = 'A';
		X[8][6] = 'L';
		X[8][7] = 'T';
		X[8][8] = 'H';
		X[8][9] = ' ';
		X[9][10] = (178);
		X[9][11] = (178);
		X[9][12] = (178);
		X[9][13] = (178);
		X[9][14] = (178);
		X[9][15] = (178);
		X[9][16] = (178);
		X[9][17] = (178);
		X[9][18] = (178);
		X[9][19] = (178);
		X[9][20] = (178);
		X[9][21] = (178);
		X[9][22] = (178);
		X[9][23] = (178);
		X[9][24] = (178);
		X[9][25] = (178);
		X[9][26] = (178);
		X[9][27] = (178);
		X[8][10] = (178);
		X[8][11] = (178);
		X[8][12] = (178);
		X[8][13] = (178);
		X[8][14] = (178);
		X[8][15] = (178);
		X[8][16] = (178);
		X[8][17] = (178);
		X[8][18] = (178);
		X[8][19] = (178);
		X[8][20] = (178);
		X[8][21] = (178);
		X[8][22] = (178);
		X[8][23] = (178);
		X[8][24] = (178);
		X[8][25] = (178);
		X[8][26] = (178);
		X[8][27] = (178);
	}
	// -2 from Health
	if (count == 2)
	{
		X[8][3] = 'H';
		X[8][4] = 'E';
		X[8][5] = 'A';
		X[8][6] = 'L';
		X[8][7] = 'T';
		X[8][8] = 'H';
		X[8][9] = ' ';
		X[9][10] = (178);
		X[9][11] = (178);
		X[9][12] = (178);
		X[9][13] = (178);
		X[9][14] = (178);
		X[9][15] = (178);
		X[9][16] = (178);
		X[9][17] = (178);
		X[9][18] = (178);
		X[9][19] = (178);
		X[9][20] = (178);
		X[9][21] = (178);
		X[8][10] = (178);
		X[8][11] = (178);
		X[8][12] = (178);
		X[8][13] = (178);
		X[8][14] = (178);
		X[8][15] = (178);
		X[8][16] = (178);
		X[8][17] = (178);
		X[8][18] = (178);
		X[8][19] = (178);
		X[8][20] = (178);
		X[8][21] = (178);
	}
	// -3 from Health
	if (count == 3)
	{
		X[8][3] = 'H';
		X[8][4] = 'E';
		X[8][5] = 'A';
		X[8][6] = 'L';
		X[8][7] = 'T';
		X[8][8] = 'H';
		X[8][9] = ' ';
		X[9][10] = (178);
		X[9][11] = (178);
		X[9][12] = (178);
		X[9][13] = (178);
		X[9][14] = (178);
		X[9][15] = (178);
		X[8][10] = (178);
		X[8][11] = (178);
		X[8][12] = (178);
		X[8][13] = (178);
		X[8][14] = (178);
		X[8][15] = (178);
	}
	// Don`t have any health
	if (count == 4)
	{
		X[8][3] = 'H';
		X[8][4] = 'E';
		X[8][5] = 'A';
		X[8][6] = 'L';
		X[8][7] = 'T';
		X[8][8] = 'H';
		X[8][9] = ' ';
	}
	// stage two word .
	//SSSSS
	X[1][3] = (254); X[1][4] = (254); X[1][5] = (254); X[1][6] = (254); X[2][3] = (219); X[3][3] = (254); X[3][4] = (254); X[3][5] = (254); X[3][6] = (254); X[4][6] = (219); X[5][6] = (254); X[5][5] = (254); X[5][4] = (254); X[5][3] = (254);
	//TTT
	X[1][8] = (254); X[1][9] = (254); X[1][10] = (254); X[1][11] = (254); X[1][12] = (254); X[2][10] = (219); X[3][10] = (219); X[4][10] = (219); X[5][10] = (219);
	//AAA
	X[1][14] = (254); X[1][15] = (254); X[1][16] = (254);	X[1][17] = (254); X[1][18] = (254); X[2][14] = (219); X[2][18] = (219); X[3][14] = (219); X[3][15] = (254); X[3][16] = (254); X[3][17] = (254); X[3][18] = (219); X[4][14] = (219); X[4][18] = (219); X[5][14] = (219); X[5][18] = (219);
	//GGG
	X[1][20] = (254); X[1][21] = (254); X[1][22] = (254); X[1][23] = (254); X[1][24] = (254); X[2][20] = (219); X[3][20] = (219); X[4][20] = (219); X[5][20] = (254); X[5][21] = (254); X[5][22] = (254); X[5][23] = (254); X[5][24] = (254); X[4][24] = (219); X[3][24] = (254); X[3][23] = (254);
	//EEE
	X[1][26] = (254); X[2][26] = (219); X[4][26] = (219); X[1][27] = (254); X[1][28] = (254); X[1][29] = (254); X[1][30] = (254); X[3][26] = (254); X[3][27] = (254); X[3][28] = (254); X[3][29] = (254); X[3][30] = (254); X[5][26] = (254); X[5][27] = (254); X[5][28] = (254); X[5][29] = (254); X[5][30] = (254);
	//222
	X[1][33] = (254); X[2][33] = (254); X[1][34] = (254); X[1][35] = (254); X[1][36] = (254); X[1][37] = (254); X[2][37] = (219); X[3][36] = (254); X[3][35] = (254); X[4][33] = (219); X[5][33] = (254); X[5][34] = (254); X[5][35] = (254); X[5][36] = (254); X[5][37] = (254);

	for (c = 1; c < 149; c++)
	{

		// The first horizontal border __ 
		X[0][c] = (223);
		// The last horizontal border __ 
		X[44][c] = (223);

	}
	for (c = 1; c < 149; c++)
	{

		// The second horizontal border __ 
		X[10][c] = (223);

	}
	for (r = 0; r < 44; r += 2)
	{
		// The first shape in first vertical border  |
		X[r][0] = (201);
		// The first shape in last vertical border  |
		X[r][149] = (187);
	}
	for (r = 1; r < 44; r += 2)
	{
		// The second shape infirst vertical border  |
		X[r][0] = (200);
		// The second shape in last vertical border  |
		X[r][149] = (188);
	}
	for (r = 0; r < 44; r++)
	{
		// The second vertical border  |
		X[r][1] = (219);
		// The third vertical border  |
		X[r][148] = (219);
	}
	//The stage 2 word border
	for (int r = 0; r < 8; r++)
	{

		X[r][39] = (219);

	}
	for (int c = 2; c < 40; c++)
	{

		X[7][c] = (223);

	}
	//The sentence in the upper middle of the page 
	X[1][50] = 'H';
	X[1][51] = 'A';
	X[1][52] = 'H';
	X[1][53] = 'A';
	X[1][54] = 'H';
	X[1][55] = 'A';
	X[1][56] = ' ';
	X[1][57] = '!';
	X[1][58] = '!';
	X[1][59] = ' ';
	X[1][60] = 'I';
	X[1][61] = 'T';
	X[1][62] = '`';
	X[1][63] = 'S';
	X[1][64] = ' ';
	X[1][65] = 'J';
	X[1][66] = 'U';
	X[1][67] = 'S';
	X[1][68] = 'T';
	X[1][69] = ' ';
	X[1][70] = 'T';
	X[1][71] = 'H';
	X[1][72] = 'E';
	X[1][73] = ' ';
	X[1][74] = 'B';
	X[1][75] = 'E';
	X[1][76] = 'G';
	X[1][77] = 'I';
	X[1][78] = 'N';
	X[1][79] = 'I';
	X[1][80] = 'N';
	X[1][81] = 'G';
	X[1][82] = ' ';
	X[1][83] = 'Y';
	X[1][84] = 'O';
	X[1][85] = 'U';
	X[1][86] = ' ';
	X[1][87] = 'W';
	X[1][88] = 'I';
	X[1][89] = 'L';
	X[1][90] = 'L';
	X[1][91] = ' ';
	X[1][92] = 'N';
	X[1][93] = 'O';
	X[1][94] = 'T';
	X[1][95] = ' ';
	X[2][50] = 'P';
	X[2][51] = 'A';
	X[2][52] = 'S';
	X[2][53] = 'S';
	X[2][54] = ' ';
	X[2][55] = 'T';
	X[2][56] = 'H';
	X[2][57] = 'I';
	X[2][58] = 'S';
	X[2][59] = ' ';
	X[2][60] = 'S';
	X[2][61] = 'T';
	X[2][62] = 'A';
	X[2][63] = 'G';
	X[2][64] = 'E';
	X[2][65] = ' ';
	X[2][66] = 'U';
	X[2][67] = 'N';
	X[2][68] = 'L';
	X[2][69] = 'E';
	X[2][70] = 'S';
	X[2][71] = 'S';
	X[2][72] = ' ';
	X[2][73] = 'Y';
	X[2][74] = 'O';
	X[2][75] = 'U';
	X[2][76] = ' ';
	X[2][77] = 'K';
	X[2][78] = 'I';
	X[2][79] = 'L';
	X[2][80] = 'L';
	X[2][81] = ' ';
	X[2][82] = 'A';
	X[2][83] = 'L';
	X[2][84] = 'L';
	X[2][85] = ' ';
	X[2][86] = 'O';
	X[2][87] = 'F';
	X[2][88] = ' ';
	X[2][89] = 'M';
	X[2][90] = 'Y';
	X[2][91] = ' ';
	X[2][92] = 'A';
	X[2][93] = 'R';
	X[2][94] = 'M';
	X[2][95] = 'Y';
	X[3][50] = '!';
	X[3][51] = '!';
	X[3][52] = ' ';
	X[3][53] = 'W';
	X[3][54] = 'E';
	X[3][55] = 'A';
	X[3][56] = 'K';
	X[3][57] = ' ';
	X[3][58] = 'B';
	X[3][59] = 'O';
	X[3][60] = 'Y';
	X[3][61] = ' ';
	X[3][62] = '!';
	X[3][63] = '!';

	X[7][50] = 'P';
	X[7][51] = 'R';
	X[7][52] = 'E';
	X[7][53] = 'S';
	X[7][54] = 'S';
	X[7][55] = ' ';
	X[7][56] = 'S';
	X[7][57] = 'P';
	X[7][58] = 'A';
	X[7][59] = 'C';
	X[7][60] = 'E';
	X[7][61] = ' ';
	X[7][62] = 'T';
	X[7][63] = 'O';
	X[7][64] = ' ';
	X[7][65] = 'S';
	X[7][66] = 'H';
	X[7][67] = 'O';
	X[7][68] = 'O';
	X[7][69] = 'T';


}
//Filling hero body
void Herobody(char X[][150], int rH, int cH)
{

	X[rH][cH] = (149);
	X[rH + 1][cH] = (219);
	X[rH + 1][cH - 1] = (217);
	X[rH + 1][cH + 1] = (192);
	X[rH + 2][cH - 1] = '/';
	X[rH + 2][cH + 1] = '\\';
	X[rH + 1][cH + 2] = 'D';

}
//Filling enemies arrows and hero damage count
void Fillenemyarrow(char X[][150], int rE, int cE, int& count, int& rH, int& cH)
{

	// Enemy arrows
	X[rE][cE] = (174);
	for (int i = 1; i < 4; i++)
	{

		X[rE][cE + i] = '-';

	}
	//Hero damage count 
	if (rE == rH && cE + 2 == cH)
	{

		count++;

	}
	if (rE == rH + 2 && cE + 2 == cH)
	{

		count++;

	}
	if (rE == rH + 1 && cE + 2 == cH)
	{

		count++;

	}
	if (rE == rH && cE == cH)
	{

		count++;

	}
	if (rE == rH + 2 && cE == cH)
	{

		count++;

	}
	if (rE == rH + 1 && cE == cH)
	{

		count++;

	}
	if (rE == rH && cE + 1 == cH)
	{

		count++;

	}
	if (rE == rH + 2 && cE + 1 == cH)
	{

		count++;

	}
	if (rE == rH + 1 && cE + 1 == cH)
	{

		count++;

	}

}
//Moving enemyies arrows
void MoveenemyarrowPosition(int& rE, int& cE, int& count, int& rH, int& cH)
{

	if (cE > 2)
	{

		// Speed of the arows or enemies if you want to speed up add cE--
		cE--;
		cE--;
		cE--;
		cE--;
		cE--;

		if (rE < 31 && rE > 23 && cE < 10)
		{

			cE = 135;

		}

	}
	if (cE <= 3)
	{

		cE = 135;

	}

}
//Hero moves
void Movinghero(int& rH, int& cH, char Q)
{

	if (rH < 40)
	{

		//moving downward
		if (Q == 's')
		{

			if (rH < 29 && rH > 19 && (cH == 10 || cH == 11 || cH == 8 || cH == 9))
			{

			}

			else
			{

				// The speed of moving down for hero if you want to speed up add rH++
				rH++;
				rH++;

			}

		}

	}
	if (cH > 3)
	{

		//moving left
		if (Q == 'a')
		{

			if (rH < 32 && rH > 22 && cH > 11 && cH < 13)
			{

			}

			else
			{

				// The speed of moving left for hero if you want to speed up add cH--
				cH--;

			}

		}

	}
	if (rH > 12)
	{

		//moving upward
		if (Q == 'w')
		{

			if (rH < 33 && rH > 22 && (cH == 10 || cH == 11 || cH == 8 || cH == 9))
			{

			}
			else
			{

				// The speed of moving up for hero if you want to speed up add rH--
				rH--;
				rH--;

			}

		}

	}

	if (cH < 145)
	{

		if (Q == 'd')
		{

			//moving right
			if (rH < 32 && rH > 20 && cH > 6 && cH < 9)
			{

			}
			else
			{

				// The speed of moving right for hero if you want to speed up add cH++
				cH++;

			}

		}

	}

}

void Disp2(char X[][150])
{
	system("cls");
	int r, c;
	for (r = 0; r < 45; r++)
	{

		for (c = 0; c < 150; c++)
		{

			cout << X[r][c];

		}

	}

}

int main()
{
	char x[45][150];
	Menu();

	int count4h = 0;
	int count4p = 0;
	int count4Remove = 0;
	int parcount = 0;
	int Jumpcoun = 0;



	int rP = 0, cP = 3;

	int rH = 4, cH = 15;

	int rmE = 10, cmE = 50;

	int rbE = 32, cbE = 0;

	int rLad = 22; int cLad = 100;

	int DropEgg = 5;

	int WinFlag = 0;

	for (;;)
	{


		// if player ! hit keyboard then ..
		for (; !_kbhit(); )
		{
			if (WinFlag == 1)
			{
				break;
			}
			Fillx(x);

			FillHeroInX(x, rH, cH, parcount);
			// Check Jump 
			if (Jumpcoun != 0)
			{
				rH++;



				Jumpcoun = 0;
			}
			FillLadder(x, rLad, cLad, rH, cH);
			MovePlanePosition(rP, cP, count4p);
			FillPlaneinX(x, rP, cP, count4Remove);


			FillMidlleEnemy(x, rmE, cmE, DropEgg, rH, cH);
			MoveMidlleEnemy(rmE, cmE);

			FillBigEnemy(x, rbE, cbE);
			MoveBigEnemy(rbE, cbE);

			DropHeroFromPlane(rH, cH, count4h);


			Disp2(x);


		}

		if (WinFlag == 1)
		{
			break;
		}

		char Q;
		Q = _getch();	// cin>>Q;

		MoveHeroPosition(x, rH, cH, Q, Jumpcoun, WinFlag);
		CheckCaptured(x, rH, cH);

		if (WinFlag == 1)
		{
			break;
		}
		if (cH > 138 && cH < 142 && rH > 38)
		{
			break;
		}
	}
	char X[45][150];
	char Q;
	int bllflg = 0;
	int rhero = 26;
	int chero = 5;
	int rh2 = rhero;
	int ch2 = chero;
	int k = 0;
	int rE2 = 12, cE2 = 125;
	int rE3 = 15, cE3 = 110;
	int rE4 = 18, cE4 = 95;
	int rE5 = 21, cE5 = 80;
	int rE6 = 24, cE6 = 65;
	int rE7 = 27, cE7 = 50;
	int rE8 = 30, cE8 = 65;
	int rE9 = 33, cE9 = 80;
	int rE10 = 36, cE10 = 95;
	int rE11 = 39, cE11 = 110;
	int rE12 = 42, cE12 = 125;
	int count = 0;
	int br = 20;
	int bc = 100;
	int tot = 1;
	int  c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0, c11 = 0;

	for (;;)
	{

		for (; !_kbhit();)
		{

			Filling(X, count, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11);


			Herobody(X, rhero, chero);


			if (bllflg == 1)
			{

				drawarrow(X, br, bc, rhero, chero);
				movearrow(X, br, bc, rhero, chero, bllflg, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11);

			}

			if (c1 == 0)
			{

				MoveenemyarrowPosition(rE2, cE2, count, rhero, chero);
				Fillenemyarrow(X, rE2, cE2, count, rhero, chero);

			}

			if (c2 == 0)
			{
				MoveenemyarrowPosition(rE3, cE3, count, rhero, chero);
				Fillenemyarrow(X, rE3, cE3, count, rhero, chero);
			}

			if (c3 == 0)
			{
				MoveenemyarrowPosition(rE4, cE4, count, rhero, chero);
				Fillenemyarrow(X, rE4, cE4, count, rhero, chero);
			}

			if (c4 == 0)
			{
				MoveenemyarrowPosition(rE5, cE5, count, rhero, chero);
				Fillenemyarrow(X, rE5, cE5, count, rhero, chero);
			}

			if (c5 == 0)
			{
				MoveenemyarrowPosition(rE6, cE6, count, rhero, chero);
				Fillenemyarrow(X, rE6, cE6, count, rhero, chero);
			}

			if (c6 == 0)
			{
				MoveenemyarrowPosition(rE7, cE7, count, rhero, chero);
				Fillenemyarrow(X, rE7, cE7, count, rhero, chero);
			}

			if (c7 == 0)
			{
				MoveenemyarrowPosition(rE8, cE8, count, rhero, chero);
				Fillenemyarrow(X, rE8, cE8, count, rhero, chero);
			}

			if (c8 == 0)
			{
				MoveenemyarrowPosition(rE9, cE9, count, rhero, chero);
				Fillenemyarrow(X, rE9, cE9, count, rhero, chero);
			}

			if (c9 == 0)
			{
				MoveenemyarrowPosition(rE10, cE10, count, rhero, chero);
				Fillenemyarrow(X, rE10, cE10, count, rhero, chero);
			}

			if (c10 == 0)
			{
				MoveenemyarrowPosition(rE11, cE11, count, rhero, chero);
				Fillenemyarrow(X, rE11, cE11, count, rhero, chero);
			}




			Disp2(X);

		}

		Q = _getch();	// cin>>Q;
		Movinghero(rhero, chero, Q);
		//For shoting arrow
		if (Q == ' ')
		{

			bllflg = 1;

		}
		//restore enemy stage if hero health finished
		if (count == 4)
		{

			count = 0;
			rhero = 26;
			chero = 5;
			c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0, c11 = 0;

		}
		// moving to next stage if all the army were killed
		if (c1 == 1 && c2 == 1 && c3 == 1 && c4 == 1 && c5 == 1 && c6 == 1 && c7 == 1 && c8 == 1 && c9 == 1 && c10 == 1)
		{

			break;

		}

	}
	int bllflg2 = 0;
	int tott2 = 50;
	int ebsr2 = 42;
	int ebsc2 = 145;
	int ebsr1 = 12;
	int ebsc1 = 88;
	int ebr = 35;
	int ebc = 133;
	int re1 = 11;
	int ce1 = 60;
	int re2 = 42;
	int ce2 = 34;
	int rs1 = 13;
	int cs1 = 2;
	int rs2 = 13;
	int cs2 = 6;
	char z[45][150];
	int rh = 40;
	int ch = 5;
	int sre = 11;
	int sce = 4;
	int i = 0;
	int br2 = 40;
	int bc2 = 7;
	char o;
	for (;;)
	{

		for (; !_kbhit();)
		{

			sttic(z);
			if (z[rh + 3][ch] != char(219))
			{
				rh++;
			}
			if (ch <= 85)
			{
				door(z);
			}

			if (ch >= 86)
			{
				mveb(z, ebr, ebc, ebsr1, ebsc1, ebsr2, ebsc2);
				flleb(z, ebr, ebc, ebsr1, ebsc1, ebsr2, ebsc2);
				ewall(z);
			}
			cout << "boss" << "_" << tott2;
			if (rh + 3 == 26 && ch == 9 || rh + 3 == 26 && ch == 8 || rh + 3 == 26 && ch == 7 || rh + 3 == 26 && ch == 6 || rh + 3 == 26 && ch == 10)
			{
				rh -= 10;
			}

			if (i % 2 == 0)//////////heroshape
			{
				FllHro1(z, rh, ch);
			}

			else
			{
				hroan(z, rh, ch);
			}//////////////////////////heroshape
			if (bllflg2 == 1)
			{

				drawbll(z, br2, bc2, rh, ch, tott2);
				movbll(z, br2, bc2, rh, ch, tott2, bllflg2);

			}
			fle1(z, sre, sce, rs1, cs1, rs2, cs2);
			mve1(z, sre, sce, rs1, cs1, rs2, cs2);
			fle2(z, re2, ce2);
			mve2(z, re2, ce2);
			spikedrop(z, re1, ce1);
			spikedropmove(z, re1, ce1);

			if (z[rh - 1][ch] == '#' || z[rh][ch + 1] == '#' || z[rh][ch - 1] == '#')
			{
				rh = 40;
				ch = 5;
			}
			if (z[rh - 2][ch] == '\\' || z[rh - 2][ch] == '/' || z[rh - 2][ch - 1] == '\\' || z[rh - 2][ch - 1] == '/' || z[rh - 2][ch + 1] == '\\' || z[rh - 2][ch + 1] == '/')
			{
				rh = 40;
				ch = 5;
			}
			if (z[rh - 1][ch] == 'X' || z[rh][ch + 1] == 'X' || z[rh][ch - 1] == 'X')
			{
				rh = 40;
				ch = 5;
			}
			if (z[rh + 2][ch + 2] == '<' || z[rh + 2][ch + 3] == '<' || z[rh + 2][ch + 1] == '<' || z[rh + 2][ch - 2] == '>' || z[rh + 2][ch - 3] == '>' || z[rh + 2][ch - 1] == '>')
			{
				rh = 40;
				ch = 5;
			}
			if (z[rh + 3][ch] == ' ' || z[rh + 2][ch] == ' ')
			{
				rh = 40;
				ch = 5;
			}

			Disp(z);

		}
		i++;
		if (tott2 == 0)
		{
			break;
		}

		o = _getch();
		MovHro1(z, rh, ch, o);

		if (o == ' ')
		{
			bllflg2 = 1;
		}


	}
}