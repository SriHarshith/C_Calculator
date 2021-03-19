#Makefile syntax
#TARGET : dependency
#tab space command

PROJECT = calc.out #.exe for windows #PROJECT is a variable for all dependent files
SRC = test.c\
src/sum.c\
src/sub.c\
src/mul.c\
src/div.c

HEAD = header
INC = unity
TEST = unity/unity.c


$(PROJECT): $(SRC) $(TEST) $(INC)
	gcc -I $(HEAD) -I $(INC) $(SRC) $(TEST) -o calc.out

run: $(PROJECT)
	./$(PROJECT)

clean:
	rm -f *.out
	
	
	#del /q *.out


#make command for compiling all files 
#make run command for running a file