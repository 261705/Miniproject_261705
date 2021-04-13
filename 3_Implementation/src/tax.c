#include "header.h"
#include<stdio.h>
details tax(details d)
{
 d.taxable_income=d.gross-d.t_deductions;
 if(d.taxable_income<=250000)
 d.income_tax=ZERO_TAX;
 else if(d.taxable_income>250000&&d.taxable_income<=500000)
 d.income_tax=d.taxable_income*(0.1);
else if(d.taxable_income>500000&&d.taxable_income<=1000000)
d.income_tax=d.taxable_income*(0.2);
else
d.income_tax=d.taxable_income*(0.3);
return d;
}