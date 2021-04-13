#include "header.h"
#include<stdio.h>
details gross_income(details d)
{
 d.gross=d.i_f_salary+d.i_f_property+d.i_f_business+d.i_f_gains+d.i_f_othersources;
 printf("%lf\n",d.gross);
 return d;
}