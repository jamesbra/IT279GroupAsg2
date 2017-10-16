#include <iostream>
#include "LinkedList.cpp"
#include <fstream>
#include <limits>
#include <iomanip>
#include "InsertionSort.cpp"

using namespace std;


int main()
{
  ifstream inStream;
  ofstream outStream;
  string filename;
  string outfile;
  list<long> testList;
  
  
  cout<<"Enter name of file to read"<<endl;
  cin>>filename;
  inStream.open(filename.c_str());
  while(inStream.fail())
  {
  cout<<"Invalid file name"<<endl;
  cout<<"Enter name of file to read"<<endl;
  cin>>filename;
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  inStream.open(filename.c_str());
  }
  
  cout<<"Enter name of file to write to"<<endl;
  cin>>outfile;
  outStream.open(outfile.c_str());
  while(inStream.fail())
  {
  cout<<"Invalid file name"<<endl;
  cout<<"Enter name of file to wrtie too"<<endl;
  cin>>outfile;
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  outStream.open(outfile.c_str());
  }
  int i;
  cout<<"reading in numbers"<<endl;
  long temp;
  inStream>>temp;
  testList.insert(temp);
  while(true)
  {
    inStream>>temp;
    if( inStream.eof() ) 
    {
      break;
    }
    testList.insert(temp);

  }
  
  cout<<"sorting..."<<endl;
  insertionSort(testList);
  cout<<"done sorting"<<endl;
   cout<<"writing numbers"<<endl;
  for(int i=0;i<testList.getSize();i++)
  {
    outStream<<testList[i]<<"\n"; 
  }
  
  //cout<<"Numbers in file: "<<testList.getSize()<<endl;
  //cout<<testList[testList.getSize()-1]<<endl;
  //testList.output();
  //cout<<endl;
  inStream.close();
  outStream.close();
  return 0;
};
