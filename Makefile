app: main.o
	g++ main.o -o app -I./src -lsfml-window -lsfml-graphics -lsfml-system

main.o: main.cpp
	g++ -c main.cpp
clean:
	rm *.o app
