#include "header.h"
#include<string.h>
details input_details(details d,char n[30],char f[10],char P[10],double a,double ifs,double ifp,double ifb,double ifg,double ifo,double ins,double pa,double iobs,double ioe,double ioh,double mi,double me,double ctp)
{
 strcpy(d.name,n);
 strcpy(d.financial_year,f);
 strcpy(d.PAN,P);
 d.age=a;
 d.i_f_salary=ifs;
 d.i_f_property=ifp;
 d.i_f_business=ifb;
 d.i_f_gains=ifg;
 d.i_f_othersources=ifo;
 d.life_insurance=ins;
 d.pension_allowance=pa;
 d.i_o_bank_savings_acc=iobs;
 d.i_o_eduloan=ioe;
 d.i_o_homeloan=ioh;
 d.medical_insurance=mi;
 d.medical_expenditure=me;
 d.contribution_to_political_party=ctp;
 return d;

}