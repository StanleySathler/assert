FILE=assert
SRC_FILE=src/$(FILE)
LIB_FILE=lib/lib$(FILE)

lib: src/$(FILE).o
	mkdir -p lib
	gcc -c -o $(SRC_FILE).o $(SRC_FILE).c
	ar -cvq $(LIB_FILE).a $(SRC_FILE).o
	cp $(SRC_FILE).h lib/$(FILE).h
