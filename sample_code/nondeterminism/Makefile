TARGETS = heap stack overflow uninit datarace
OBJS = heap.o stack.o overflow.o o uninit.o datarace.o
CC = gcc
COPT = -g -std=c99 -w -pthread
LOPT = -pthread

ASANTARGETS = overflow.asan uninit.asan
ASANOBJS = overflow.asan.o uninit.asan.o
ASANOPT = -fsanitize=address

TSANTARGETS = datarace.tsan
TSANOBJS = datarace.tsan.o
TSANOPT = -fPIE -pie -fsanitize=thread

all: $(TARGETS) $(ASANTARGETS) $(TSANTARGETS)

%.o: %.c
	$(CC) -c $(COPT) $< -o $@

%.asan.o: %.c
	$(CC) -c $(COPT) $(ASANOPT) $< -o $@

%.tsan.o: %.c
	$(CC) -c $(COPT) $(TSANOPT) $< -o $@

heap: heap.o
	$(CC) $< $(LOPT) -o $@

stack: stack.o
	$(CC) $< $(LOPT) -o $@

overflow: overflow.o
	$(CC) $< $(LOPT) -o $@

uninit: uninit.o
	$(CC) $< $(LOPT) -o $@

datarace: datarace.o
	$(CC) $< $(LOPT) -o $@

overflow.asan: overflow.asan.o
	$(CC) $< $(LOPT) $(ASANOPT) -o $@

uninit.asan: uninit.asan.o
	$(CC) $< $(LOPT) $(ASANOPT) -o $@

datarace.tsan: datarace.tsan.o
	$(CC) $< $(LOPT) $(TSANOPT) -o $@

clean:
	rm -f $(TARGETS) $(ASANTARGETS) $(TSANTARGETS) $(OBJS) $(ASANOBJS) $(TSANOBJS)
