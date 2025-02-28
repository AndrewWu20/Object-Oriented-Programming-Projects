CC=g++
C_FLAGS=-g -std=c++17 -Wall -O3 #use -O0 for milestone 1 and -O3

SRC_FILES=$(filter-out $(wildcard main.cpp),$(wildcard *.cpp))
APP=test

custom_tests:
	$(CC) $(C_FLAGS) $(SRC_FILES) main.cpp -o $(APP)

valgrind:
	valgrind --leak-check=full ./$(APP) $(TEST)

clean: 
	rm -f $(APP)