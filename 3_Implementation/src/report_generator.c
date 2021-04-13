#include<stdio.h>
#include "header.h"
details report_generator(details d)
{
 int i;
 for(i=0;i<200;i++)
 {
     printf("-");
     if(i==99)
     printf("\n          INXOME TAX FOR THE FINANCIAL YEAR : %s\n",d.financial_year);
 }
 printf("\n          NAME: %-30s     AGE: %lf \n          PAN : %-30s     NATIONALITY: INDIAN \n",d.name,d.age,d.PAN);
 for(i=0;i<100;i++)
 printf("-");
 printf("\n          INCOME FROM SALARY         : %lf \n",d.i_f_salary);
 printf("          INCOME FROM PROPERTY       : %lf \n",d.i_f_property);
 printf("          INCOME FROM BUSINESS       : %lf \n",d.i_f_business);
 printf("          INCOME FROM GAINS          : %lf \n",d.i_f_gains);
 printf("          INCOME FROM OTHER SOURCES  : %lf \n",d.i_f_othersources);
 printf("         ..............................................\n");
 printf("          GROSS INCOME               : %lf \n",d.gross);
 printf("         ...............................................\n");
 for(i=0;i<100;i++)
 printf("-");
 printf("\n          DEDUCTION ON LIFE INSURANCE                    : %lf \n",d.d_o_life_insurance);
 printf("          DEDUCTION ON PENSION ALLOWANCE                 : %lf \n",d.d_o_pension_allowance);
 printf("          DEDUCTION ON INTEREST OF BANK SAVINGS ACCOUNT  : %lf \n",d.d_o_i_o_bank_savings_acc);
 printf("          DEDUCTION ON INTEREST OF EDUCATION LOAN        : %lf \n",d.d_o_i_o_eduloan);
 printf("          DEDUCTION ON INTEREST OF HOME LOAN             : %lf \n",d.d_o_i_o_homeloan);
 printf("          DEDUCTION ON MEDICAL INSURANCE                 : %lf \n",d.d_o_medical_insurance);
 printf("          DEDUCTION ON MEDICAL EXPENDITURE               : %lf \n",d.d_o_medical_expenditure);
 printf("          DEDUCTION ON CONTRIBUTION TO POLITICAL PARTY   : %lf \n",d.d_o_contribution_to_political_party);
 printf("          .................................................................\n\n");
 printf("           TOTAL DEDUCTIONS                               : %lf \n",d.t_deductions);
 printf("          .................................................................\n");
 for(i=0;i<100;i++)
 printf("-");
 printf("\n          TAXABLE INCOME: %lf \n\n",d.taxable_income);
 printf("           ....................................\n");
 printf("            INCOME TAX: %lf\n",d.income_tax);
 printf("            ...................................\n");
 for(i=0;i<100;i++)
 printf("-");
 return d;

}