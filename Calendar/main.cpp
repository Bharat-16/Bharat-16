#include<stdio.h>
#include<time.h>
#include<dos.h>
#include<graphics.h>
#include<windows.h>

//function to calculate day of given date
int days(int date,int month,int year)
{
	int day;
	if(month==1||month==2)
	{
		if(month==1)
			day=date+1;
		if(month==2)
			day=date+4;
		for(int i=1902;i<=year;day++,i++)
		{
			if((i-1)%400==0||((i-1)%4==0&&(i-1)%100!=0))
				day++;
		}
	}
	else
	{
		if(month==4||month==7)
			day=date;
		if(month==3||month==11)
			day=date+4;
		if(month==8)
			day=date+3;
		if(month==5)
			day=date+2;
		if(month==6)
			day=date+5;
		if(month==9||month==12)
			day=date+6;
		if(month==10)
			day=date+1;
		for(int i=1902;i<=year;day++,i++)
		{
			if(i%400==0||(i%4==0&&i%100!=0))
			day++;
		}
	}
	day=day%7;
	return (day);
}
void cstruct(int day,int date,int month,int year)
{
    initwindow(600,500,"CALENDAR",200,100);
    outtextxy(400,460,"made by- bharat");
    char t[20],detail[30],count[2],Ltime[20];
    int c=1, y=0;

    switch(month)
    {
        case 1:
            sprintf(t,"JANUARY %d",year);
            break;
        case 2:
            sprintf(t,"FEBUARY %d",year);
            break;
        case 3:
            sprintf(t,"MARCH %d",year);
            break;
        case 4:
            sprintf(t,"APRIL %d",year);
            break;
        case 5:
            sprintf(t,"MAY %d",year);
            break;
        case 6:
            sprintf(t,"JUNE %d",year);
            break;
        case 7:
            sprintf(t,"JULY %d",year);
            break;
        case 8:
            sprintf(t,"AUGUST %d",year);
            break;
        case 9:
            sprintf(t,"SEPTEMBER %d",year);
            break;
        case 10:
            sprintf(t,"OCTOBER %d",year);
            break;
        case 11:
            sprintf(t,"NOVEMBER %d",year);
            break;
        case 12:
            sprintf(t,"DECEMBER %d",year);
            break;
        default:
            sprintf(t,"wrong value of month");
    }

    switch((day+date-1)%7)
    {
        case 0:
            sprintf(detail,"Sunday, %d %s",date,t);
            break;
        case 1:
            sprintf(detail,"Monday, %d %s",date,t);
            break;
        case 2:
            sprintf(detail,"Tueday, %d %s",date,t);
            break;
        case 3:
            sprintf(detail,"Wednesday, %d %s",date,t);
            break;
        case 4:
            sprintf(detail,"Thrusday, %d %s",date,t);
            break;
        case 5:
            sprintf(detail,"Friday, %d %s",date,t);
            break;
        case 6:
            sprintf(detail,"Saturday, %d %s",date,t);
    }
    settextstyle(0,HORIZ_DIR,5);
    outtextxy(60,120,t);

    for(int i=0;i<8;i++)
    {
        line(50,170+i*40,540,170+i*40);
        line(50+i*70,170,50+i*70,450);
    }

    settextstyle(1,HORIZ_DIR,1);
    outtextxy(60,60,detail);
    setcolor(RED);
    outtextxy(60,180,"sun");
    setcolor(WHITE);
    outtextxy(130,180,"mon");
    outtextxy(200,180,"tue");
    outtextxy(270,180,"wed");
    outtextxy(340,180,"thr");
    outtextxy(410,180,"fri");
    outtextxy(480,180,"sat");

    //print dates in calendar according to the month
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            while(c<=31)
            {
                sprintf(count,"%d ",c);
                if(c==date)
                {
                    settextstyle(4,HORIZ_DIR,2);
                    setcolor(YELLOW);
                }
                else if(day==0)
                {
                    settextstyle(1,HORIZ_DIR,2);
                    setcolor(RED);
                }
                else
                {
                    settextstyle(1,HORIZ_DIR,1);
                    setcolor(WHITE);
                }
                outtextxy(70+day*70,220+y*40,count);
                c++; day++;
                if(day==7)
                {
                    day=0;
                    y++;
                }
            }

            break;
        case 2:
            int leap;
            if(year%400==0 || (year%4==0 && year%100!=0))
                leap=29;
            else
                leap=28;
            while(c<=leap)
            {
                sprintf(count,"%d ",c);
                if(c==date)
                {

                    settextstyle(4,HORIZ_DIR,2);
                    setcolor(YELLOW);
                }
                else if(day==0)
                {
                    settextstyle(1,HORIZ_DIR,2);
                    setcolor(RED);
                }
                else
                {
                    settextstyle(1,HORIZ_DIR,1);
                    setcolor(WHITE);
                }
                outtextxy(70+day*70,220+y*40,count);
                c++; day++;
                if(day==7)
                {
                    day=0;
                    y++;
                }
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            while(c<=30)
            {
                sprintf(count,"%d ",c);
                if(c==date)
                {
                    settextstyle(4,HORIZ_DIR,2);
                    setcolor(YELLOW);
                }
                else if(day==0)
                {
                    settextstyle(1,HORIZ_DIR,2);
                    setcolor(RED);
                }
                else
                {
                    settextstyle(1,HORIZ_DIR,1);
                    setcolor(WHITE);
                }
                outtextxy(70+day*70,220+y*40,count);
                c++; day++;
                if(day==7)
                {
                    day=0;
                    y++;
                }
            }
            break;
    }
    //to show current time
    while(1)
    {
        time_t rawtime;
        struct tm *currentTime;
        rawtime=time(NULL);
        currentTime=localtime(&rawtime);
        strftime(Ltime,20,"%I:%M:%S%p",currentTime);
        setcolor(WHITE);
        settextstyle(8,HORIZ_DIR,5);
        outtextxy(60,20,Ltime);
        delay(1000);
        if(GetAsyncKeyState(VK_RETURN))
            break;
    }
}

int main()
{
    int x,date,month,year;
    char sdate[9];
	_strdate(sdate);
	//calculate date month and year
	date=(sdate[3]-48)*10+sdate[4]-48;
    month=(sdate[0]-48)*10+sdate[1]-48;
	year=(sdate[6]-48)*10+sdate[7]-48+2000;

	x=days(1,month,year);
	cstruct(x,date,month,year);
    return 0;
}
