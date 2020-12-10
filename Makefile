a17_1: Gaddis_17_1_YourOwnLL_Driver.o Gaddis_17_1_YourOwnLL_Implementation.o
	g++ Gaddis_17_1_YourOwnLL_Implementation.o Gaddis_17_1_YourOwnLL_Driver.o -o a17_1

Gaddis_17_1_YourOwnLL_Implementation.o: Gaddis_17_1_YourOwnLL_Implementation.cpp Gaddis_17_1_YourOwnLL_Specification.h
	g++ -Wall -ansi -pedantic -std=c++11 -c Gaddis_17_1_YourOwnLL_Implementation.cpp

Gaddis_17_1_YourOwnLL_Driver.o: Gaddis_17_1_YourOwnLL_Driver.cpp Gaddis_17_1_YourOwnLL_Specification.h
	g++ -Wall -ansi -pedantic -std=c++11 -c Gaddis_17_1_YourOwnLL_Driver.cpp

cleanall:
	@rm a17_1 *.o 
