BIN=test_shmem

all:$(BIN)

test_shmem: test_shmem.c libshmem.so
	$(CC) -o test_shmem test_shmem.c -L. -lshmem -pthread -g

libshmem.so: shmem.o
	$(CC) -shared -o libshmem.so shmem.o
shmem.o: shmem.c
	$(CC) -c -fPIC shmem.c -g

clean:
	rm $(BIN) libshmem.so *.o
