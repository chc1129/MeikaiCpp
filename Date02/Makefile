CC = g++
CFLAGS = -g -Wall
#OBJS = Date.o DateTest1.o
OBJS = Date.o DateTest2.o
TARGET = date

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET)
