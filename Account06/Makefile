CC = g++
CFLAGS = -g -Wall
OBJS = Account.o AccountTest.o Date.o
TARGET = account

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET)
