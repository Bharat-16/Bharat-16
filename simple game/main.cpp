#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

using namespace std;

int main()
{
    initwindow(600,600,"ball");

    outtextxy(200,290,"press any key");
    outtextxy(200,400,"made by- BHARAT");
    getch();

    float b1=250,b2=580, bx=300,by=570, a=60;
    int fx=1,fy=1, page=0;

    bar(b1,b2,b1+100,b2+10);
    circle(bx,by,10);

    for(;;)
    {
        setactivepage(page);
		setvisualpage(1-page);

        cleardevice();

        //level 2 design
        setfillstyle(SOLID_FILL,6);
        bar(100,100,200,200);
        bar(400,100,500,200);

        if(GetAsyncKeyState(VK_LEFT) && b1>0)
            b1-=0.5;
        if(GetAsyncKeyState(VK_RIGHT) && b1<499)
            b1+=0.5;

        if(bx>=590  || ((int)bx==90&&(by>90&&by<210))||((int)bx==390&&(by>90&&by<210)))
            fx=1;
        if(bx<=10  ||((int)bx==210&&(by>90&&by<210))||((int)bx==510&&(by>90&&by<210)))
            fx=0;

        if(by>=610)
             break;

        //reflected by bar
        if(by==570 && (bx>b1&&bx<(b1+100)))
        {
            a=(bx-b1)*1.4+20;
            fy=1;
            if((bx-b1)<50)
                fx=1;
            else
                fx=0;
        }

        if(by<=10 || ((int)by==210&&((bx>90&&bx<210)||(bx>390&&bx<510))))
            fy=0;
        if((int)by==90&&((bx>90&&bx<210)||(bx>390&&bx<510)))
            fy=1;

        if(fx==0)
            if(a<90)
                bx=bx+0.5*cos(a*3.14/180);
            else
                bx=bx-0.5*cos(a*3.14/180);
        else
            if(a<90)
                bx=bx-0.5*cos(a*3.14/180);
            else
                bx=bx+0.5*cos(a*3.14/180);
        if(fy==0)
        by=by+0.5*sin(a*3.14/180);
        else
        by=by-0.5*sin(a*3.14/180);


		circle(bx,by,10);
		setfillstyle(SOLID_FILL,RED);
		floodfill(bx,by,WHITE);
        page=1-page;
		delay(0);
        setfillstyle(SOLID_FILL,WHITE);
        bar(b1,b2,b1+100,b2+10);
    }

    outtextxy(250,290,"GAME OVER");
    getch();
    //closegraph();
    return 0;
}
