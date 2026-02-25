
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Izzy Shaw
 * ID: 201956339
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   double salary = 36250;
   int national_insurance = 8;
   int tax = 15;
   int total_salary;
   double tax_contribution = 0.0;
    // calculate the deductions and final take-home salary
   double NI_contribution = salary * (national_insurance / 100.0);
   double salary_after_NI = salary - NI_contribution;
   double taxable_amount = salary_after_NI-12500;
   if (taxable_amount > 0) {
          tax_contribution = taxable_amount * (tax / 100.0);
}

   double take_home_salary = salary_after_NI - tax_contribution;
 
    // Use only these print statement with appropriate formatting and variable names

   printf("Salary £%.2f\n",salary);
   printf("NI contribution £%.2f\n",NI_contribution);
   printf("Tax contribution £%.2f\n",tax_contribution);
   printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }