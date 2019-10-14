
class pi
{
 int lx,ux,ly;
public:
  void draw(int radius)
  {
    int x=getmaxx()/2,y=getmaxy()/2,r=radius;
    circle(x,y,r);
    rectangle(x-r,y-r,x+r,y+r);
    lx=x-r,ux=2*r+1,ly=y-r;
  }
  void disprandpoints()
  {
    int xr=random(ux)+lx;
    int yr=random(ux)+ly;
    putpixel(xr,yr,RED);
  }
  double calcpi(int niter)
  {
    int SEED=35791246;
    double x,y;
  int i,count=0; /* # of points in the 1st quadrant of unit circle */
    double z;
    double pi;
   /* initialize random numbers */
    srand(SEED);
    count=0;
    for ( i=0; i<niter; i++)
    {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      z = x*x+y*y;
      if (z<=1)
        count++;
    }
    return (double)count/niter*4;
  }
  void driver(int n,int r)
  {
   draw(r);
   for(int i=0;i<n;i++)
   {
     disprandpoints();
   }
   char out[30];
   sprintf(out,"%f",calcpi(n));
   outtextxy(getmaxx()/2,getmaxy()/2,out);
   getch();
 }
};
