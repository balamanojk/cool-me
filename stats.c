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
/*   print_array(test,SIZE);*/

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
	mean=find_mean(copy,size);
	median=find_median(copy,size);
	max=find_maximum(copy,size);


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

