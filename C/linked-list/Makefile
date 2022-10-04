linked_list: dist/main.o dist/linked_list.o
	gcc dist/main.o dist/linked_list.o -o linked_list

dist/main.o: src/main.c
	if [ ! -d "dist" ]; then mkdir dist ; fi
	gcc -c src/main.c
	mv main.o dist/

dist/linked_list.o: src/linked_list.c src/linked_list.h
	if [ ! -d "dist" ]; then mkdir dist ; fi
	gcc -c src/linked_list.c
	mv linked_list.o dist/

clean:
	rm dist/*.o linked_list
