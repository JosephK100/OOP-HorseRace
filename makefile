main: main.o Horse.o Race.o
    g++ main.o Horse.o Race.o -o main

main.o: main.cpp Horse.h Race.h
    g++ -c main.cpp

Horse.o: Horse.cpp Horse.h
    g++ -c Horse.cpp

Race.o: Race.cpp Race.h Horse.h
    g++ -c Race.cpp

   
