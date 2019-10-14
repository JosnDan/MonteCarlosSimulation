#include"pi.cpp"
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#define BGI "c:\\turboc3\\bgi";

void main()
{
  pi monto;
  int gd=DETECT,gm;
  int n,r;
  clrscr();
  cout<<"Enter the radius ";
  cin>>r;
  cout<<endl<<"Enter number of iterations ";
  cin>>n;
  initgraph(&gd,&gm,BGI);
  monto.driver(n,r);
}
