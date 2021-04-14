PROJECT=income_tax_calculator
PROJECT_TEST=test_income_tax_calculator
SRC=src/input_details.c\
src/gross_income.c\
src/deductions.c\
src/tax.c\
src/report_generator.c
MAIN=main.c
INC=-I inc
INC_T=-I unity
TEST_SRC=unity/unity.c
TEST=test/test_income_tax_calculator.c
ifdef OS
   DEL = del /q
   EXE = exe
else
   ifeq ($(shell uname), Linux)
      DEL = rm -rf
	  EXE = out
   endif
endif   
$(PROJECT): $(SRC) $(MAIN)
	gcc $(INC) $(SRC) $(MAIN) -o $(PROJECT).$(EXE)
run: $(PROJECT).$(EXE)
	./$(PROJECT).$(EXE)	
test: $(SRC) $(TEST_SRC) $(TEST)
	gcc $(INC) $(INC_T) $(SRC) $(TEST_SRC) $(TEST) -o $(PROJECT_TEST).$(EXE)
cppcheck:
	cppcheck --enable=all $(SRC) $(MAIN)
debug:
	gcc $(INC) $(SRC) $(MAIN) -g -o $(PROJECT).$(EXEC)
	gdb $(PROJECT).$(EXE)

valgrind:
	valgrind ./$(PROJECT_TEST).$(EXE)


clean:
	$(DEL) *.$(EXE)
