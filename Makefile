TARGET = main
OBJS = tool.o main.o
CPPFLAGS = -g
CC = g++

$(TARGET) : $(OBJS) 
	$(CC) -o $(TARGET) $(OBJS) $(CFLAGS)

$(OBJS) : tool.h

tool.o : tool.cpp
mian.o : mian.cpp

clean :
	rm $(OBJS) $(TARGET)
