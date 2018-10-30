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
 * @file <Stats.h> 
 * @brief <C program to analyze array of data >
 *
 * <In this program data is analyzed and the detalis like mean, median, maximum and minimum of the data and prints output is descending order>
 *
 * @author <Manoj Kumar>
 * @date <10/30/2018 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/* print_statistics() Declarations and Function Comments here */
void print_statistics(unsigned char *ptr,unsigned int size);

/**
 * @brief <Prints the statistics data of an array>
 *
 * <This function prints the data of the statistics of calculation like Maximum, Minimum, mMean and Median
 * of the given unsigned char array.>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Prints the data present in the Statistics >
 */

void print_array(unsigned char *ptr, unsigned int size);
/* print_Array() Declarations and Function Comments here */

/**
 * @brief <Prints the data present in the array >
 *
 * <This function prints the data presented in the unsorted array.>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Prints the Data set>
 */

unsigned char find_minimum(unsigned char *ptr, unsigned int size);
/* find_minimum() Declarations and Function Comments here */

/**
 * @brief <Finds minimum value present in the given data set>
 *
 * <This function is used to find the minimum value present in the data set.>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Return the minimum value  in the given data set>
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int size);
/* find_maximum Declarations and Function Comments here */

/**
 * @brief <Finds maximum value present in the given data set>
 *
 * <This function is used to find the minimum number present in the given data set>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the minimum char element in the given data set>
 */
unsigned char find_mean(unsigned char *ptr, unsigned int size);
/* find_mean Declarations and Function Comments here */

/**
 * @brief <Finds mean value present in the  given data set>
 *
 * <This function is used to find the mean of the given data set>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the mean of the given data set>
 */
unsigned char find_median(unsigned char *ptr, unsigned int size);
/* find_median Declarations and Function Comments here */

/**
 * @brief <Finds median value of the given data set>
 *
 * <This function is used to find the median value of the given data set>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the median of the given data set>
 */

void sort_array(unsigned char *ptr, unsigned int size);
/* sort_array Declarations and Function Comments here */

/**
 * @brief <Sorts the given data set in descending order>
 *
 * <This function sorts  the which is present in the data and prints the data in the ascending order>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the data set which is sorted>
 */

#endif /* __STATS_H__ */
