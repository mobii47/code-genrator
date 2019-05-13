#include "graphics.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>                     // Provides exit
#include <ctype.h> 
#include"classes.h"
using namespace std;
void panel() {
	setfillstyle(1, 15);
	bar3d(0, 0, 150, 888, 0, 0);
	//----------------------------------------------------
	setcolor(0);
	setfillstyle(1, 1);
	bar3d(5, 5, 40, 40, 0, 0);

	setcolor(0);
	setfillstyle(1, 2);
	bar3d(5, 45, 40, 80, 0, 0);


	setcolor(0);
	setfillstyle(1, 3);
	bar3d(5, 85, 40, 120, 0, 0);

	setcolor(0);
	setfillstyle(1, 4);
	bar3d(5, 125, 40, 160, 0, 0);

	setcolor(0);
	setfillstyle(1, 5);
	bar3d(5, 165, 40, 200, 0, 0);

	setcolor(0);
	setfillstyle(1, 6);
	bar3d(5, 205, 40, 240, 0, 0);

	setcolor(0);
	setfillstyle(1, 7);
	bar3d(5, 245, 40, 280, 0, 0);

	setcolor(0);
	setfillstyle(1, 8);
	bar3d(5, 285, 40, 320, 0, 0);

	setcolor(0);
	setfillstyle(1, 9);
	bar3d(45, 5, 80, 40, 0, 0);

	setcolor(0);
	setfillstyle(1, 10);
	bar3d(45, 45, 80, 80, 0, 0);

	setcolor(0);
	setfillstyle(1, 11);
	bar3d(45, 85, 80, 120, 0, 0);

	setcolor(0);
	setfillstyle(1, 12);
	bar3d(45, 125, 80, 160, 0, 0);

	setcolor(0);
	setfillstyle(1, 13);
	bar3d(45, 165, 80, 200, 0, 0);

	setcolor(0);
	setfillstyle(1, 14);
	bar3d(45, 205, 80, 240, 0, 0);

	setcolor(0);
	setfillstyle(1, 15);
	bar3d(45, 245, 80, 280, 0, 0);

	setbkcolor(15);
	outtextxy(20, 330, "Colors");
	//---------------------------------------------
	setcolor(0);
	line(150, 0, 150, 900);
	line(0, 350, 150, 350);

	circle(50, 400, 40);
	line(100, 430, 145, 355);
	line(101, 431, 146, 356);
	rectangle(5, 450, 140, 500);
	int arr1[] = { 18,510,40,510,55,560,5,560,18,510 };
	drawpoly(5, arr1);  //polygon
	int arr2[] = { 100,510,130,560,70,560,100,510 };
	drawpoly(4, arr2); //triangle
	setbkcolor(15);
	outtextxy(50, 580, "Shapes");
	line(0, 600, 150, 600);
	//-------------------------------------------
	bar3d(5, 610, 145, 630, 0, 0);
	setbkcolor(15);
	outtextxy(55, 612, "TEXT");
	bar3d(5, 640, 145, 660, 0, 0);
	setbkcolor(15);
	outtextxy(45, 643, "BUCKET");
	bar3d(5, 670, 145, 690, 0, 0);
	setbkcolor(15);
	outtextxy(55, 672, "SAVE");
	bar3d(5, 700, 145, 720, 0, 0);
	setbkcolor(15);
	outtextxy(55, 703, "LOAD");
	bar3d(5, 730, 145, 750, 0, 0);
	setbkcolor(15);
	outtextxy(45, 732, "PENCIL");
	bar3d(5, 760, 145, 780, 0, 0);
	setbkcolor(15);
	outtextxy(45, 762, "ERASER");
	bar3d(5, 790, 145, 810, 0, 0);
	setbkcolor(15);
	outtextxy(45, 792, "DELETE");
	bar3d(5, 820, 145, 840, 0, 0);
	setbkcolor(15);
	outtextxy(55, 822, "UNDO");
	bar3d(5, 850, 145, 870, 0, 0);
	setbkcolor(15);
	outtextxy(55, 852, "REDO");
}
int main()
{
	initwindow(1200, 900, "My Paint", 0, 0);
	setcolor(0);
	setfillstyle(1, 15);
	bar3d(0, 0, 1200, 900, 0, 0);
	bar3d(0, 0, 1200, 900, 0, 0);
	//----------------------------------------------------
	setcolor(0);
	setfillstyle(1, 1);
	bar3d(5, 5, 40, 40, 0, 0);

	setcolor(0);
	setfillstyle(1, 2);
	bar3d(5, 45, 40, 80, 0, 0);


	setcolor(0);
	setfillstyle(1, 3);
	bar3d(5, 85, 40, 120, 0, 0);

	setcolor(0);
	setfillstyle(1, 4);
	bar3d(5, 125, 40, 160, 0, 0);

	setcolor(0);
	setfillstyle(1, 5);
	bar3d(5, 165, 40, 200, 0, 0);

	setcolor(0);
	setfillstyle(1, 6);
	bar3d(5, 205, 40, 240, 0, 0);

	setcolor(0);
	setfillstyle(1, 7);
	bar3d(5, 245, 40, 280, 0, 0);

	setcolor(0);
	setfillstyle(1, 8);
	bar3d(5, 285, 40, 320, 0, 0);

	setcolor(0);
	setfillstyle(1, 9);
	bar3d(45, 5, 80, 40, 0, 0);

	setcolor(0);
	setfillstyle(1, 10);
	bar3d(45, 45, 80, 80, 0, 0);

	setcolor(0);
	setfillstyle(1, 11);
	bar3d(45, 85, 80, 120, 0, 0);

	setcolor(0);
	setfillstyle(1, 12);
	bar3d(45, 125, 80, 160, 0, 0);

	setcolor(0);
	setfillstyle(1, 13);
	bar3d(45, 165, 80, 200, 0, 0);

	setcolor(0);
	setfillstyle(1, 14);
	bar3d(45, 205, 80, 240, 0, 0);

	setcolor(0);
	setfillstyle(1, 15);
	bar3d(45, 245, 80, 280, 0, 0);

	setbkcolor(15);
	outtextxy(20, 330, "Colors");
	//---------------------------------------------
	setcolor(0);
	line(150, 0, 150, 900);
	line(0, 350, 150, 350);

	circle(50, 400, 40);
	line(100, 430, 145, 355);
	line(101, 431, 146, 356);
	rectangle(5, 450, 140, 500);
	int arr1[] = { 18,510,40,510,55,560,5,560,18,510 };
	drawpoly(5, arr1);  //polygon
	int arr2[] = { 100,510,130,560,70,560,100,510 };
	drawpoly(4, arr2); //triangle
	setbkcolor(15);
	outtextxy(50, 580, "Shapes");
	line(0, 600, 150, 600);
	//-------------------------------------------
	bar3d(5, 610, 145, 630, 0, 0);
	setbkcolor(15);
	outtextxy(55, 612, "TEXT");
	bar3d(5, 640, 145, 660, 0, 0);
	setbkcolor(15);
	outtextxy(45, 643, "BUCKET");
	bar3d(5, 670, 145, 690, 0, 0);
	setbkcolor(15);
	outtextxy(55, 672, "SAVE");
	bar3d(5, 700, 145, 720, 0, 0);
	setbkcolor(15);
	outtextxy(55, 703, "LOAD");
	bar3d(5, 730, 145, 750, 0, 0);
	setbkcolor(15);
	outtextxy(45, 732, "PENCIL");
	bar3d(5, 760, 145, 780, 0, 0);
	setbkcolor(15);
	outtextxy(45, 762, "ERASER");
	bar3d(5, 790, 145, 810, 0, 0);
	setbkcolor(15);
	outtextxy(45, 792, "DELETE");
	bar3d(5, 820, 145, 840, 0, 0);
	setbkcolor(15);
	outtextxy(55, 822, "UNDO");
	bar3d(5, 850, 145, 870, 0, 0);
	setbkcolor(15);
	outtextxy(55, 852, "REDO");

	POINT p;
	int x = 0, y = 0;
	int s_x = 0, s_y = 0;
	int a = 0, b = 0;
	while (!ismouseclick(WM_LBUTTONDOWN)) {
		GetCursorPos(&p);

		cout << p.x - 8 << "," << p.y - 30 << endl;
		system("cls");
	}
	int d = 10;
	triangle t;
	rec r;
	cir c;
	li l;
	poly s;
	shape *sha;
	while (1)
	{
		do {
			while (!ismouseclick(WM_LBUTTONDOWN)) {}
			getmouseclick(WM_LBUTTONDOWN, x, y);
		} while (x == -1 && y == -1);
		if (5 < x && x < 140 && 450 < y && y < 500) {  //draw

			setfillstyle(LINE_FILL, 12);
			floodfill(70, 480, 0);
			sha = &r;
			sha->draw(0);
			//d++;

			panel();
		}
		else if (5 < x&&x < 55 && 510 < y&&y < 560) {
			setfillstyle(LINE_FILL, 12);
			floodfill(30, 530, 0);
			sha = &s;
			sha->draw(0);
			panel();
		}
		else if (1 < x &&x < 90 && 351 < y &&y < 442) {
			setfillstyle(LINE_FILL, 12);
			floodfill(50, 400, 0);
			sha = &c;
			sha->draw(0);
			panel();

		}
		else if (70 < x && x < 134 && 510 < y&&y < 565) {
			setfillstyle(LINE_FILL, 12);
			floodfill(100, 540, 0);
			sha = &t;
			sha->draw(0);

		}
		else if (100 < x && x < 146 && 354 < y&&y < 430) {
			sha = &l;
			sha->draw(0);
			panel();
		}

		else if (5 < x&&x < 145 && 640 < y && y < 660) //bucket
		{
			do {
				while (!ismouseclick(WM_LBUTTONDOWN)) {}
				getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
			} while (s_x == -1 && s_y == -1);
			if (5 < s_x && s_x < 40 && 5 < s_y &&s_y < 40)  //1st colour
			{
				sha = &r;
				sha->setc(1);
				panel();
			}

			else if (5 < s_x && s_x < 40 && 45 < s_y && s_y < 80) //2 colour
			{
				sha = &r;
				sha->setc(2);
				panel();
				panel();
			}
			else if (5 < s_x && s_x < 40 && 85 < s_y && s_y < 120)  //3 colour
			{
				sha = &r;
				sha->setc(3);
				panel();
			}
			else if (5 < s_x && s_x < 40 && 125 < s_y && s_y < 160)  //4 colour
			{
				sha = &r;
				sha->setc(4);
				panel();
			}
			else if (5 < s_x && s_x < 40 && 165 < s_y && s_y < 200)  //5 colour
			{
				sha = &r;
				sha->setc(5);
				panel();
			}
			else if (5 < s_x && s_x < 40 && 205 < s_y && s_y < 240)  //6 colour
			{
				sha = &r;
				sha->setc(6);
				panel();
			}
			else if (5 < s_x && s_x < 40 && 245 < s_y && s_y < 280)  //7 colour
			{
				sha = &r;
				sha->setc(7);
				panel();
			}
			else if (5 < s_x && s_x < 40 && 285 < s_y && s_y < 320)  //8 colour
			{
				sha = &r;
				sha->setc(8);
				panel();
			}
			else if (45 < s_x && s_x < 80 && 5 < s_y && s_y < 40)  //9 colour
			{
				sha = &r;
				sha->setc(9);
				panel();
			}
			else if (45 < s_x && s_x < 80 && 45 < s_y && s_y < 80)  //10 colour
			{
				sha = &r;
				sha->setc(10);
				panel();
			}
			else if (45 < s_x && s_x < 80 && 85 < s_y && s_y < 120)  //11 colour
			{
				sha = &r;
				sha->setc(11);
				panel();
			}
			else if (45 < s_x && s_x < 80 && 125 < s_y && s_y < 160)  //12 colour
			{
				sha = &r;
				sha->setc(12);
				panel();
			}
			else if (45 < s_x && s_x < 80 && 165 < s_y && s_y < 200)  //13 colour
			{
				sha = &r;
				sha->setc(13);
				panel();
			}
			else if (45 < s_x && s_x < 80 && 205 < s_y && s_y < 240)  //14 colour
			{
				sha = &r;
				sha->setc(14);
				panel();
			}
			else if (45 < s_x && s_x < 80 && 245 < s_y && s_y < 280)  //15 colour
			{
				sha = &r;
				sha->setc(15);
				panel();
			}
		}
		else if (5 < x && x < 145 && 670 < y && y < 690) {
			writeimagefile("my_paint", 0, 0, 1200, 900);
			setbkcolor(15);
			settextjustify(1, 1);
			outtextxy(1026, 850, "File Saved!");
			delay(1000);
			readimagefile("my_paint", 0, 0, 1200, 900);
		}
		else if (5 < x && x < 145 && 700 < y && y < 720) {
			setbkcolor(15);
			settextjustify(2, 2);
			outtextxy(1026, 850, "loading!");
			delay(1000);
			readimagefile("my_paint", 0, 0, 1200, 900);

		}
		else if (5 < x && x < 145 && 610 < y && y < 630) {
			do {
				while (!ismouseclick(WM_LBUTTONDOWN)) {}
				getmouseclick(WM_LBUTTONDOWN, s_x, s_y);

			} while (s_x == -1 && s_y == -1);
			cout << "TEXT S_X: " << s_x << " S_Y: " << s_y << endl;
			string cptr= "";
			char c=' ';
			setcolor(0);

			while (c != '.') {
				c = getch();
				cptr += c;
				bgiout << cptr;
				outstreamxy(s_x, s_y);
			}
		}
		else if (5 < x && x < 145 && 730 < y && y < 750) {
		POINT P,E;

		while (!ismouseclick(WM_LBUTTONDOWN));
		while (ismouseclick(WM_LBUTTONDOWN))
		{
			GetCursorPos(&P);
			circle(P.x, P.y, 2);
			floodfill(P.x, P.y, 0);
			floodfill(P.x, P.y, 0);
		}

		 
		}
		else if (5 < x && x < 145 && 760 < y && y < 780) {
		POINT P;

		while (!ismouseclick(WM_LBUTTONDOWN));
		while (ismouseclick(WM_LBUTTONDOWN))
		 {
			GetCursorPos(&P);
			setcolor(15);
			circle(P.x, P.y, 10);

			floodfill(P.x, P.y, 15);
			floodfill(P.x, P.y, 15);
		 }
        }  
		else if (5 < x && x < 145 && 790 < y && y < 810) {
		setcolor(0);
		setfillstyle(1, 15);
		bar3d(0, 0, 1200, 900, 0, 0);
		bar3d(0, 0, 1200, 900, 0, 0);
		//----------------------------------------------------
		setcolor(0);
		setfillstyle(1, 1);
		bar3d(5, 5, 40, 40, 0, 0);

		setcolor(0);
		setfillstyle(1, 2);
		bar3d(5, 45, 40, 80, 0, 0);


		setcolor(0);
		setfillstyle(1, 3);
		bar3d(5, 85, 40, 120, 0, 0);

		setcolor(0);
		setfillstyle(1, 4);
		bar3d(5, 125, 40, 160, 0, 0);

		setcolor(0);
		setfillstyle(1, 5);
		bar3d(5, 165, 40, 200, 0, 0);

		setcolor(0);
		setfillstyle(1, 6);
		bar3d(5, 205, 40, 240, 0, 0);

		setcolor(0);
		setfillstyle(1, 7);
		bar3d(5, 245, 40, 280, 0, 0);

		setcolor(0);
		setfillstyle(1, 8);
		bar3d(5, 285, 40, 320, 0, 0);

		setcolor(0);
		setfillstyle(1, 9);
		bar3d(45, 5, 80, 40, 0, 0);

		setcolor(0);
		setfillstyle(1, 10);
		bar3d(45, 45, 80, 80, 0, 0);

		setcolor(0);
		setfillstyle(1, 11);
		bar3d(45, 85, 80, 120, 0, 0);

		setcolor(0);
		setfillstyle(1, 12);
		bar3d(45, 125, 80, 160, 0, 0);

		setcolor(0);
		setfillstyle(1, 13);
		bar3d(45, 165, 80, 200, 0, 0);

		setcolor(0);
		setfillstyle(1, 14);
		bar3d(45, 205, 80, 240, 0, 0);

		setcolor(0);
		setfillstyle(1, 15);
		bar3d(45, 245, 80, 280, 0, 0);

		setbkcolor(15);
		outtextxy(20, 330, "Colors");
		//---------------------------------------------
		setcolor(0);
		line(150, 0, 150, 900);
		line(0, 350, 150, 350);

		circle(50, 400, 40);
		line(100, 430, 145, 355);
		line(101, 431, 146, 356);
		rectangle(5, 450, 140, 500);
		int arr1[] = { 18,510,40,510,55,560,5,560,18,510 };
		drawpoly(5, arr1);  //polygon
		int arr2[] = { 100,510,130,560,70,560,100,510 };
		drawpoly(4, arr2); //triangle
		setbkcolor(15);
		outtextxy(50, 580, "Shapes");
		line(0, 600, 150, 600);
		//-------------------------------------------
		bar3d(5, 610, 145, 630, 0, 0);
		setbkcolor(15);
		outtextxy(55, 612, "TEXT");
		bar3d(5, 640, 145, 660, 0, 0);
		setbkcolor(15);
		outtextxy(45, 643, "BUCKET");
		bar3d(5, 670, 145, 690, 0, 0);
		setbkcolor(15);
		outtextxy(55, 672, "SAVE");
		bar3d(5, 700, 145, 720, 0, 0);
		setbkcolor(15);
		outtextxy(55, 703, "LOAD");
		bar3d(5, 730, 145, 750, 0, 0);
		setbkcolor(15);
		outtextxy(45, 732, "PENCIL");
		bar3d(5, 760, 145, 780, 0, 0);
		setbkcolor(15);
		outtextxy(45, 762, "ERASER");
		bar3d(5, 790, 145, 810, 0, 0);
		setbkcolor(15);
		outtextxy(45, 792, "DELETE");
		bar3d(5, 820, 145, 840, 0, 0);
		setbkcolor(15);
		outtextxy(55, 822, "UNDO");
		bar3d(5, 850, 145, 870, 0, 0);
		setbkcolor(15);
		outtextxy(55, 852, "REDO");
}

		//else if (5 < x&&x < 145 && 610 < y && y < 650) {  //draw
		//	do {
		//		while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//		getmouseclick(WM_LBUTTONDOWN, a, b);
		//	} while (a == -1 && b == -1);
		//	if (5 < a && a < 40 && 5 < b && b < 40) //1st colour
		//	{
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x && s_x < 140 && 450 < s_y && s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(1);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(1);

		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(1);

		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(1);

		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(1);}}

		//	else if (5 < a && a < 40 && 45 < b && b < 80) {  //2nd colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(2);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(2);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(2);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(2);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(2);
		//		}
		//	}
		//	else if (5 < a && a < 40 && 85 < b && b < 120) {  //3rd colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y && s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(3);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y && s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(3);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(3);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y && s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(3);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y && s_y < 430) {
		//			sha = &l;
		//			sha->draw(3);
		//		}
		//	}
		//	else if (5 < a && a < 40 && 125 < b && b < 160) {  //4th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(4);

		//		}
		//		else if (5 < s_x && s_x < 55 && 510 < s_y && s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(4);
		//		}
		//		else if (1 < s_x && s_x < 90 && 351 < s_y && s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(4);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y && s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(4);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y && s_y < 430) {
		//			sha = &l;
		//			sha->draw(4);
		//		}
		//	}
		//	else if (5 < a && a < 40 && 165 < b && b < 200) {  //5th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(5);

		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(5);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(5);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(5);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(5);
		//		}

		//	}
		//	else if (5 < a && a < 40 && 205 < b && b < 240) {  //6th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(6);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(6);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(6);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(6);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(6);
		//		}
		//	}
		//	else if (5 < a && a < 40 && 245 < b && b < 280) {  //7th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(7);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(7);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(7);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(7);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(7);
		//		}
		//	}
		//	else if (5 < a && a < 40 && 285 < b && b < 320) {  //8th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(8);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(8);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(8);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(8);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(8);
		//		}
		//	}
		//	else if (45 < a && a < 80 && 5 < b && b < 40) {  //9th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(9);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(9);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(9);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(9);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(9);
		//		}
		//	}
		//	else if (45 < a && a < 80 && 45 < b && b < 80) {  //10th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(10);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(10);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(10);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(10);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(10);
		//		}
		//	}
		//	else if (45 < a && a < 80 && 85 < b && b < 120) {  //11th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(11);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(11);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(11);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(11);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(11);
		//		}
		//	}
		//	else if (45 < a && a < 80 && 125 < b && b < 160) {  //12th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(12);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(12);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(12);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(12);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(12);
		//		}
		//	}
		//	else if (45 < a && a < 80 && 165 < b && b < 200) {  //13th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(13);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(13);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(13);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(13);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(13);
		//		}

		//	}
		//	else if (45 < a && a < 80 && 205 < b && b < 240) {  //14th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(14);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(14);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(14);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(14);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(14);
		//		}

		//	}
		//	else if (45 < a && a < 80 && 245 < b && b < 280) {  //15th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(15);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(15);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(15);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(15);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(15);
		//		}

		//	}
		//	else if (45 < a && a < 80 && 285 < b && b < 320) {  //16th colour
		//		do {
		//			while (!ismouseclick(WM_LBUTTONDOWN)) {}
		//			getmouseclick(WM_LBUTTONDOWN, s_x, s_y);
		//		} while (s_x == -1 && s_y == -1);
		//		if (5 < s_x &&s_x < 140 && 450 < s_y&&s_y < 500) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(70, 480, 0);
		//			sha = &r;
		//			sha->draw(16);
		//		}
		//		else if (5 < s_x&&s_x < 55 && 510 < s_y&&s_y < 560) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(30, 530, 0);
		//			sha = &s;
		//			sha->draw(16);
		//		}
		//		else if (1 < s_x &&s_x < 90 && 351 < s_y &&s_y < 442) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(50, 400, 0);
		//			sha = &c;
		//			sha->draw(16);
		//		}
		//		else if (70 < s_x && s_x < 134 && 510 < s_y&&s_y < 565) {
		//			setfillstyle(LINE_FILL, 12);
		//			floodfill(100, 540, 0);
		//			sha = &t;
		//			sha->draw(16);
		//		}
		//		else if (100 < s_x && s_x < 146 && 354 < s_y&&s_y < 430) {
		//			sha = &l;
		//			sha->draw(16);
		//		}

		//	}
		//	clearmouseclick(WM_LBUTTONDOWN);
		//}
		
	}
}