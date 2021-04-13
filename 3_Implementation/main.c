#include<stdio.h>
#include<stdlib.h>
#include "header.h"
int main()
{
    char name[30],financial_year[10],PAN[10];
    double age,i_f_salary,i_f_property,i_f_business,i_f_gains,i_f_othersources,life_insurance,pension_allowance,i_o_bank_savings_acc,i_o_eduloan,i_o_homeloan,medical_insurance,medical_expenditure,contribution_to_political_party;
    details *emp_details=(details *)malloc(sizeof(details));
    printf("ENTER NAME:");
    scanf("%s",&name);
    printf("\nENTER FINANCIAL YEAR:");
    scanf("%s",&financial_year);
    printf("\nENTER PAN NUMBER:");
    scanf("%s",&PAN);
    printf("\nENTER AGE:");
    scanf("%lf",&age);
    printf("\nENTER INCOME FROM SALARY:");
    scanf("%lf",&i_f_salary);
    printf("\nENTER INCOME FROM PROPERT:");
    scanf("%lf",&i_f_property);
    printf("\nENTER INCOME FROM BUSINESS:");
    scanf("%lf",&i_f_business);
    printf("\nENTER INCOME FROM GAINS:");
    scanf("%lf",&i_f_gains);
    printf("\nENTER INCOME FROM OTHER SOURCES:");
    scanf("%lf",&i_f_othersources);
    printf("\nENTER LIFE INSURANCE PREMIUM PAID:");
    scanf("%lf",&life_insurance);
    printf("\nENTER MONEY PAID FOR PENSION ALLOWANCE:");
    scanf("%lf",&pension_allowance);
    printf("\nENTER INTEREST GOT FROM SAVINGS BANK ACCOUNT:");
    scanf("%lf",&i_o_bank_savings_acc);
    printf("\nENTER INTEREST PAID ON EDUCATION LOAN:");
    scanf("%lf",&i_o_eduloan);
    printf("\nENTER INTEREST PAID ON HOME LOAN:");
    scanf("%lf",&i_o_homeloan);
    printf("\nENTER MEDICAL INSURANCE PREMIUM PAID:");
    scanf("%lf",&medical_insurance);
    printf("\nENTER MEDICAL EXPENDITURE:");
    scanf("%lf",&medical_expenditure);
    printf("\nENTER CONTRIBUTION TO POLITICAL PARTY:");
    scanf("%lf",&contribution_to_political_party);
    *emp_details=input_details(*emp_details,name,financial_year,PAN,age,i_f_salary,i_f_property,i_f_business,i_f_gains,i_f_othersources,life_insurance,pension_allowance,i_o_bank_savings_acc,i_o_eduloan,i_o_homeloan,medical_insurance,medical_expenditure,contribution_to_political_party);
    details (*fun_ptr) (details);
    fun_ptr=&gross_income;
    *emp_details=(*fun_ptr)(*emp_details);
    fun_ptr=&deductions;
    *emp_details=(*fun_ptr)(*emp_details);
    fun_ptr=&tax;
    *emp_details=(*fun_ptr)(*emp_details);
    fun_ptr=&report_generator;
    *emp_details=(*fun_ptr)(*emp_details);
    free(emp_details);
    return 0;

}