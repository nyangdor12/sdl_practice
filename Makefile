all:
	g++ -Isrc\include -Lsrc\lib -o main src/*.cpp src/ECS/*.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image