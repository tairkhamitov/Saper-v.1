CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = src
BUILD = build

TARGET = $(BUILD)/minesweeper
OBJS = $(BUILD)/main.o $(BUILD)/game.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(BUILD)/main.o: $(SRC)/main.c $(SRC)/game.h | $(BUILD)
	$(CC) $(CFLAGS) -c $(SRC)/main.c -o $(BUILD)/main.o

$(BUILD)/game.o: $(SRC)/game.c $(SRC)/game.h | $(BUILD)
	$(CC) $(CFLAGS) -c $(SRC)/game.c -o $(BUILD)/game.o

$(BUILD):
	mkdir -p $(BUILD)

clean:
	rm -rf $(BUILD)