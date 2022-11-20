#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");



		for(i=0;i<550;i++)
		{
			
			//sun
			setcolor(7);
			arc(500,40,0,360,30);
			
			settextstyle(3,HORIZ_DIR,2);
			outtextxy(480-i,460,"CREATED BY NARAYAN,ADITYA,TEJAS");
			
			//road
			setcolor(LIGHTGRAY);
			line(0,450,1500,450);


			//tree1
			setcolor(BROWN);
			line(250-i,400,250-i,450);
			line(265-i,400,265-i,450);
			setcolor(GREEN);
			ellipse(270-i,405,-100,23,15,20);
			ellipse(287-i,380,-100,45,15,20);
			ellipse(295-i,350,-55,75,15,20);
			ellipse(287-i,323,-15,100,15,20);
			ellipse(270-i,300,0,100,15,20);
			ellipse(259-i,300,70,180,15,20);



			ellipse(250-i,405,150,270,15,20);
			ellipse(240-i,380,150,250,15,20);
			ellipse(232-i,350,150,250,15,20);
			ellipse(228-i,325,120,240,17,15);
			ellipse(237-i,305,70,200,17,15);




			//tree2
			setcolor(BROWN);
			line(550-i,400,550-i,450);
			line(565-i,400,565-i,450);

			setcolor(GREEN);
			ellipse(570-i,405,-100,23,15,20);
			ellipse(587-i,380,-100,45,15,20);
			ellipse(595-i,350,-55,75,15,20);
			ellipse(587-i,323,-15,100,15,20);
			ellipse(570-i,300,0,100,15,20);
			ellipse(559-i,300,70,180,15,20);



			ellipse(550-i,405,150,270,15,20);
			ellipse(540-i,380,150,250,15,20);
			ellipse(532-i,350,150,250,15,20);
			ellipse(528-i,325,120,240,17,15);
			ellipse(537-i,305,70,200,17,15);






			//tree3

			setcolor(BROWN);
			line(50-i,400,50-i,450);
			line(65-i,400,65-i,450);

			setcolor(GREEN);
			ellipse(70-i,405,-100,23,15,20);
			ellipse(87-i,380,-100,45,15,20);
			ellipse(95-i,350,-55,75,15,20);
			ellipse(87-i,323,-15,100,15,20);
			ellipse(70-i,300,0,100,15,20);
			ellipse(59-i,300,70,180,15,20);



			ellipse(50-i,405,150,270,15,20);
			ellipse(40-i,380,150,250,15,20);
			ellipse(32-i,350,150,250,15,20);
			ellipse(28-i,325,120,240,17,15);
			ellipse(37-i,305,70,200,17,15);





			//tree4

			setcolor(BROWN);
			line(750-i,400,750-i,450);
			line(765-i,400,765-i,450);

			setcolor(GREEN);
			ellipse(770-i,405,-100,23,15,20);
			ellipse(787-i,380,-100,45,15,20);
			ellipse(795-i,350,-55,75,15,20);
			ellipse(787-i,323,-15,100,15,20);
			ellipse(770-i,300,0,100,15,20);
			ellipse(759-i,300,70,180,15,20);



			ellipse(750-i,405,150,270,15,20);
			ellipse(740-i,380,150,250,15,20);
			ellipse(732-i,350,150,250,15,20);
			ellipse(728-i,325,120,240,17,15);
			ellipse(737-i,305,70,200,17,15);







			//tree5

			setcolor(BROWN);
			line(950-i,400,950-i,450);
			line(965-i,400,965-i,450);

			setcolor(GREEN);
			ellipse(970-i,405,-100,23,15,20);
			ellipse(987-i,380,-100,45,15,20);
			ellipse(995-i,350,-55,75,15,20);
			ellipse(987-i,323,-15,100,15,20);
			ellipse(970-i,300,0,100,15,20);
			ellipse(959-i,300,70,180,15,20);



			ellipse(950-i,405,150,270,15,20);
			ellipse(940-i,380,150,250,15,20);
			ellipse(932-i,350,150,250,15,20);
			ellipse(928-i,325,120,240,17,15);
			ellipse(937-i,305,70,200,17,15);










			//plane
			setcolor(BLUE);
			rectangle(150+i,100,170+i,130);
			ellipse(150+i,115,90,270,127,15);
			ellipse(116+i,104,10,170,24,12);

			setcolor(15);
			line(120+i,120,70+i,166);
			line(90+i,120,60+i,160);
			ellipse(77+i,160,180,250,16,8);

			line(30+i,80,50+i,110);
			line(10+i,85,30+i,120);
			line(10+i,85,30+i,80);

			setcolor(14);
			rectangle(170+i,110,175+i,120);

			if(i%2==0)
			{
				setcolor(11);
				ellipse(178+i,94,0,360,3,18);
			 }

			 else
			 {
				setcolor(11);
				ellipse(178+i,130,0,360,3,18);
			 }
			 delay(50);
			 cleardevice();


		}
	
		
		setbkcolor(CYAN);
		setcolor(RED);
		settextstyle(10,HORIZ_DIR,3);
		outtextxy(200,150,"CREATED BY");
		settextstyle(1,HORIZ_DIR,1);
		outtextxy(350,300,"NARAYAN  ADITYA TEJAS");


	
	getch();
	closegraph();
}
