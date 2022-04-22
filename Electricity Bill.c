/* Program 3
Electricity Bill */

#include<stdio.h>

//All users are charged a minimum of Rs. 100 as meter charge.
#define METERCHARGE 100

int main()

{
  //Inputing Consumer's name
  char name[20];
  printf("Enter the user's name:");  
  //scanf("%[^\n]*c",name); 
  fgets(name,20,stdin); 
  //printf("The user's name is %s\n", name);

  //Inputing the number of units consumed
  float unit, charge, total;
  printf("Enter n.o of units consumed:");
  scanf("%f", &unit);
 
  // Checking if value inputted is negative as unit consumed cannot be -ve.
  if (unit <0)
  {
    printf("Unit should not be negative!\n");
    return 1;
  }

  //Rate for the first 200 units 80 paise per unit.
  else if(unit<= 200)
  {
    charge= 0.8*unit;
  }

  //Rates for the next 100 units 90 paise per unit.
  else if(unit<=300)
  {
    charge= 0.8*200 + 0.9*(unit-200);
  }

  //Rates beyond 300 units is Rs 1 per unit.
  else
  {
    charge=0.8*200 + 0.9*100 + 1*(unit-300);
  }
  
  //Calculating the total charge.
  total= charge + METERCHARGE;

  //If the total amount>400, then an additional surcharge of 15% of the total.
  if (total>400)
  {
    total=total+0.15*total;
  }

  //printing the name of the user, the number of units consumed, and the charges.
  printf("Consumer name: %s\t Number of units consumed: %f\t Charge: %f \n", name, unit, total);
  
  return 0;
}

