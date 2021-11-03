CC=gcc
OBJECT_LIBL= basicClassification.o advancedClassificationLoop.o 
OBJECT_LIBR= basicClassification.o advancedClassificationRecursion.o
AR=ar
FLAGS= -Wall -g

#make all
all: loops recursived recursives loopd mains maindloop maindrec
.PHONY: clean
#make clean
clean: 
	rm -f *.o *.a *.so mains maindloop maindrec

# make loops
loops: libclassloops.a
libclassloops.a: $(OBJECT_LIBL)
	$(AR) -rcs libclassloops.a $(OBJECT_LIBL)
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

# make recursives
recursives: libclassrec.a
libclassrec.a: $(OBJECT_LIBR)
	$(AR) -rcs libclassrec.a $(OBJECT_LIBR)
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

#make loopd
loopd: libclassloops.so
libclassloops.so: $(OBJECT_LIBL)
	$(CC) -shared -o libclassloops.so $(OBJECT_LIBL)

#make recursived
recursived: libclassrec.so
libclassrec.so: $(OBJECT_LIBR)
	$(CC) -shared -o libclassrec.so $(OBJECT_LIBR)

#make mains
mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

#make maindloop
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

#make maindrec
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm

