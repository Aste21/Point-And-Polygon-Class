# List your *.h files (if you do not have them in your project then leave the variable "headers" empty):
headers = Point.h Polygon.h

# List your *.c files:
sources = Point.cpp Polygon.cpp TestPolygon.cpp


# Specify name of your program:
executable = Point

$(executable): $(headers) $(sources)
	g++ -g -Wall -pedantic $(sources) -o $(executable)

.PHONY: clean
clean:
	rm $(executable)

.PHONY: check
check: $(executable)
	valgrind --leak-check=full --track-origins=yes ./$(executable)