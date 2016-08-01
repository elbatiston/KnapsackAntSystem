IDIR=.
CC=mpicc
CFLAGS=-I$(IDIR) -Wall -Wextra -pedantic -g -O2 -std=c11

 
ODIR=./obj

LIBS=-lm 

_DEPS = util.h item.h knapsack.h ant.h const.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

OBJNAMES = main.o item.o knapsack.o ant.o comm_protocol.o
OBJ = $(patsubst %,$(ODIR)/%,$(OBJNAMES))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
