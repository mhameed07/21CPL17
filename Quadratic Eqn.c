/* Program 2
Compute the roots of Quadratic Equation
*/

#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, desc, r1, r2, real_part, imag_part;

  printf("Finding Roots of a Quadratic Equation\n");
  printf("Enter coefficients a, b and c:");
  scanf("%f%f%f", &a, &b, &c);

  // Checking if a=0 as it would become a linear eqn.

  if (a==0)
  { printf("It is a linear equation. Please try with valid inputs again\n");
    return 1;
  }

  // Quadratic Formula for Finding Roots

  desc = (b*b) - 4*a*c;

  // For Real and Equal Roots

  if (desc== 0)
  { r1= r2 = -b/(2*a);
    printf("The Roots are Real and Equal\n");
    printf("r1 = r2 = %f \n", r1);
  }

  // For Real and Imaginary Roots

  else if (desc > 0)
  { r1 = (-b + sqrt(desc))/(2*a);
    r2 = (-b - sqrt(desc))/(2*a);
    printf("The Roots are Real and Distinct\n");
    printf("r1 = %f and r2 = %f \n", r1, r2);
  }

  // For Imaginary Roots

  else
  { real_part= -b/(2.0*a);
    imag_part = sqrt(-desc)/ (2.0*a);
    printf("The Roots are Imaginary\n");
    printf("r1 = %f + i %f and r2 = %f - i %f \n",real_part, imag_part, real_part, imag_part);
  }
  
  return 0; 
}

