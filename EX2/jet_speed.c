#include<stdio.h>
int main(void)
{
	//listing the variables
	double acceleration,time,final_velocity,distance,final_velocity_mps;
	printf("please enter the takeoff distance in meters:");
	scanf("%lf",&distance);
	printf("please enter the takeoff velocity/take off speed in kmph:");
	scanf("%lf",&final_velocity);
	final_velocity_mps = final_velocity/3.6;
	

        //calculations 
	acceleration=(final_velocity_mps*final_velocity_mps)/(2*distance);
	time=final_velocity_mps/acceleration;

	printf("your acceleration is :%.2f ms^-2\n",acceleration);
	printf("your time for takeoff is :%.2f seconds\n" ,time);
	return 0;
}
