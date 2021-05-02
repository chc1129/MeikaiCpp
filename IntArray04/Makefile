CC = g++
CFLAGS = -g -Wall
OBJS = IntArray.o IntArrayTest.o
TARGET = intarray

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET)
