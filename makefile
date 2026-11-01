phonebook: main.o insert.o print.o find.o delete.o edit.o save_sync_sll.o
	gcc main.o insert.o print.o find.o delete.o edit.o save_sync_sll.o -o phonebook

main.o: main.c header.h
	gcc -c main.c

insert.o: insert.c header.h
	gcc -c insert.c

print.o: print.c header.h
	gcc -c print.c

find.o: find.c header.h
	gcc -c find.c

delete.o: delete.c header.h
	gcc -c delete.c

edit.o: edit.c header.h
	gcc -c edit.c

save_sync_sll.o: save_sync_sll.c header.h
	gcc -c save_sync_sll.c

clean: 
	rm -f *.o phonebook
