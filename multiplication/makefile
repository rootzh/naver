CC=g++ --std=c++11
SRCS=multiplication.cpp

OBJS=$(SRCS:.cpp=.o)
EXE=multiplication

all: $(OBJS)
	$(CC) -o $(EXE) $(OBJS)

.cpp.o:
	$(CC) -o $@ -c $<

clean:
	rm $(OBJS) $(EXE)
