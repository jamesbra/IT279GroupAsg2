#include <iostream>
#include <stdlib.h>
#include <stdio.h>      
#include <math.h>  
using namespace std;
//simple method that is used get the gap at 'x'
int gap(int x){
    int temp =0;
    temp = (((9*(pow(4,x)))-(9*(pow(2,x))))+1);
    return temp;
}
//method that takes the size and array, then sorts the array with shell sort
void shellSort(long a[] , int size){
    //building the array of gaps    
    int u=0;
    int gaps[11];
    for(int i = 10;i>=0;i--){
        gaps[u]=gap(i);
        u++;
    }
    //going through each gap, where the final one is a standard insertion sort
    for(int i = 0; i<11;i++){
	//insertion sort using the gap from the for loop above
        for(int q=gaps[i];q<size;q++){
            //temporary declarations
	    long temp;
	    int z;   
            for(z=q-gaps[i]; z>=0 && a[z]>a[z+gaps[i]];z-=gaps[i]){
		//where all the movement happens
		temp=a[z];
		a[z]=a[z+gaps[i]];
		a[z+gaps[i]]=temp;
	    } 
        }
    }
}
