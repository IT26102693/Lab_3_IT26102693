#include <stdio.h>
int main(void)
{
         //the constants are defined
	 const double gravitational_constant=9.80;
	 const double efficency_constant=90.0/100.0;
	 const double mass_of_cubic_meter_of_water=1000;
	 // variables are listed
	 double height,flow,mps,work,power,final_power;
	 
	 printf("Enter the height of the dam in meters");
	 scanf("%lf",&height);
	 printf("Ente the flow rate of water in cubic meters per second");
	 scanf("%lf",&flow);

	 //calculations
	 mps=flow*mass_of_cubic_meter_of_water;
	 work=mps*gravitational_constant*height;
	 power=efficency_constant*work;
	 final_power=power/1000000;
	 printf("your output power is:%.2f\n",power);
	 return 0;
}

