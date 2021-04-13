/**
 * @file header.h
 * @author Navaneeth Reddy (navaneethgopireddy@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * @brief 
 * 
 */
typedef enum error
{
    ZERO_TAX=0,ZERO_DEDUCTIONS=0
}error;
typedef struct details
{
char name[30];
char financial_year[10];
char PAN[10];
double age;
double i_f_salary;
double i_f_property;
double i_f_business;
double i_f_gains;
double i_f_othersources;
double gross;
double life_insurance;
double pension_allowance;
double i_o_bank_savings_acc;
double i_o_eduloan;
double i_o_homeloan;
double medical_insurance;
double medical_expenditure;
double contribution_to_political_party;
double d_o_life_insurance;
double d_o_pension_allowance;
double d_o_i_o_bank_savings_acc;
double d_o_i_o_eduloan;
double d_o_i_o_homeloan;
double d_o_medical_insurance;
double d_o_medical_expenditure;
double d_o_contribution_to_political_party;
double t_deductions;
double taxable_income;
double income_tax;
} details;
/**
 * @brief 
 * 
 * @return details 
 */
details input_details(details,char[],char[],char[],double,double,double,double,double,double,double,double,double,double,double,double,double,double);
/**
 * @brief 
 * 
 * @return details 
 */
details gross_income(details);
/**
 * @brief 
 * 
 * @return details 
 */
details deductions(details);
/**
 * @brief 
 * 
 * @return details 
 */
details tax(details);
/**
 * @brief 
 * 
 * @return details 
 */
details report_generator(details);
/**
 * @brief 
 * 
 * @return details 
 */
void test_gross_income(void);
/**
 * @brief 
 * 
 * @return details 
 */
void test_deductions(void);
/**
 * @brief 
 * 
 * @return details 
 */
void test_tax(void);
/**
 * @brief 
 * 
 * @return details 
 */
void test_input_details(void);



