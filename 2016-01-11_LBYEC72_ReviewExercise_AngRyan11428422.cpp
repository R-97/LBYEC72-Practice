#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159265

/*
Ang, Ryan ******
114*****
LBYEC72-EK2
January 11, 2016
*/

void printNameCourse();
float computeCircleArea(float functionRadius);


int main(){

printNameCourse();

printf("\n\n");

float area;
float radius;
radius=10;
area = computeCircleArea(radius);
printf("The area is %f.", area);	

printf("\n\n");

system("PAUSE");
return 0;

}

/*FUNCTIONS START HERE*/

void printNameCourse(){
printf("Name: Ryan Ang");
printf("\n\n");
printf("Hello LBYEC72!");
printf("\n\n");
}

float computeCircleArea(float functionRadius){
return PI * functionRadius * functionRadius;
}
	
/*FUNCTIONS END HERE*/


/*
float computeCircleArea(radius){
	let x be radius
	let y be area
	printf("Please enter the radius:");
	printf("\n");
	scanf("&f", x);
	y=x*x*PI;
	printf("\n");
	printf("The area of the circle with radius %.2f is %.2f.", x, y);	
}*/
