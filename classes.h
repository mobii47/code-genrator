#pragma once
#include "graphics.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>                     // Provides exit
#include <ctype.h>   
#include<math.h>
#include<cmath>
using namespace std;
class point {
public:
	int x, y;
	void setx(int a) {
		x = a;
	}
	void sety(int a) {
		y = a;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}

};
class shape :public point {
public:
	virtual void draw(int) = 0;
	virtual void setc(int) = 0;
	//virtual void getpoint() = 0;
	//virtual void getpointer() = 0;
};
class li :public shape {
public:
	int x1, y1, x2, y2;
	int border = 0;
	void draw(int boder_colour) {
			setcolor(boder_colour);
			do {
				getmouseclick(WM_LBUTTONDOWN, x1, y1);
			} while (x1 ==-1 && y1 == -1);
			do {
				getmouseclick(WM_LBUTTONDOWN, x2, y2);
			} while (x2 ==-1 && y2 == -1);
				line(x1, y1, x2, y2);
				clearmouseclick(WM_LBUTTONDOWN);
	}
	void setc(int colour) {
		do {
			getmouseclick(WM_LBUTTONDOWN, x, y);
		} while (x == -1 && y == -1);
		setfillstyle(SOLID_FILL, colour);
		floodfill(x, y, border);
	}
};
class poly : public shape {
public:
	int n = 5;
	int x1, x2, x3,x4, y1, y2, y3,y4;
	int border = 0;
	int colour = 15;
	void draw(int boder_colour) {
			setcolor(boder_colour);
			do {
				getmouseclick(WM_LBUTTONDOWN, x1, y1);
			} while (x1 == -1 && y1 == -1);
			do {
				getmouseclick(WM_LBUTTONDOWN, x2, y2);
			} while (x2 == -1 && y2 == -1);
			do {
				getmouseclick(WM_LBUTTONDOWN, x3, y3);
			} while (x3 == -1 && y3 == -1);
			do {
				getmouseclick(WM_LBUTTONDOWN, x4, y4);
			} while (x4 == -1 && y4 == -1);
			int arr[] = { x1,y1,x2,y2,x3,y3,x4,y4,x1,y1 };
			drawpoly(n, arr);
			int arr1[] = { x1+1,y1+1,x2+1,y2+1,x3+1,y3+1,x4+1,y4+1,x1+1,y1+1};
			drawpoly(n, arr1);
			clearmouseclick(WM_LBUTTONDOWN);
	}
	void setc(int colour) {
		do {
			getmouseclick(WM_LBUTTONDOWN, x, y);
		} while (x == -1 && y == -1);
		setfillstyle(SOLID_FILL, colour);
		floodfill(x, y, border);
	}
};
class rec : public shape {
public:
	int left, top, right, bottom;
	int border = 0;
	void draw(int boder_colour) {
			setcolor(boder_colour);
			do {
				getmouseclick(WM_LBUTTONDOWN, left, top);
			} while (left == -1 && top == -1);
			do {
				getmouseclick(WM_LBUTTONDOWN, right, bottom);
			} while (right == -1 && bottom == -1);
			rectangle(left, top, right, bottom);
			clearmouseclick(WM_LBUTTONDOWN);
	}
	void setc(int colour) {
		do {
			getmouseclick(WM_LBUTTONDOWN, x, y);
		} while (x == -1 && y == -1);
		setfillstyle(SOLID_FILL, colour);
		floodfill(x, y, border);
	}
};
class triangle : public shape {
public:
	int n = 4;
	int border = 0;
	int x1, x2, x3, y1, y2, y3;
	void draw(int boder_colour) {
			setcolor(boder_colour);
			do {
				getmouseclick(WM_LBUTTONDOWN, x1, y1);
			} while (x1 == -1 && y1 == -1);
			do {
				getmouseclick(WM_LBUTTONDOWN, x2, y2);
			} while (x2 == -1 && y2 == -1);
			do {
				getmouseclick(WM_LBUTTONDOWN, x3, y3);
			} while (x3 == -1 && y3 == -1);
			int arr[8] = { x1,y1,x2,y2,x3,y3,x1,y1 };
				drawpoly(n, arr);
				clearmouseclick(WM_LBUTTONDOWN);
	}
	void setc(int colour) {
		do {
			getmouseclick(WM_LBUTTONDOWN, x, y);
		} while (x == -1 && y == -1);
		setfillstyle(SOLID_FILL, colour);
		floodfill(x, y, border);
	}
};
class cir : public shape {
public:
	int x1, y1, x2, y2;
	int border = 0;
	int a, b;
	void draw(int boder_colour) {
			setcolor(boder_colour);
			do {
				getmouseclick(WM_LBUTTONDOWN, x1, y1);
			} while (x1 == -1 && y1 == -1);
			do {
				getmouseclick(WM_LBUTTONDOWN, x2, y2);
			} while (x2 == -1 && y2 == -1);

			a = x2 - x1;
			a *= a;
			b = y2 - y1;
			b *= b;
			int v = sqrt(a + b);
			circle(x1, y1, v);
			circle(x1, y1, v-1);
			clearmouseclick(WM_LBUTTONDOWN);
	}
	void setc(int colour) {
		do {
			getmouseclick(WM_LBUTTONDOWN, x, y);
		} while (x == -1 && y == -1);
		setfillstyle(SOLID_FILL, colour);
		floodfill(x, y, border);
	}
};