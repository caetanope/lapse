CXX ?= g++ 
CXXFLAGS += -lpthread -Wall -c $(shell pkg-config --cflags opencv) -std=c++14
LDFLAGS += $(shell pkg-config --libs openssl x11 --static opencv)

all: opencv

opencv: \
	opencv.o;\
	$(CXX) $^ -o $@ $(LDFLAGS)
#	test.o\

%.o: %.cpp; $(CXX) $< -o $@ $(CXXFLAGS)

clean: ; rm -f *.o opencv
