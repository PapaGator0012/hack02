#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main()
{

float latOrigin,longOrigin,latDestination,longDestination;
float distance,delta;
const float pi=3.14;  // constant > holds value for pi
const float radius= 6371.0 ;// constant > holds value of radius of earth

// input values from users
// the input values are assumed as degrees

printf("enter values for origin latitude");
scanf("%f",&latOrigin);
printf("enter value for origin longitude");
scanf("%f",&longOrigin);
printf("\n");
printf("enter values for destination latitude");
scanf("%f",&latDestination);
printf("enter values for destination longitude");
scanf("%f",&longDestination);

// using a mathematical formula radian=pi/180

// using the user defined value and storing new value init

latOrigin=(latOrigin*pi)/180;
longOrigin=(longOrigin*pi)/180;
latDestination=(latDestination*pi)/180;
longDestination=(longDestination*pi)/180;

// for finding delta values

delta=longDestination-longOrigin;

//finding distance using spherical law of cosine

distance=acos(sin(latDestination)*sin(longOrigin)+cod(latOrigin)*cos(latDestination)*cos(delta))*radius;

// change radion into degree

printf("Origin: (%f,%f)\n Destination: (%f,%f)\n",latOrigin*180/pi,longOrigin*180/pi,latDestination*180/pi,longDestination*180/pi);

printf("air distance is %f \n",distance);
return 0;
    


    return 0;
}