

#include<iostream>
using namespace std;
#include<graphics.h>
int main()
{
    int gd= DETECT;
    int gm;
    initgraph(&gd,&gm, "C:\\TC\\BGI");
    //first
    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }
    setcolor(i);
    circle(150,20,10);
    setcolor(i);
    circle(150,20,9);
    setcolor(i);
    circle(150,20,8);
    setcolor(i);
    circle(150,20,7);
    setcolor(i);
    circle(150,20,6);
    setcolor(i);
    circle(150,20,5);

    //second
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(150,40,10);
    setcolor(i+1);
    circle(150,40,9);
    setcolor(i+1);
    circle(150,40,8);
    setcolor(i+1);
    circle(150,40,7);
    setcolor(i+1);
    circle(150,40,6);
    setcolor(i+1);
    circle(150,40,5);

  //third
    /*  for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(150,60,10);
    setcolor(i+2);
    circle(150,60,9);
    setcolor(i+2);
    circle(150,60,8);
    setcolor(i+2);
    circle(150,60,7);
    setcolor(i+2);
    circle(150,60,6);
    setcolor(i+2);
    circle(150,60,5);

    //fourth
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i);
    circle(150,80,10);
    setcolor(i+3);
    circle(150,80,9);
    setcolor(i+3);
    circle(150,80,8);
    setcolor(i+3);
    circle(150,80,7);
    setcolor(i+3);
    circle(150,80,6);
    setcolor(i+3);
    circle(150,80,5);

    //fifth
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i);
    circle(150,100,10);
    setcolor(i+4);
    circle(150,100,9);
    setcolor(i+4);
    circle(150,100,8);
    setcolor(i+4);
    circle(150,100,7);
    setcolor(i+4);
    circle(150,100,6);
    setcolor(i+4);
    circle(150,100,5);

    //sixth
        /*for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i);
    circle(150,120,10);
    setcolor(i+5);
    circle(150,120,9);
    setcolor(i+5);
    circle(150,120,8);
    setcolor(i+5);
    circle(150,120,7);
    setcolor(i+5);
    circle(150,120,6);
    setcolor(i+5);
    circle(150,120,5);

    //firstleft
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(130,40,10);
    setcolor(i+1);
    circle(130,40,9);
    setcolor(i+1);
    circle(130,40,8);
    setcolor(i+1);
    circle(130,40,7);
    setcolor(i+1);
    circle(130,40,6);
    setcolor(i+1);
    circle(130,40,5);

    //firstmoreleft
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(118,60,10);
    setcolor(i+2);
    circle(118,60,9);
    setcolor(i+2);
    circle(118,60,8);
    setcolor(i+2);
    circle(118,60,7);
    setcolor(i+2);
    circle(118,60,6);
    setcolor(i+2);
    circle(118,60,5);

    //firstright
    /*    for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+1);
    circle(170,40,10);
    setcolor(i+1);
    circle(170,40,9);
    setcolor(i+1);
    circle(170,40,8);
    setcolor(i+1);
    circle(170,40,7);
    setcolor(i+1);
    circle(170,40,6);
    setcolor(i+1);
    circle(170,40,5);

    //first more right
       /* for(int i=0;i<20;i++)
    {
        if(i>15)
        {

            i=1;
        }*/
    setcolor(i+2);
    circle(182,60,10);
    setcolor(i+2);
    circle(182,60,9);
    setcolor(i+2);
    circle(182,60,8);
    setcolor(i+2);
    circle(182,60,7);
    setcolor(i+2);
    circle(182,60,6);
    setcolor(i+2);
    circle(182,60,5);
    }


    getch();
    closegraph();



}


