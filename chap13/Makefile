CC = g++
CFLAGS = -g -Wall
OBJS = Point2D.o Point2DTest.o
TARGET = point2d

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET)
