# Define the compiler
CC = gcc

# Define the compiler flags (e.g., for warnings)
CFLAGS = -Wall -Wextra

# Define the source file and executable name
SRC = calculator.c
TARGET = calculator

# The main rule: build the executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Rule to clean up generated files
clean:
	rm -f $(TARGET)