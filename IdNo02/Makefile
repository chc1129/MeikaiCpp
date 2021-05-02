CC = g++
CFLAGS = -g -Wall
OBJS = IdNo.o IdNoTest.o
TARGET = idno

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET)
