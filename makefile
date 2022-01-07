compile: main.c 
	 gcc main.c -o big

run: big
	 ./big

clean: big
	 rm big