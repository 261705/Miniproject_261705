#include "header.h"
#include<stdio.h>
details deductions(details d)
{
if (d.life_insurance >0)
d.d_o_life_insurance=150000;
if (d.pension_allowance>0)
{
 if (((d.i_f_salary*(0.1))<(d.gross*(0.2)))&&((d.i_f_salary*(0.1))<150000))
 d.d_o_pension_allowance=d.i_f_salary*(0.1);
 else if (((d.gross*(0.2))<(d.i_f_salary*(0.1)))&&((d.gross*(0.2))<150000))
 d.d_o_pension_allowance=d.gross*(0.2);
 else 
 d.d_o_pension_allowance=150000;
}
if (d.i_o_bank_savings_acc>0)
{
    if (d.i_o_bank_savings_acc<10000)
    d.d_o_i_o_bank_savings_acc=d.i_o_bank_savings_acc;
    else
    d.d_o_i_o_bank_savings_acc=10000;
}
if (d.i_o_eduloan>0)
d.d_o_i_o_eduloan=d.i_o_eduloan;
if(d.i_o_homeloan>0)
d.d_o_i_o_homeloan=d.i_o_homeloan;
if(d.medical_insurance>0)
d.d_o_medical_insurance=25000;
if(d.medical_expenditure>0)
{
    if(d.age<=60)
    {
        if(d.medical_expenditure<40000)
        d.d_o_medical_expenditure=d.medical_expenditure;
        else
        d.d_o_medical_expenditure=40000;
    }
    else
    {
        if(d.medical_expenditure<100000)
        d.d_o_medical_expenditure=d.medical_expenditure;
        else
        d.d_o_medical_expenditure=100000;
    }
}
if(d.contribution_to_political_party>0)
d.d_o_contribution_to_political_party=d.contribution_to_political_party;
d.t_deductions=d.d_o_life_insurance+d.d_o_pension_allowance+d.d_o_i_o_bank_savings_acc+d.d_o_i_o_eduloan+d.d_o_i_o_homeloan+d.d_o_medical_insurance+d.d_o_medical_expenditure+d.d_o_contribution_to_political_party;
if(d.t_deductions<0)
d.t_deductions=ZERO_DEDUCTIONS;
return d;

}