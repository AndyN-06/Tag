CC=g++
CFLAGS = -std=c++17 -Wall - Wextra

default: main

main : main.cpp
	$(CC) main.cpp -o main -IC:\\Users\\andre\\OneDrive\\Desktop\\Tag\\SFML-2.6.0\\include -LC:\\Users\\andre\\OneDrive\\Desktop\\Tag\\SFML-2.6.0\\lib -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f main

.PHONY: all clean