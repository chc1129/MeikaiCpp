CC = g++
CFLAGS = -g -Wall
#OBJS = Date.o DateInit.o
OBJS = Date.o DateAssign.o
TARGET = date

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET)
