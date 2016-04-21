# This Makefile is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

CXX=g++ -std=c++11
# Includes, cflags
INCLUDES=
CXXOPTS=-Wall -g -O2
CXXFLAGS=$(CXXOPTS) $(INCLUDES)
# Libs flags
LDLIBS=
# Binaries
SIBLINGS=test/siblings
SHORTEST_SEQ=test/shortest_seq

# Object
OBJS_SIBLINGS=src/siblings.o
OBJS_SHORTEST_SEQ=src/shortest_seq.o

all: $(SIBLINGS) $(SHORTEST_SEQ)

$(SIBLINGS): $(OBJS_SIBLINGS)
	$(CXX) $(INCLUDES) $^ -o $@ $(LDLIBS)

$(SHORTEST_SEQ): $(OBJS_SHORTEST_SEQ)
	$(CXX) $(INCLUDES) $^ -o $@ $(LDLIBS)

bin/%.o: %.cc
	$(CXX) -c $(CXXFLAGS) $< -o $@ $(LDLIBS)

clean:
	rm -f $(SIBLINGS) $(OBJS_SIBLINGS) $(SHORTEST_SEQ) $(OBJS_SHORTEST_SEQ)