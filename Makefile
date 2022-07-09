all:
	g++ -Isrc\include -Lsrc\lib -o main main.cpp Game.cpp -lmingw32 -lSDL2main -lSDL2