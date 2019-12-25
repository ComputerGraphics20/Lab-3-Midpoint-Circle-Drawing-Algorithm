// Midpoint Circle - Drawing Algorithm
#include<iostream.h>
#include<graphics.h>
#inlcude<conio.h>
void textdisplay();
void midpoint(int, int, int, int);
int main()
{
	int x=150, y=150, r=100;
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C://turboc3//bgi");
	textdisplay();
	midpoint(x,y,r);
	return 0;
}
void textdisplay();
{
	cout<<"\n\t\t\tPROJECT No.: 03\n";
	cout<<"\t\tMidpoint Circle - Drawing Algorithm.\n";
	cout<<"\n\t\t\t\t****SWORNIM KARMA****\n";
	cout<<"\n\t\t\t\tCo-ordianets:\n";
	cout<<"\t\t\t\t\t(x,y)=(150,150)\n";
	cout<<"\t\t\t\t\tradius(r)=100\n";
	getch();
}
void midpoint(int x1, int y1, int r)
{
	int x=0;
	int y=r;
	int p=1-r // initial point set
	void drawcircle(int, int, int ,int);
	while(x<=y)
	{
		x++;
		if(p<0)
			p=p+2*x+1;
		else
		{
			y--;
			p+=1+2*x-2*y;
		}
		drawcircle(x1, y1, x,y);
		closegraph();
	}
	getch();
}
void drawcircle(int x1, int y1, int x, int y)
{
	putpixel(x1+x, y1+y, 7);
	putpixel(x1+y, y1+x, 7);
	putpixel(x1-y, y1+x, 7);
	putpixel(x1-x, y1+y, 7);
	putpixel(x1-x, y1-y, 7);
	putpixel(x1-y, y1-x, 7);
	putpixel(x1+y, y1-x, 7);
	putpixel(x1+x, y1-y, 7);
}
