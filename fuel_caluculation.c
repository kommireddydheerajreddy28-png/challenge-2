#include <stdio.h>
int main(){
int distance, mileage, fuelprice;
float fuelrequired,totalcost;

printf("enter your total distance, mileage, fuel price: ");
scanf("%d %d %d",&distance,&mileage,&fuelprice);

fuelrequired=distance/mileage;
totalcost=fuelrequired*fuelprice;

printf("fuelrequired = %.2f liters\n totalcost = %.2f\n", fuelrequired,totalcost);
return 0;
}
