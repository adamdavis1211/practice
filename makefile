practice: driver.o 
	g++ -o practice driver.o

driver.o: driver.cpp list.h linked_list.h
	g++ -c driver.cpp

clean:
	rm *.o practice