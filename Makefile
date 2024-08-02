all: run_tests


run_tests: compile_tests
	-@ ./main.out

compile_tests:
	-@ g++ ./src/lib.cpp ./src/lib.h ./tests/main.h ./tests/main.cpp -o ./main.out
