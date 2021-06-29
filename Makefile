
all: queue

queue: queue.o demo.o
	$(CC) $^ -o $@

clean:
	rm -rf queue *.o