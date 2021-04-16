/**
 * @file header.h
 * @author Navaneeth Reddy (navaneethgopireddy@gmail.com)
 * @brief A program to calculate income tax of an employee.
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * @brief 
 * enum structure to store frequently used constants
 */
typedef enum error
{
    ZERO_TAX=0,ZERO_DEDUCTIONS=0
}error;
/**
* @breif structure details to store the entire tax details
*/
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
 * @brief it takes user input data from main function and invokes to structure members.
 * @param[in] details structure
 * @param[in] n variable to invoke into structure name variable.
 * @param[in] f variable to be invoked into structure financial_year variable.
 * @param[in] P variable to be invoked into structure PAN variable.
 * @param[in] a variable to be invoked into structure age variable.
 * @param[in] ifg variable to be invoked into structure i_f_salary variable.
 * @param[in] ifp variable to be invoked into structure i_f_property variable.
 * @param[in] ifb variable to be invoked into structure i_f_business variable.
 * @param[in] ifg variable to be invoked into structure i_f_gains variable.
 * @param[in] ifo variable to be invoked into structure i_f_othersources variable.
 * @param[in] ins variable to be invoked into structure life_insurance variable.
 * @param[in] pa variable to be invoked into structure pension_allowance variable.
 * @param[in] iobs variable to be invoked into structure i_o_savings_bank_acc variable.
 * @param[in] ioe variable to be invoked into structure i_o_eduloan variable.
 * @param[in] ioh variable to be invoked into structure i_o_homeloan variable.
 * @param[in] mi variable to be invoked into structure medical_insurance variable.
 * @param[in] me variable to be invoked into structure medical_expenditure variable.
 * @param[in] ctp variable to be invoked into structure contribution_to_political_party variable.
 * @return details 
 */
details input_details(details,char[],char[],char[],double,double,double,double,double,double,double,double,double,double,double,double,double,double);
/**
 * @brief function that calculates gross income of an employee
 * 
 * @return details 
 */
details gross_income(details);
/**
 * @brief function that calculates deductions of an employee
 * 
 * @return details 
 */
details deductions(details);
/**
 * @brief function that calculates tax of an employee.
 * 
 * @return details 
 */
details tax(details);
/**
 * @brief function that generates report of tax details.
 * 
 * @return details 
 */
details report_generator(details);
/**
 * @brief function that used to test gross_income function.
 * 
 * @return details 
 */
void test_gross_income(void);
/**
 * @brief function used to test deductions function.
 * 
 * @return details 
 */
void test_deductions(void);
/**
 * @brief function used to test tax function.
 * 
 * @return details 
 */
void test_tax(void);
/**
 * @brief fumction used to test input_details function.
 * 
 * @return details 
 */
void test_input_details(void);



