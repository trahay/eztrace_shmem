# Copyright (C) CNRS, INRIA, Université Bordeaux 1, Télécom SudParis
# See COPYING in top-level directory.

prefix=/home/trahay/Soft/opt/eztrace_master/install
exec_prefix=${prefix}
libdir=${exec_prefix}/lib
includedir=${prefix}/include

BIN = libeztrace-convert-shmem.so libeztrace-shmem.so libeztrace-autostart-shmem.so

ldflags=$(LDFLAGS)  -L${libdir} 
cflags=$(CFLAGS) -I$(includedir) -DGTG_OUT_OF_ORDER -DTID_RECORDING_ENABLED -I${includedir} -D_GNU_SOURCE

CONVERT_LDFLAGS=-L$(libdir)
RECORD_LDFLAGS=-L$(libdir)

all: $(BIN)

libeztrace-convert-shmem.so: eztrace_convert_shmem.c shmem_ev_codes.h
	$(CC) --shared -o libeztrace-convert-shmem.so eztrace_convert_shmem.c -fPIC $(cflags) $(ldflags) $(CONVERT_LDFLAGS) -ldl

libeztrace-shmem.so: shmem.c shmem_ev_codes.h
	$(CC) --shared -o libeztrace-shmem.so shmem.c -fPIC $(cflags) $(ldflags) -Wl,-Bsymbolic $(RECORD_LDFLAGS) -ldl

libeztrace-autostart-shmem.so: shmem.c shmem_ev_codes.h
	$(CC) --shared -o libeztrace-autostart-shmem.so shmem.c -fPIC $(cflags) $(ldflags) -Wl,-Bsymbolic $(RECORD_LDFLAGS) -ldl -DEZTRACE_AUTOSTART

clean:
	rm -f $(BIN)
