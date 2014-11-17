CC = g++
CFLAGS =
all: normalizer
	
normalizer: normalizer.o
	$(CC) -o $@ $(CFLAGS) normalizer.o -lsndfile
	
.cpp.o:
	$(CC) -c $< $(CFLAGS)

clean:
	rm -f *.o
	rm -f `find . -perm +111 -type f`
