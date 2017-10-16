#ifndef INSSORT
#define INSSORT

#include <iostream>
#include "LinkedList.cpp"

inline void insertionSort(list<long> &tempList)
{
  for(int i=0;i<tempList.getSize();i++)
  {
    if(i%(tempList.getSize()/10) == 0)
    {
      std::cout<<"Position: "<<i<<std::endl;
    }
      long temp = tempList[i];
      //the innner for loop happens here. I do it inside the linked list class
      //in order to traverse the linked list more efficiently. The special search
      //searches for the location that the given value needs to be inseerted
      //the second paramerter tells the search how far it has to search through
      int location = tempList.specialSearch(temp,i);
      tempList.remove(i);
      tempList.insert(temp,location); 
  }
}
  




#endif
