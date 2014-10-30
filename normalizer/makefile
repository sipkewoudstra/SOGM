CC = g++
CFLAGS =
all: normalizer
	
normalizer: normalizer.o normalizerclass.o
	$(CC) -o $@ $(CFLAGS) normalizer.o normalizerclass.o -lsndfile
.cpp.o:
	$(CC) -c $< $(CFLAGS)

clean:
	rm -f *.o
	rm -f `find . -perm +111 -type f`
