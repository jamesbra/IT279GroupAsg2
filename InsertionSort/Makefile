SortMain: InsertionSort.o LinkedList.o SortMain.o
	g++ InsertionSort.o LinkedList.o SortMain.o -o SortMain
InsertionSort.o: InsertionSort.cpp
	g++ -c InsertionSort.cpp
SortMain.o: SortMain.cpp
	g++ -c SortMain.cpp
LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp
clean:
	rm *.o SortMain