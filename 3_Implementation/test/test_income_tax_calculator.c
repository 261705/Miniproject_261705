#include "header.h"
#include "unity.h"
#include "unity_internals.h"
#include<stdlib.h>
void setUp()
{}
void tearDown()
{} 
void test_input_details(void)
{
 details *d=(details*)malloc(sizeof(details));
 *d=input_details(*d,"taxpayer","2018","br326r66",27,400000,250000,350000,375625,175000,36000,24000,54620.335,44325.750,65736.50,35000,27800,3000);
 TEST_ASSERT_EQUAL_STRING("taxpayer",d->name);
 TEST_ASSERT_EQUAL_STRING("2018",d->financial_year);
 TEST_ASSERT_EQUAL_STRING("br326r66",d->PAN);
 TEST_ASSERT_EQUAL(27.000000,d->age);
 TEST_ASSERT_EQUAL(400000.000000,d->i_f_salary);
 TEST_ASSERT_EQUAL(250000.000000,d->i_f_property);
 TEST_ASSERT_EQUAL(350000.000000,d->i_f_business);
 TEST_ASSERT_EQUAL(375625.000000,d->i_f_gains);
 TEST_ASSERT_EQUAL(175000.000000,d->i_f_othersources);
 TEST_ASSERT_EQUAL(36000.000000,d->life_insurance);
 TEST_ASSERT_EQUAL(24000.000000,d->pension_allowance);
 TEST_ASSERT_EQUAL(54620.335000,d->i_o_bank_savings_acc);
 TEST_ASSERT_EQUAL(44325.750000,d->i_o_eduloan);
 TEST_ASSERT_EQUAL(65736.500000,d->i_o_homeloan);
 TEST_ASSERT_EQUAL(35000.000000,d->medical_insurance);
 TEST_ASSERT_EQUAL(27800.000000,d->medical_expenditure);
 TEST_ASSERT_EQUAL(3000.000000,d->contribution_to_political_party);
 free(d);
}
void test_gross_income(void)
{
 details *d=(details*)malloc(sizeof(details));
 *d=input_details(*d,"taxpayer","2018","br326r66",27,400000,250000,350000,375625,175000,36000,24000,54620.335,44325.750,65736.50,35000,27800,3000);
 *d=gross_income(*d);
 TEST_ASSERT_EQUAL(1550625.000000,d->gross);
 free(d);
}
void test_deductions(void)
{
details *d=(details*)malloc(sizeof(details));
 *d=input_details(*d,"taxpayer","2018","br326r66",27,400000,250000,350000,375625,175000,36000,24000,54620.335,44325.750,65736.50,35000,27800,3000);
 *d=gross_income(*d);
 *d=deductions(*d);
 TEST_ASSERT_EQUAL(365862.250000,d->t_deductions);
 free(d);
}
void test_tax(void)
{
details *d=(details*)malloc(sizeof(details));
 *d=input_details(*d,"taxpayer","2018","br326r66",27,400000,250000,350000,375625,175000,36000,24000,54620.335,44325.750,65736.50,35000,27800,3000);
 *d=gross_income(*d);
 *d=deductions(*d);
 *d=tax(*d);
 TEST_ASSERT_EQUAL(1184762.750000,d->taxable_income);
 TEST_ASSERT_EQUAL(355428.825000,d->income_tax);
 free(d);
}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_input_details);
    RUN_TEST(test_gross_income);
    RUN_TEST(test_deductions);
    RUN_TEST(test_tax);
    return UNITY_END();
}