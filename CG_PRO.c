#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(i=1;i<200;i+=2)
{
if(i%3==0)
{
//head
circle(110,110,20);
line(110,130,110,150);
	//arms
	line(110,150,80,165);
	line(70,145,80,165);
	//2nd arms
	line(110,150,150,170);
	line(150,170,125,185);
	//body
	line(110,150,110,200);
	//legs
	line(110,200,80,220);
	line(80,220,100,250);
	line(110,200,130,250);
//1st dram
ellipse(500,200,0,360,40,20);
line(460,200,460,300);
line(540,200,540,300);
ellipse(500,300,0,360,40,20);
//2nd dram
ellipse(300,200,0,360,40,20);
line(260,200,260,300);
line(340,200,340,300);
ellipse(300,300,0,360,40,20);
//man
circle(400,100,30);
line(400,130,400,160);
   //arms
   line(400,160,300,190);//+20
   line(400,160,500,170);//+20
   //body
   line(400,160,400,230);
   //legs
   line(400,230,370,280);
   line(400,230,430,280);
   //stage
  // line(340,280,460,280);

delay(100);
cleardevice();
}
else
{
circle(110,110,20);
line(110,130,110,150);
	//line
	line(110,150,80,165);
	line(80,165,70,185);
	//line
	line(110,150,140,170);
	line(140,170,160,150);
	//body
	line(110,150,110,200);
	//legs
	line(110,200,90,250);

	line(110,200,130,220);
	line(130,220,120,250);
//1st dram
ellipse(500,200,0,360,40,20);
line(460,200,460,300);
line(540,200,540,300);
ellipse(500,300,0,360,40,20);
//2nd dram
ellipse(300,200,0,360,40,20);
line(260,200,260,300);
line(340,200,340,300);
ellipse(300,300,0,360,40,20);
//man
circle(400,100,30);
line(400,130,400,160);
   //arms
   line(400,160,300,170);//+20
   line(400,160,500,190);//+20
   //body
   line(400,160,400,230);
   //legs
   line(400,230,370,280);
   line(400,230,430,280);

 delay(100);
 cleardevice();
}
}
getch();
closegraph();

}
