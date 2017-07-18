#include<iostream>
#include<stdio.h>
#include<graphics.h>
using namespace std;
class elevator
{
   int current_floor,floor_number,push_button;
   int x;

   public:
   elevator()
   {

       current_floor=0;
       cout<<"enter the floor number you are in"<<endl;
       cin>>push_button;


   }

    void elevator_moving()
    {
        cout<<"the elevator is coming to your floor"<<endl;

    }
    void upordown();

    void arrowup(int );
    void arrowdown(int);

};
 void elevator::upordown()
 {

     cout<<"enter the floor number you want to go"<<endl;
     cin>>floor_number;
     if(push_button==floor_number)
     {

         cout<<"sorry,you entered the same floor no"<<endl;
         cout<<"enter a different floor no"<<endl;
         upordown();

     }
     if(floor_number>push_button)
     {
         settextstyle(BOLD_FONT,HORIZ_DIR,8);
         char a[50];


         for(int j=push_button;j<=floor_number;j++)
         {
             setcolor(LIGHTBLUE);

              sprintf(a,"%d",j);
             outtextxy(20,40,a);


            arrowup(j);

           cleardevice();
         }
         setcolor(9);
         settextstyle(7,HORIZ_DIR,3);
         outtextxy(30,300,"YES!YOU REACHED SAFELY :P");
         settextstyle(8,HORIZ_DIR,5);
         setcolor(6);
         outtextxy(20,400,"THIS PROJECT IS DONE BY ");
         outtextxy(20,450,"VENKATESH E & SOUMITH E") ;
         push_button=floor_number;
         cout<<"do you want to go to any other floor"<<endl<<"if so press 1 to go to other floor;or press -1 to leave in this floor"<<endl;
         int c;
         cin>>c;
         switch(c)
         {
     case(-1):
         cout<<"BYE-BYE";
        break;

        default:
            upordown();
             break;
         }



         }



     if(floor_number<push_button)
     {

         settextstyle(BOLD_FONT,HORIZ_DIR,8);
         char b[50];


         for(int j=push_button;j>=floor_number;j--)
         {
             setcolor(LIGHTBLUE);
              sprintf(b,"%d",j);
             outtextxy(20,50,b);
             arrowdown(j);
             cleardevice();

         }
         setcolor(9);
         settextstyle(7,HORIZ_DIR,3);
         outtextxy(30,300,"YES!YOU REACHED SAFELY :-P");
         settextstyle(8,HORIZ_DIR,5);
         setcolor(6);
         outtextxy(20,400,"THIS PROJECT IS DONE BY ");
         outtextxy(20,450,"VENKATESH E & SOUMITH E") ;
         push_button=floor_number;
         cout<<"do you want to go to any other floor"<<endl<<"if so press 1 to go to other floor;or press -1 to leave in this floor"<<endl;
         int c;
         cin>>c;
         switch(c)
         {
          case(-1):
          cout<<"BYE-BYE"<<endl;
          break;

           default:
            upordown();
             break;
         }


     }


 }
 void elevator ::arrowdown(int m)
 {

     if(m>9 && m<=99)
     {
         x=160;
     }
     else if(m>99)
     {
         x=210;
     }
     else if(m<0 && m>-10)
     {
         x=160;
     }
     else if(m<=-10 && m>=-99)
     {
         x=210;
     }
     else if(m<-99)
     {
         x=260;
     }
     else
     {
         x=130;
     }
    //first
    for(int i=0;i<10;i++)
    {

    setcolor(i+5);
    circle(x,20,10);
    setcolor(i+5);
    circle(x,20,9);
    setcolor(i+5);
    circle(x,20,8);
    setcolor(i+5);
    circle(x,20,7);
    setcolor(i+5);
    circle(x,20,6);
    setcolor(i+5);
    circle(x,20,5);

    //second
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+4);
    circle(x,40,10);
    setcolor(i+4);
    circle(x,40,9);
    setcolor(i+4);
    circle(x,40,8);
    setcolor(i+4);
    circle(x,40,7);
    setcolor(i+4);
    circle(x,40,6);
    setcolor(i+4);
    circle(x,40,5);

  //third
    /*  for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+3);
    circle(x,60,10);
    setcolor(i+3);
    circle(x,60,9);
    setcolor(i+3);
    circle(x,60,8);
    setcolor(i+3);
    circle(x,60,7);
    setcolor(i+3);
    circle(x,60,6);
    setcolor(i+3);
    circle(x,60,5);

    //fourth
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(x,80,10);
    setcolor(i+2);
    circle(x,80,9);
    setcolor(i+2);
    circle(x,80,8);
    setcolor(i+2);
    circle(x,80,7);
    setcolor(i+2);
    circle(x,80,6);
    setcolor(i+2);
    circle(x,80,5);

    //fifth
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(x,100,10);
    setcolor(i+1);
    circle(x,100,9);
    setcolor(i+1);
    circle(x,100,8);
    setcolor(i+1);
    circle(x,100,7);
    setcolor(i+1);
    circle(x,100,6);
    setcolor(i+1);
    circle(x,100,5);

    //sixth
        /*for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i);
    circle(x,120,10);
    setcolor(i);
    circle(x,120,9);
    setcolor(i);
    circle(x,120,8);
    setcolor(i);
    circle(x,120,7);
    setcolor(i);
    circle(x,120,6);
    setcolor(i);
    circle(x,120,5);

    //firstleft
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(x-20,100,10);
    setcolor(i+1);
    circle(x-20,100,9);
    setcolor(i+1);
    circle(x-20,100,8);
    setcolor(i+1);
    circle(x-20,100,7);
    setcolor(i+1);
    circle(x-20,100,6);
    setcolor(i+1);
    circle(x-20,100,5);

    //firstmoreleft
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(x-32,80,10);
    setcolor(i+2);
    circle(x-32,80,9);
    setcolor(i+2);
    circle(x-32,80,8);
    setcolor(i+2);
    circle(x-32,80,7);
    setcolor(i+2);
    circle(x-32,80,6);
    setcolor(i+2);
    circle(x-32,80,5);

    //firstright
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(x+20,100,10);
    setcolor(i+1);
    circle(x+20,100,9);
    setcolor(i+1);
    circle(x+20,100,8);
    setcolor(i+1);
    circle(x+20,100,7);
    setcolor(i+1);
    circle(x+20,100,6);
    setcolor(i+1);
    circle(x+20,100,5);

    //first more right
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(x+32,80,10);
    setcolor(i+2);
    circle(x+32,80,9);
    setcolor(i+2);
    circle(x+32,80,8);
    setcolor(i+2);
    circle(x+32,80,7);
    setcolor(i+2);
    circle(x+32,80,6);
    setcolor(i+2);
    circle(x+32,80,5);
    }

delay(1000);

}





 void elevator ::arrowup(int n)
 {

    if(n>9 && n<=99)
     {
         x=160;
     }
     else if(n>99)
     {
         x=210;
     }
     else if(n<0 && n>-10)
     {
         x=160;
     }
     else if(n<=-10 && n>=-99)
     {
         x=210;
     }
     else if(n<-99)
     {
         x=260;
     }
     else
     {
         x=130;
     }

         //first
    for(int i=0;i<11;i++)
    {
       /*if(i>15)
        {

            i=1;
        }*/
    setcolor(i);
    circle(x,20,10);
    setcolor(i);
    circle(x,20,9);
    setcolor(i);
    circle(x,20,8);
    setcolor(i);
    circle(x,20,7);
    setcolor(i);
    circle(x,20,6);
    setcolor(i);
    circle(x,20,5);

    //second
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(x,40,10);
    setcolor(i+1);
    circle(x,40,9);
    setcolor(i+1);
    circle(x,40,8);
    setcolor(i+1);
    circle(x,40,7);
    setcolor(i+1);
    circle(x,40,6);
    setcolor(i+1);
    circle(x,40,5);

  //third
    /*  for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(x,60,10);
    setcolor(i+2);
    circle(x,60,9);
    setcolor(i+2);
    circle(x,60,8);
    setcolor(i+2);
    circle(x,60,7);
    setcolor(i+2);
    circle(x,60,6);
    setcolor(i+2);
    circle(x,60,5);

    //fourth
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+3);
    circle(x,80,10);
    setcolor(i+3);
    circle(x,80,9);
    setcolor(i+3);
    circle(x,80,8);
    setcolor(i+3);
    circle(x,80,7);
    setcolor(i+3);
    circle(x,80,6);
    setcolor(i+3);
    circle(x,80,5);

    //fifth
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+4);
    circle(x,100,10);
    setcolor(i+4);
    circle(x,100,9);
    setcolor(i+4);
    circle(x,100,8);
    setcolor(i+4);
    circle(x,100,7);
    setcolor(i+4);
    circle(x,100,6);
    setcolor(i+4);
    circle(x,100,5);

    //sixth
        /*for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+5);
    circle(x,120,10);
    setcolor(i+5);
    circle(x,120,9);
    setcolor(i+5);
    circle(x,120,8);
    setcolor(i+5);
    circle(x,120,7);
    setcolor(i+5);
    circle(x,120,6);
    setcolor(i+5);
    circle(x,120,5);

    //firstleft
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(x-20,40,10);
    setcolor(i+1);
    circle(x-20,40,9);
    setcolor(i+1);
    circle(x-20,40,8);
    setcolor(i+1);
    circle(x-20,40,7);
    setcolor(i+1);
    circle(x-20,40,6);
    setcolor(i+1);
    circle(x-20,40,5);

    //firstmoreleft
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(x-32,60,10);
    setcolor(i+2);
    circle(x-32,60,9);
    setcolor(i+2);
    circle(x-32,60,8);
    setcolor(i+2);
    circle(x-32,60,7);
    setcolor(i+2);
    circle(x-32,60,6);
    setcolor(i+2);
    circle(x-32,60,5);

    //firstright
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(x+20,40,10);
    setcolor(i+1);
    circle(x+20,40,9);
    setcolor(i+1);
    circle(x+20,40,8);
    setcolor(i+1);
    circle(x+20,40,7);
    setcolor(i+1);
    circle(x+20,40,6);
    setcolor(i+1);
    circle(x+20,40,5);

    //first more right
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(x+32,60,10);
    setcolor(i+2);
    circle(x+32,60,9);
    setcolor(i+2);
    circle(x+32,60,8);
    setcolor(i+2);
    circle(x+32,60,7);
    setcolor(i+2);
    circle(x+32,60,6);
    setcolor(i+2);
    circle(x+32,60,5);
    }

 delay(1000);


 }


int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(800,600,"THE ELEVATOR");
    elevator obj;
    obj.elevator_moving();
    obj.upordown();
     cout<<"THE END"<<endl;




    getch();
    closegraph();
    return 0;

}
