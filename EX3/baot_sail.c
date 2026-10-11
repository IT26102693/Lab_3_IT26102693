#include<stdio.h>
#include<math.h>
int main(void)
{
	//define the variables 
	double base,vertical_height,Area;

	//inputiing the area
	printf("please enter the area of the sail in meters:");
	scanf("%lf",&Area);

	//calculations
	vertical_height=sqrt(3.0*Area);
	base=(vertical_height*2)/3.0;
	
	printf("your Vertical height is :%.2f meters\n",vertical_height);
        printf("your Base is :%.2f meters\n",base);
        return 0;
}


