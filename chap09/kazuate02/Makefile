CC = g++
CFLAGS = -g -Wall
OBJS = game.o io.o kazuate.o
TARGET = kazuate

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET)
