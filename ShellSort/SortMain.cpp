#include <iostream>

#include <fstream>
#include <limits>
#include <iomanip> 
#include "shellSort.cpp"
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc,char * argv[]){
  ifstream inStream;
  ofstream outStream;
  string filename;
  string outfile;
  std::vector<long> tempvec;
  int size = 0;
  
  inStream.open(argv[1]);
  while(inStream.fail()){
    cout<<"Invalid file name"<<endl;
    exit(1);
  }
  outStream.open(argv[2]);
  while(inStream.fail()){
    cout<<"Invalid file name"<<endl;
    exit(1);
  }
  int i;
  cout<<"reading in numbers"<<endl;
  long temp;
  int w = 0;
  inStream>>temp;
  tempvec.push_back(temp);
  w++;
  //testList.insert(temp);
  while(true)
  {
    inStream>>temp;
    if( inStream.eof() ) 
    {
      break;
    }
    tempvec.push_back(temp);
    w++;
    //testList.insert(temp);
    
  }
  size=w;
  long a[size+1];
  for(int i =0;i<size;i++){
	a[i]=tempvec[i];
	//cout<<a[i]<<endl;
  }
  cout<<"sorting..."<<endl;
  shellSort(a,size);
  cout<<"done sorting"<<endl;
   cout<<"writing numbers"<<endl;
  for(int i=0;i<w;i++)
  {
    
    outStream<<a[i]<<"\n"; 
  }
  //cout<<"Numbers in file: "<<testList.getSize()<<endl;
  //cout<<testList[testList.getSize()-1]<<endl;
  //testList.output();
  //cout<<endl;
  inStream.close();
  outStream.close();
  return 0;
};
