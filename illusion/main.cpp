#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	initwindow(400,400,"ILLUSION");
	int midx=getmaxx()/2;
	int midy=getmaxy()/2;
	int i=0;
	int page=0;
	while(i<400)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		outtextxy(midx-60,50,"CIRCLE ILLUSION");
		circle(midx,midy,102);
		setfillstyle(SOLID_FILL,RED);
		floodfill(midx,midy,WHITE);
		if(i<100)
		{	circle(midx,midy-100+i,2);
			circle(midx-i,midy,2);
			circle(midx+(50-i)*(1/sqrt(2)),midy-(50-i)*(1/sqrt(2)),2);
			circle(midx+(75-i)*sin(22.5*22/7/180),midy-(75-i)*sin(67.5*22/7/180),2);
			circle(midx+(25-i)*sin(67.5*22/7/180),midy-(25-i)*sin(22.5*22/7/180),2);
			if(i<25)
				circle(midx-(75+i)*sin(22.5*22/7/180),midy-(75+i)*sin(67.5*22/7/180),2);
			else
				circle(midx-(125-i)*sin(22.5*22/7/180),midy-(125-i)*sin(67.5*22/7/180),2);
			if(i<75)
				circle(midx-(25+i)*sin(67.5*22/7/180),midy-(25+i)*sin(22.5*22/7/180),2);
			else
				circle(midx-(175-i)*sin(67.5*22/7/180),midy-(175-i)*sin(22.5*22/7/180),2);
			if(i<50)
			{
				circle(midx-(50+i)*(1/sqrt(2)),midy-(50+i)*(1/sqrt(2)),2);
				circle(midx-(25+i)*sin(67.5*22/7/180),midy-(25+i)*sin(22.5*22/7/180),2);
			}
			else
				circle(midx-(150-i)*(1/sqrt(2)),midy-(150-i)*(1/sqrt(2)),2);
		}
		else if(i<200)
		{
			circle(midx-200+i,midy,2);
			circle(midx,midy-100+i,2);
			circle(midx-(175-i)*sin(67.5*22/7/180),midy-(175-i)*sin(22.5*22/7/180),2);
			circle(midx-(125-i)*sin(22.5*22/7/180),midy-(125-i)*sin(67.5*22/7/180),2);
			if(i<125)
				circle(midx-(i-25)*sin(67.5*22/7/180),midy+(i-25)*sin(22.5*22/7/180),2);
			else
				circle(midx-(225-i)*sin(67.5*22/7/180),midy+(225-i)*sin(22.5*22/7/180),2);

			if(i<175)
				circle(midx-(i-75)*sin(22.5*22/7/180),midy+(i-75)*sin(67.5*22/7/180),2);
			else
				circle(midx-(275-i)*sin(22.5*22/7/180),midy+(275-i)*sin(67.5*22/7/180),2);
			if(i<150)
			{
				circle(midx-(150-i)*(1/sqrt(2)),midy-(150-i)*(1/sqrt(2)),2);
				circle(midx-(i-50)*(1/sqrt(2)),midy+(i-50)*(1/sqrt(2)),2);
			}
			else
			{
				circle(midx+(i-150)*(1/sqrt(2)),midy+(i-150)*(1/sqrt(2)),2);
				circle(midx+(i-250)*(1/sqrt(2)),midy-(i-250)*(1/sqrt(2)),2);
			}
		}
		else if(i<300)
		{
			circle(midx+i-200,midy,2);
			circle(midx,midy+300-i,2);
			circle(midx-(275-i)*sin(22.5*22/7/180),midy+(275-i)*sin(67.5*22/7/180),2);
			circle(midx-(225-i)*sin(67.5*22/7/180),midy+(225-i)*sin(22.5*22/7/180),2);
			if(i<225)
				circle(midx+(i-125)*sin(22.5*22/7/180),midy+(i-125)*sin(67.5*22/7/180),2);
			else
				circle(midx+(325-i)*sin(22.5*22/7/180),midy+(325-i)*sin(67.5*22/7/180),2);

			if(i<275)
				circle(midx-(175-i)*sin(67.5*22/7/180),midy-(175-i)*sin(22.5*22/7/180),2);
			else
				circle(midx+(375-i)*sin(67.5*22/7/180),midy+(375-i)*sin(22.5*22/7/180),2);
			if(i<250)
			{
				circle(midx+(i-150)*(1/sqrt(2)),midy+(i-150)*(1/sqrt(2)),2);
				circle(midx-(250-i)*(1/sqrt(2)),midy+(250-i)*(1/sqrt(2)),2);
			}
			else
			{
				circle(midx+(350-i)*(1/sqrt(2)),midy+(350-i)*(1/sqrt(2)),2);
				circle(midx+(i-250)*(1/sqrt(2)),midy-(i-250)*(1/sqrt(2)),2);
			}
		}
		else
		{
			circle(midx+400-i,midy,2);
			circle(midx,midy+300-i,2);
			circle(midx+(350-i)*(1/sqrt(2)),midy+(350-i)*(1/sqrt(2)),2);
			circle(midx+(375-i)*sin(67.5*22/7/180),midy+(375-i)*sin(22.5*22/7/180),2);
			circle(midx+(325-i)*sin(22.5*22/7/180),midy+(325-i)*sin(67.5*22/7/180),2);
			if(i<325)
				circle(midx+(i-225)*sin(67.5*22/7/180),midy-(i-225)*sin(22.5*22/7/180),2);
			else
				circle(midx+(425-i)*sin(67.5*22/7/180),midy-(425-i)*sin(22.5*22/7/180),2);

			if(i<375)
				circle(midx+(i-275)*sin(22.5*22/7/180),midy-(i-275)*sin(67.5*22/7/180),2);
			else
				circle(midx+(475-i)*sin(22.5*22/7/180),midy-(475-i)*sin(67.5*22/7/180),2);

			if(i<350)
				circle(midx+(i-250)*(1/sqrt(2)),midy-(i-250)*(1/sqrt(2)),2);
			else
				circle(midx+(450-i)*(1/sqrt(2)),midy-(450-i)*(1/sqrt(2)),2);
		}
		i++;
		if(i==400)
		i=0;
		page=1-page;
		delay(10);
	}
	closegraph();
	getch();
	return 0;
}
