CC = g++
CFLAGS =
all: normalizer normalizer2
	
normalizer: normalizer.o
	$(CC) -o $@ $(CFLAGS) normalizer.o -lsndfile

normalizer2: normalizer2.o
	$(CC) -o $@ $(CFLAGS) normalizer2.o -lsndfile
	
.cpp.o:
	$(CC) -c $< $(CFLAGS)

clean:
	rm -f *.o
	rm -f `find . -perm +111 -type f`
