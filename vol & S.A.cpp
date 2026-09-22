//Author Innocent Gitonga
//Reg no. BCS-05-0066/2026
//Date;20/9/2026
//prompting user for height,radius and calculating vol and S.A
 
 
#include<stdio.h>

int main(){
	float radius,height;
	float volume,surfaceArea;
	const float PI=3.142;
	
	printf("enter radius of the cylinder \t");
	scanf("%f",&radius);
	
	printf("enter height of the cylinder \t");
	scanf("%f",&height);
	
	volume=PI*radius*radius*height;
	
	surfaceArea=2*PI*radius*radius+2*PI*radius*height;
	
	printf("volume of cylinder=%f\n",volume);
	printf("surfaceArea of cylinder=%f\n",surfaceArea);
	
	return 0;
}