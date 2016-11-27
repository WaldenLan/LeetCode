CCC = gcc
CCFLAGS = -Wall
LIBS =  
LLIBS = 
LFIG_SRC = 
LFIG_OBJ = $(LFIG_SRC:.c=.o)
LFIG = 
LHOME_SRC = 
LHOME_OBJ = $(LHOME_SRC:.c=.o)
LHOME = 
EXTRA_SRC = 
MAIN_SRC = atoi.c
MAIN = main
.PHONY: clean hlibs

all: $(MAIN) 
	@echo $(MAIN) successfully constructed

$(MAIN): $(MAIN_SRC) 
	$(CCC) $(CCFLAGS) -o $(MAIN) $(MAIN_SRC) $(EXTRA_SRC)

.c.o:
	$(CCC) $(CCFLAGS) -c $< -o $@ 

clean: 
	$(RM) *.o *.a *~ $(MAIN)
