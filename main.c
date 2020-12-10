#include <stdio.h>
#include <graphics.h>
#include <math.h>

int frac(d,x,y,l)
{
    if (d==0) return 0;
    int i,xl,yl,xr,yr;
    yl=y;
    xl=x-l;
    line(x,y,xl,yl);
    line(xl,yl,xl,yl+l);
    line(xl,yl,xl,yl-l);
    frac(d-1,xl,yl+l,l/2);
    frac(d-1,xl,yl-l,l/2);
    yr=y;
    xr=x+l;
    line(x,y,xr,yr);
    line(xr,yr,xr,yr+l);
    line(xr,yr,xr,yr-l);
    frac(d-1,xr,yr+l,l/2);
    frac(d-1,xr,yl-l,l/2);


  return 0;
}
int main()
{
    int d;
    printf("Enter recursion depth:");
    scanf("%d",&d);
     int gd = DETECT;
    int gm;
    initgraph(&gd, &gm,"");
    frac(d,300,250,64);
    readkey();
    closegraph();
    return 0;
}
