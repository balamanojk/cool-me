/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <This file contains the program to analyze the data and print it >
 *
 * <This program reads the data of the array and calculates the mean, median, maximum and minimun values of the data and prints the data in descendiang order >
 *
 * @author <Manoj Kumar>
 * @date <10/30/2018 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
   print_statistics(test,SIZE);
   print_array(test,SIZE);

}

/* Add other Implementdtion File Code Here */
void print_statistics(unsigned char *ptr, unsigned int size){
	        int i,min,mean,median,max;
        unsigned char copy[size];
        for(i=0; i<size; i++){
		copy[i] = ptr[i];
	}
	sort_array(copy,size);
	min=find_minimum(copy,size);
	max=find_maximum(copy,size);
	median=find_median(copy,size);
	mean=find_mean(copy,size);



/*to print the sorted data*/
	printf("\n");
	printf("the sorted Array is: ");
	for( i=size-1; i>=0; i--){
		printf("%d ", copy[i]);
	}

	printf("\nMinimum is: %d", min);
	printf("\nMean is: %d", mean);
	printf("\nMedian is: %d", median);
	printf("\nMaximum is: %d", max);

}







/* Function to print array*/
void print_array(unsigned char *ptr, unsigned int size){
	int i;
	printf("Given Array is: ");
	for(int i=0; i<size;i++)
	{
		printf("%d ", ptr[i]);
	}
}


unsigned char find_minimum(unsigned char *ptr, unsigned int size){
	int i=0, min;
	if(i==0)
	{
		min= *ptr;
	}
	while(i<size)
	{
		if(*ptr<min)
		{
			min=*ptr;
		}
		i++;
		ptr++;
	}
	return min;
}

/* Function to fing max value in the data*/

unsigned char find_maximum(unsigned char *ptr, unsigned int size) {
	int i=0;
       int max;
	if (i==0) {
		max= *ptr;
	}
	while(i<size){
		if(*ptr>max){
			max=*ptr;
		}
		i++;
		ptr++;
	}
	return max;
}


/* Function to find the mean value from the given set*/
unsigned char find_mean(unsigned char *ptr, unsigned int size){

	int i=0, mean=0;

    if(ptr== NULL) {
        return 0;
    }

    if(size<=0) {
        size=1;
    }

    for(i=0;i<size;i++) {
        mean +=*ptr;
        ptr++;
    }

    return (mean/size);

}



/*Function to Find the median value*/
unsigned char find_median(unsigned char *ptr, unsigned int size){

  int med;
  if(size%2==0) {
      med = (ptr[size/2]+ptr[(size/2)-1])/2;
  }
  else {
      med = ptr[size/2];
  }


  return med;
}

/*function to Sort the Array*/
void sort_array(unsigned char *ptr, unsigned int size){

	int i,j;
    unsigned char temp;
    for( i=1; i<size; i++ ) {
        for( j=0; j<size-i; j++ ) {
            if(*(ptr+j)>=*(ptr+j+1)){
		     temp=*(ptr+j);
		     *(ptr+j)=*(ptr+j+1);
		      *(ptr+j+1)=temp;
	    }
       	}
    }
}

