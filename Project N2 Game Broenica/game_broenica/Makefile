CC=gcc
COMPILE=$(CC) -g
CFILES=$(find \s *.c*)
OBJECT=main.o func.o
TARGET=broenica_game
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	rm $(TARGET) $(OBJECT)