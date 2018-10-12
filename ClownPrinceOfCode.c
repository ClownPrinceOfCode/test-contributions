#include<stdio.h>
int main()
{
int x1,x2,y1,y2,m1,m2,x1f,y1f,x2f,y2f;
scanf("%d %d",&x1,&y1);
scanf("%d %d",&x2,&y2);
scanf("%d %d",&m1,&m2);
scanf("%d %d",&x1f,&y1f);
x2f=((x1*m1)+(x2*m2)-(m1*x1f))/m2;
y2f=((y1*m1)+(y2*m2)-(m1*y1f))/m2;;
printf("%d %d",x2f,y2f);
return 0;
}

