all: add-nbo

add-nbo:
	g++ -o add-nbo add-nbo.c

clean:
	rm -f add-nbo
	rm -f *.bin
