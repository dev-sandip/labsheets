#include<stdio.h>
#define Pi 3.1415
int main()
{
    float r,h,area,volume;
  printf("Enter the radius of the cylinder");
  scanf("%f",&r);
printf("Enter the height of the cylinder");
scanf("%f",&h);
area = 2*Pi*r*(r+h);
volume =Pi*r*r*h;
printf("The area of cylinder is %f",area);
printf("The volume of cylinder is %f",volume);
return 0;
}