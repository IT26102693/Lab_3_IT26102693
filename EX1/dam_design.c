#include <stdio.h>
int main(void)
{
         //the constants are defined
	 const double gravitational_constant=9.80;
	 const double efficiency_constant=0.90;
	 const double mass_of_cubic_meter_of_water=1000;
	 // variables are listed
	 double height,flow,mps,work,power,final_power;
	 
	 printf("Enter the height of the dam in meters(must be a positive value):");
	 scanf("%lf",&height);
	 printf("Enter the flow rate of water in cubic meters per second(must be a positive value):");
	 scanf("%lf",&flow);

	 //calculations are made
	 mps=flow*mass_of_cubic_meter_of_water;
	 work=mps*gravitational_constant*height;
	 power=efficiency_constant*work;
	 final_power=power/1e6;// convert watts to mega watts
	 printf("your output power is:%.2f megawatts\n",final_power);
	 return 0;
}

