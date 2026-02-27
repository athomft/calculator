CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
TARGET = calculator

$(TARGET): calculator.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) calculator.cpp

.PHONY: clean
clean:
	rm -f $(TARGET) $(TARGET).exe
