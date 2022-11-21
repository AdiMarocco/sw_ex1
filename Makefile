CC = gcc
CFLAGS = -Wall -g
OBJECT_LOOP = advancedClassificationLoop.o basicClassification.o
OBJECT_REC = advancedClassificationRecursion.o basicClassification.o

.PHONY: all clean loops recursives loopd recursived

all: loops recursives loopd recursived mains maindloop maindrec

loops: libclassloops.a

recursives: libclassrec.a

loopd: libclassloops.so

recursived: libclassrec.so

#static libraries:
libclassloops.a: $(OBJECT_LOOP)
	ar rcs libclassloops.a $(OBJECT_LOOP)

libclassrec.a: $(OBJECT_REC)
	ar rcs libclassrec.a $(OBJECT_REC)

#dynamic libraries:
libclassloops.so: $(OBJECT_LOOP)
	$(CC) -fpic -shared -o libclassloops.so $(OBJECT_LOOP)

libclassrec.so: $(OBJECT_REC)
	$(CC) -fpic -shared -o libclassrec.so $(OBJECT_REC)

#program:
mains: main.o libclassrec.a
	$(CC) $< ./libclassrec.a -lm -o $@

maindloop: main.o libclassloops.so	
	$(CC) $< ./libclassloops.so -lm -o $@

maindrec: main.o libclassrec.so
	$(CC) $< ./libclassrec.so -lm -o $@

#.o files
main.o: main.c NumClass.h
	$(CC) $(CFLAGS)	-c $^

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(CFLAGS)	-c $^ 

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(CFLAGS) -c $^

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f *.o *.so *.a maindloop mains maindrec