# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |To verify input of name|  taxpayer |taxpayer|taxpayer|Requirement based |
|  H_02       |To verify input of financial year | 2018 | 2018 |2018|Requirment based    |
|  H_03       |To verify input of PAN | br326r66 | br326r66 | br326r66 |Requirment based    |
|  H_04       |To verify input of age | 27 | 27 | 27 |Requirment based    |
|  H_05       |To verify input of income from salary | 400000 | 400000 | 400000 |Requirment based    | 
|  H_06       |To verify input of income from property | 250000 | 250000 | 250000 |Requirment based    |
|  H_07       |To verify input of income from business | 350000 | 350000 | 350000 |Requirment based    |
|  H_08       |To verify input of income from gains | 375625 | 375625 | 375626 |Requirment based    |
|  H_09       |To verify input of income from other sources | 175000 | 175000 | 175000 |Requirment based    |
|  H_10       |To verify input of life insurance premium | 36000 | 36000 | 36000 |Requirment based    |
|  H_11       |To verify input of pension allowance | 24000 | 24000 | 24000 |Requirment based    |
|  H_12       |To verify input of interest on bank savings account | 54620.335 | 54620.335 | 54620.335 |Requirment based    |
|  H_13       |To verify input of interest on education loan | 44325.75 | 44325.75 | 44325.75 |Requirment based    |
|  H_14       |To verify input of interest on home loan | 65736.50 | 65736.50 | 65736.50 |Requirment based    |
|  H_15       |To verify input of medical insurance premium | 35000 | 35000 | 35000 |Requirment based    |
|  H_16       |To verify input of medical expenditure | 27800 | 27800 | 27800 |Requirment based    |
|  H_17       |To verify input of contribution to political party | 3000 | 3000 | 3000 |Requirment based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | To verify output of gross income function | 1550625 | 1550625 |1550625 |Requirement based |
|  L_02       | To verify output of deductions function | 365862.25 | 365862.25 | 365862.25 |Requirment based    |
|  L_03       | To verify taxable income variable | 1184762.75 | 1184762.75| 1184762.75 |Scenario based    |
|  L_04       | To verify output of tax function | 355428.825 | 355428.825 |355428.825 |Requirement based |
