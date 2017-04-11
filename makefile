
default : Main.o Complex.o
	g++ Main.o Complex.o -o out

Main.o: Main.cpp
	g++ -c Main.cpp

Complex.o: Complex.cpp
	g++ -c Complex.cpp

# CLEAN
clean :
	rm *.o out -r
