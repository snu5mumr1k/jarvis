all:
	mkdir -p bin
	g++ -std=c++1z -I src src/core/*.cpp src/main.cpp src/sources/*.cpp -o bin/jarvis
