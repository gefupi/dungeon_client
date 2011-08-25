OBJS = new-dungeonclient.o tcp_connector.o
CC = gcc
LD = gcc
CC_FLAGS = -Wall -Wextra -c
LD_FLAGS = -Wall -Wextra -o

new-dungeonclient: $(OBJS)
	$(LD) $(LD_FLAGS) new-dungeonclient $(OBJS) 

new-dungeonclient.o: new-dungeonclient.c\
                     tcp_connector.h
	$(CC) $(CC_FLAGS) new-dungeonclient.c

tcp_connector.o: tcp_connector.c tcp_connector.h
	$(CC) $(CC_FLAGS) tcp_connector.c

all: new-dungeonclient

new:
	make clean
	clear
	make all

clean:
	rm -f *.o *~ new-dungeonclient

 
