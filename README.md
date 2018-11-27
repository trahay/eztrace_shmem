# eztrace_shmem
eztrace plugin for the SHMem API


# prerequisite

You need to have eztrace installed. See http://eztrace.gforge.inria.fr.

# installing

Modify the `Makefile` and change the `prefix` to eztrace installation path, and type `make`

# How do I use this ?

Once installed, you need to set the EZTRACE_LIBRARY_PATH environment variable:

```
export EZTRACE_LIBRARY_PATH=$PWD
```

You should then see the plugin in eztrace:

```
$ eztrace_avail
3       stdio   Module for stdio functions (read, write, select, poll, etc.)
2       pthread Module for PThread synchronization functions (mutex, semaphore, spinlock, etc.)
[...]
136     shmem   module for the shmem API
```

If so, you can run the application with:

```
$ eztrace -t shmem ./appli arg1 arg2...
```

## Enabling tracing

By default, the plugin profiles the application calls to SHMem. To trace (instead of profiling), set the `EZT_SHMEM_TRACE` variable:

```
export EZT_SHMEM_TRACE=1
$ eztrace -t shmem ./appli arg1 arg2...
[EZTrace SHMem] Tracing is enabled
```