EXECUTABLE := bin/test_pthread
LIBS := -l pthread

CFLAGS := -g -Wall -DDEBUG
CXXFLAGS := $(CFLAGS) -fpic

target : $(EXECUTABLE)

SOURCE := $(wildcard *.c) $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,%.o,$(patsubst %.c,%.o,$(SOURCE)))

.PHONY : clean
clean :
	@rm -f $(OBJS) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJS)
	g++ $(CXXFLAGS) $(LIBS) -o $(EXECUTABLE) $(OBJS)

