/*
Name:Innocent Gitonga
REG no:BCS-05-0066/2026
program to compute discount
amount>=10,000, 10%discount
amount between 5000 and 10000=5% 
below 5000, no discount
*/




#include<stdio.h>
 
 int main(){
 	float amount,discount, amount_to_pay;
 	
 	printf("enter the amount purchased\t");
 	scanf("%f",&amount);
 	
 	if(amount>=10000){
		  discount = 0.1 * amount;
		 amount_to_pay=amount-discount;
		 printf("discount=%.2f\n",discount);
		 printf("amount to pay=%.2f\n", amount_to_pay);

	 }
	 else if(amount>5000&& amount<10000){
	 discount = 0.05 * amount;
	 amount_to_pay=amount-discount;
	 printf("discount= %.2f \n",discount);
	 printf("amount to pay= %.2f\n", amount_to_pay);	 
	 }
	 
	 else{
		 printf("No discount");
	 }
	 return 0;
 }