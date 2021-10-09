Heart Breaking Kid

#include <stdio.h>
#include <ctype.h>
#include <alloc.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
#include <conio.h>

#define n 25
void start(void);
void end(void);
void rhits(void);
void yhits(void);
void phits(void);
char *msg;
void *ball, *ball1, *ball2, *gun, *bomb[n];

void *rhrt[n], *yhrt[n], *phrt[n];
int rflag[n], yflag[n], pflag[n];
int rx[n], ry[n], yx[n], yy[n], px[n], py[n];
int j, life = 3;
int rin=0, yin=0, pin=0;
unsigned int size,size1,size2,size3,size4;
int count = 0, r = 10, bct=0;
int nohits = 0, i;
int ats = 0;
int xend = 400, yend = 450;
char che = 3, ch;
int flag = 1, x = 5, gx = 4, hitflag[n];
int speed = 1, hity[n], hitx[n];
int x1 = 200, x2 = 377;
int ti=500;
int flag1 = 1, flag2 = 1;
int rhit = 0, yhit = 0, phit = 0;
struct  time t;

void main(void)
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\tc\bgi");

	sprintf(msg,"%c",che);

	setcolor(RED);
	settextstyle(0,0,30);
	outtextxy(getmaxx()/2-130,getmaxy()/2-100,msg);

	setcolor(WHITE);
	settextstyle(0,0,0);
	outtextxy(getmaxx()/2-100,getmaxy()/2-50,"Heart Break Kid Game");
	
	getch();

	cleardevice();

	start();
	for(i=0;i<n;i++)
	{
		hitflag[i] = 0;
		rflag[i] = 0;
		yflag[i] = 0;
		pflag[i] = 0;
	}

	setcolor(RED);
	settextstyle(0,0,2);
	outtextxy(8,10,msg);

	setcolor(12);
	setlinestyle(0,0,THICK_WIDTH);

	rectangle(1,1,xend,getmaxy());
	rectangle(1,1,getmaxx()-1,getmaxy()-1);

	setfillstyle(10,12);
	bar(xend+1,2,getmaxx()-2,100);
	rectangle(xend,100,getmaxx()-1,200);

	line(xend,285,getmaxx(),285);
	line(1,yend,getmaxx(),yend);

	setcolor(RED);
	settextstyle(0,0,2);
	outtextxy(xend+20,200+10,msg);

	setcolor(YELLOW);
	settextstyle(0,0,2);
	outtextxy(xend+110,200+10,msg);

	setcolor(12);
	settextstyle(0,0,2);
	outtextxy(xend+195,200+10,msg);

	setcolor(RED);
	setlinestyle(0,0,NORM_WIDTH);
	circle(r+5,r+5,r);

	setcolor(YELLOW);
	settextstyle(0,0,2);
	outtextxy(203,155,msg);

	setcolor(YELLOW);
	setlinestyle(0,0,NORM_WIDTH);
	circle(r+200,r+150,r);

	setcolor(12);
	settextstyle(0,0,2);
	outtextxy(xend-20,255,msg);

	setcolor(12);
	setlinestyle(0,0,NORM_WIDTH);
	circle(xend-r-3,r+250,r);


	setcolor(11);
	setlinestyle(0,0,THICK_WIDTH);
	line(5,yend-5,20,yend-5);
	line(5,yend-5,13,yend-14);
	line(20,yend-5,13,yend-14);

	size = imagesize(5,5,25,25);
	ball = malloc(size);
	getimage(5,5,25,25,ball);

	size = imagesize(200,150,220,170);
	ball1 = malloc(size);
	getimage(200,150,220,170,ball1);

	size = imagesize(377,250,397,270);
	ball2 = malloc(size);
	getimage(377,250,397,270,ball2);

	size = imagesize(4,yend-4,21,yend-14);
	gun = malloc(size);
	getimage(4,yend-4,21,yend-14,gun);

	setfillstyle(1,12);
	bar(4,yend+3,xend-3,getmaxy()-4);
	setcolor(11);
	settextstyle(0,0,0);
	setcolor(12);
	settextstyle(4,0,2);
	outtextxy(xend+25,20,"HEART BREAK KID");
	outtextxy(xend+50,55,"GAME ZONE");


	settextstyle(0,0,1);
	setcolor(12);

	outtextxy(xend+10,315,"Right Arrow Move Right Side");
	outtextxy(xend+10,345,"Left Arrow Move Left Side");
	outtextxy(xend+10,375,"Up Arrow To Fire The Arrow");
	outtextxy(xend+10,405,"Exit");

	randomize();

	while(1)
	{
		if(life==0)
		{
	delay(1000);
	end();
		}
		gotoxy(52,16);
		printf("%3d",rhit);
		gotoxy(63,16);
		printf("%3d",yhit);
		gotoxy(74,16);
		printf("%3d",phit);
		if(life<0)
		life = 0;
		gotoxy(55,12);
		printf("Speed : %d Lifes : %2d",speed,life);
		gotoxy(55,10);
		printf("Total Points    : %4d",count);
		gotoxy(55,8);
		printf("No Of Attempts  : %4d",ats);
		if(random(200-speed*10)==150-speed*5)
		rhits();
		if(random(200-speed*10)==77-speed*5)
		phits();
		if(random(200-speed*10)==111-speed*5)
		yhits();
		if(kbhit())
		{
	ch = getch();
	if(ch==0)
	{
		ch = getch();
		putimage(gx,yend-14,gun,XOR_PUT);

		if(ch==75)
		{
	if(gx>=15)
	gx -= 15;
		}
		else if(ch==77)
		{
	if(gx<=xend-25)
	gx += 15;
		}
		putimage(gx,yend-14,gun,XOR_PUT);
		if(ch==72&&life>0)
		{
	ats += 1;
	int remflag = 0;
	for(i=0;i<n;i++)
	{
		if(hitflag[i]>1)
		{
	hitflag[i]= 1;
	remflag = 1;
	hitx[i] = gx + 8 - 3;
	hity[i] = yend - 14 - 15;
	putimage(hitx[i],hity[i],bomb[i],XOR_PUT);
	break;
		}
	}
	if(remflag==0)
	{
		for(i=0;i<n;i++)
		if(hitflag[i]==0)
		{
	bct = i;
	nohits = i;
	break;
		}
		hitflag[bct] = 1;
		setcolor(10);
		setlinestyle(0,0,NORM_WIDTH);

		line(gx+8,yend-15,gx+8,yend-14-15);
		line(gx+8,yend-14-15,gx+5,yend-14-10);
		line(gx+8,yend-14-15,gx+11,yend-14-10);

		size1 = imagesize(gx+8-3,yend-15,gx+8+3,yend-14-15);
		bomb[bct] = malloc(size1);
		getimage(gx+8-3,yend-15,gx+8+3,yend-14-15,bomb[bct]);

		hitx[bct] = gx + 8 - 3;
		hity[bct] = yend - 14 - 15;
	}
		}
	}
	if(tolower(ch)=='e')
	{
		end();
	}
		}
		for(i=0;i<n;i++)
		if(hitflag[i]==1)
		{
	putimage(hitx[i],hity[i],bomb[i],XOR_PUT);
	hity[i] = hity[i] - 8;

	if(hitx[i]>=x&&hitx[i]<=x+20&&hity[i]>=5&&hity[i]<=25)
	{
		rhits();
		count += 3;
		rhit += 1;
		hitflag[i] = 2;
	}

	if(hitx[i]>=x1&&hitx[i]<=x1+20&&hity[i]>=150&&hity[i]<=170)
	{
		yhits();
		count += 2;
		yhit+=1;
		hitflag[i] = 2;
	}

	if(hitx[i]>=x2&&hitx[i]<=x2+20&&hity[i]>=250&&hity[i]<=270)
	{
		phits();
		count += 1;
		phit+=1;
		hitflag[i] = 2;
	}

	if(hity[i]<=2)
	{
		hitflag[i] = 2;
	}

	if(hitflag[i]==1)
	{
		putimage(hitx[i],hity[i],bomb[i],XOR_PUT);
	}
		}
		if(ti>=500)
		{
	gettime(&t);
	sprintf(msg,"   Current Time:%2d:%02d:%02d",t.ti_hour, t.ti_min,
t.ti_sec);

	setfillstyle(1,12);
	bar(xend+3,yend+3,getmaxx()-4,getmaxy()-4);
	setcolor(BLACK);
	settextstyle(0,0,0);

	outtextxy(xend+15,yend+10,msg);
	ti = 0;
		}


		putimage(x,5,ball,XOR_PUT);
		putimage(x1,150,ball1,XOR_PUT);
		putimage(x2,250,ball2,XOR_PUT);

		if(flag==1)
	x += speed;
		else
	x -= speed;

		if(x>=xend-23)
		{
	flag = 0;
		}
		if(x<=1)
		{
	flag = 1;
		}
		if(flag1==1)
	x1 += 1+speed;
		else
	x1 -= 1+speed;

		if(x1>=xend-23)
		{
	flag1 = 0;
		}
		if(x1<=1)
		{
	flag1 = 1;
		}
		if(flag2==1)
	x2 += 2+speed;
		else
	x2 -= 2+speed;

		if(x2>=xend-23)
		{
	flag2 = 0;
		}
		if(x2<=1)
		{
	flag2 = 1;
		}

		putimage(x,5,ball,XOR_PUT);
		putimage(x1,150,ball1,XOR_PUT);
		putimage(x2,250,ball2,XOR_PUT);


		for(i=0;i<n;i++)
		if(rflag[i]==1)
		putimage(rx[i],ry[i],rhrt[i],XOR_PUT);

		for(i=0;i<n;i++)
		if(yflag[i]==1)
		putimage(yx[i],yy[i],yhrt[i],XOR_PUT);

		for(i=0;i<n;i++)
		if(pflag[i]==1)
		putimage(px[i],py[i],phrt[i],XOR_PUT);

		for(i=0;i<n;i++)
		{
	if(rflag[i]==1)
	{
		ry[i] += speed+2;
		if(rx[i]>=gx-5&&rx[i]<=gx+20&&ry[i]>=yend-15&&ry[i]<=yend-5)
		{
//	count -= 3;
	rflag[i] = 2;
	life--;
		}
	}
		}

		for(i=0;i<n;i++)
		{
	if(yflag[i]==1)
	{
		yy[i] += speed+1;
		if(yx[i]>=gx-5&&yx[i]<=gx+20&&yy[i]>=yend-15&&yy[i]<=yend-5)
		{
//	count -= 2;
	yflag[i] = 2;
	life--;
		}
	}
		}

		for(i=0;i<n;i++)
		{
	if(pflag[i]==1)
	{
		py[i] += speed;
		if(px[i]>=gx-5&&px[i]<=gx+20&&py[i]>=yend-15&&py[i]<=yend-5)
		{
//	count -= 1;
	pflag[i] = 2;
	life--;
		}
	}
		}

		for(i=0;i<n;i++)
		if(ry[i]>=yend-5)
		{
	rflag[i] = 2;
		}

		for(i=0;i<n;i++)
		if(yy[i]>=yend-5)
		{
	yflag[i] = 2;
		}


		for(i=0;i<n;i++)
		if(py[i]>=yend-5)
		{
	pflag[i] = 2;
		}


		for(i=0;i<n;i++)
		if(rflag[i]==1)
		putimage(rx[i],ry[i],rhrt[i],XOR_PUT);

		for(i=0;i<n;i++)
		if(yflag[i]==1)
		putimage(yx[i],yy[i],yhrt[i],XOR_PUT);

		for(i=0;i<n;i++)
		if(pflag[i]==1)
		putimage(px[i],py[i],phrt[i],XOR_PUT);


		if(count<5) speed = 1;
		if(count>=30)  speed = 2;
		if(count>=60)  speed = 3;
		if(count>=90)  speed = 4;
		if(count>=120)  speed = 5;

		delay(12-speed);
		ti += 12-speed;
	}
}
void end(void)
{
	char m[3];
	sprintf(m,"%c",3);
	clrscr();
	cleardevice();
	restorecrtmode();
	textattr(11);

cprintf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$");
	gotoxy(20,3);
	cprintf("THE SCORE BOARD FOR HEART BREAK KID");
	printf("

");

cprintf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$");
	gotoxy(20,7);
	textattr(11);
	cprintf("TOTAL NUMBER OF FIRE SHOOTED : %d",ats);
	gotoxy(20,9);
	cprintf("TOTAL NUMBER OF POINTS SCORED : %d",count);
	gotoxy(20,11);
	textattr(RED);
	cprintf("TOTAL NUMBER OF HITS TO RED HEART : %d",rhit);
	gotoxy(20,13);
	textattr(YELLOW);
	cprintf("TOTAL NUMBER OF HITS TO YELLOW HEART : %d",yhit);
	gotoxy(20,15);
	textattr(12);
	cprintf("TOTAL NUMBER OF HITS OT PINK HEART : %d",phit);
	printf("

");
	textattr(11);

cprintf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$");
	getch();
/*	int gd=DETECT, gm;
	initgraph(&gd,&gm,"c:\tc\bgi");
	while(!kbhit())
	{
		setcolor(random(getmaxcolor()));
		settextstyle(0,0,1);
		outtextxy(random(getmaxx()),random(getmaxy()),m);
		setcolor(12);
		settextstyle(0,0,2);
		outtextxy(100,250,"THANK YOU FOR PLAYING HBK");
	}
	closegraph();
	restorecrtmode();*/
	exit(0);
}
void start(void)
{
	cleardevice();
	settextstyle(10,0,3);
	setcolor(12);
	outtextxy(150,100,"HEART BREAK KID");
	settextstyle(0,0,2);
	getch();
	cleardevice();
}
void rhits(void)
{
	int rflg = 0;
	for(j=0;j<n;j++)
	{
		if(rflag[j]>1)
		{
	rflag[j] = 1;
	rflg = 1;
	rx[j] = x-1;
	ry[j] = 26;
	putimage(rx[j],ry[j],rhrt[j],XOR_PUT);
	break;
		}
	}
	if(rflg==0)
	{
		rflag[rin] = 1;
		settextstyle(0,0,1);
		setcolor(RED);
		sprintf(msg,"%c",che);
		outtextxy(x,28,msg);
		size2 = imagesize(x-1,28-2,x+8,34);
		rhrt[rin] = malloc(size2);
		getimage(x-1,28-2,x+8,34,rhrt[rin]);
		rx[rin] = x-1;
		ry[rin] = 26;
		for(j=0;j<n;j++)
		if(rflag[j]==0)
		{
	rin = j;
	break;
		}
	}
}
void yhits(void)
{
	int yflg = 0;
	for(j=0;j<n;j++)
	{
		if(yflag[j]>1)
		{
	yflag[j] = 1;
	yflg = 1;
	yx[j] = x1-1;
	yy[j] = 171;
	putimage(yx[j],yy[j],yhrt[j],XOR_PUT);
	break;
		}
	}
	if(yflg==0)
	{
		yflag[yin] = 1;
		settextstyle(0,0,1);
		setcolor(YELLOW);
		sprintf(msg,"%c",che);
		outtextxy(x1,171,msg);
		size3 = imagesize(x1-1,171,x1+8,179);
		yhrt[yin] = malloc(size3);
		getimage(x1-1,171,x1+8,179,yhrt[yin]);
		yx[yin] = x1-1;
		yy[yin] = 171;
		for(j=0;j<n;j++)
		if(yflag[j]==0)
		{
	yin = j;
	break;
		}
	}
}
void phits(void)
{
	int pflg = 0;
	for(j=0;j<n;j++)
	{
		if(pflag[j]>1)
		{
	pflag[j] = 1;
	pflg = 1;
	px[j] = x2-1;
	py[j] = 281;
	putimage(px[j],py[j],phrt[j],XOR_PUT);
	break;
		}
	}
	if(pflg==0)
	{
		pflag[pin] = 1;
		settextstyle(0,0,1);
		setcolor(12);
		sprintf(msg,"%c",che);
		outtextxy(x2,281,msg);
		size4 = imagesize(x2-1,281,x2+8,289);
		phrt[pin] = malloc(size4);
		getimage(x2-1,281,x2+8,289,phrt[pin]);
		px[pin] = x2-1;
		py[pin] = 281;
		for(j=0;j<n;j++)
		if(pflag[j]==0)
		{
	pin = j;
	break;
		}
	}
}
