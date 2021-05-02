CC = g++
CFLAGS = -g -Wall
OBJS = VerId.o VerIdTest.o
TARGET = verid

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET)
