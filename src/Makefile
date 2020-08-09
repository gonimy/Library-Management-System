output: main.o func.o header.o library.o library_cpp.o book.o book_cpp.o  
	g++ main.o func.o book.o book_cpp.o  header.o library.o library_cpp.o -o output



main.o: 
	g++ -c main.cpp 

func.o:
	g++ -c func.cpp

book.o:
	g++ -c book.h


book_cpp.o:
	g++ -c book.cpp

header.o:
	 g++ -c header.h

library.o:
	g++ -c library.h


library_cpp.o:
	g++ -c library.cpp


clean:
	rm *.o output