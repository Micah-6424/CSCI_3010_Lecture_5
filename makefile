CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic #-DCATCH_PLATFORM_MAC -D__aarch64__# flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

all: main

main: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o main

clean: 
	rm main