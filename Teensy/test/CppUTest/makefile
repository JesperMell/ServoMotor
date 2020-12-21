CC = g++
LD_LIBRARIES += -L$(CPPUTEST_HOME)/lib -lCppUTest -lCppUTestExt


test: test.o
	$(CC) test.cpp -o test $(LD_LIBRARIES)

clean:
	rm test
