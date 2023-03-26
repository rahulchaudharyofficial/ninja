CC=gcc
CFLAG=-Wall -g -o0
LIB_COMMAND=ar -rc

INIT=init

SRCDIR=src
OBJDIR=obj
LIBDIR=lib
BINDIR=bin

TEST=tests
TESTBIN=$(TEST)/bin
TESTS=$(wildcard $(TEST)/*.c)
TESTBINS=$(patsubst $(TEST)/%.c,$(TESTBIN)/%, $(TESTS))



BIN=$(BINDIR)/main
LIB=$(LIBDIR)/algos.a

VPATH=$(SRCDIR)

SOURCE=$(wildcard $(SRCDIR)/*.c)
OBJECT=$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o, $(SOURCE))



all: $(LIB) $(BIN)

$(INIT):
	@mkdir -p -v obj
	@mkdir -p -v bin
	@mkdir -p -v lib
	@mkdir -p -v $(TEST)/bin

$(BIN): $(OBJECT)
	$(CC) $(CFLAG) $(OBJECT) -o $@ -lm

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAG) -c $< -o $@

$(LIB): $(INIT) $(BIN)
	$(LIB_COMMAND) $(LIB) $(OBJECT)

.PHONY: run
.PHONY: clean

run: $(BIN)
	./$(BIN)


clean:
	if [ -d "$(OBJDIR)" ]; then \
		rm -rfv $(OBJDIR); \
	fi \

	if [ -d "$(LIBDIR)" ]; then \
		rm -rfv $(LIBDIR); \
	fi \
<<<<<<< HEAD

	if [ -d "$(TESTBIN)" ]; then \
		rm -rfv $(TESTBIN); \
	fi \

=======
	
	if [ -d "$(TESTBIN)" ]; then \
		rm -rfv $(TESTBIN); \
	fi \
	
>>>>>>> 3c20bd05421635ea547c5e38dd32d0ca96f7f26d
	if [ -d "$(BINDIR)" ]; then \
		rm -rfv $(BINDIR); \
	fi \

$(TESTBIN)/%: $(TEST)/%.c
	$(CC) $(CFLAG) $< $(LIB) -o $@ -lcriterion -lm

test: $(LIB) $(TESTBIN) $(TESTBINS)
	for t in $(TESTBINS) ; do ./$$t --verbose ; done

$(TESTBIN):
<<<<<<< HEAD
	mkdir $@
=======
	mkdir $@
>>>>>>> 3c20bd05421635ea547c5e38dd32d0ca96f7f26d
