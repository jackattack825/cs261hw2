/* bag2set.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dynArray.h"



/* Converts the input bag into a set using dynamic arrays
	param: 	da -- pointer to a bag
	return value: void
        result: after exiting the function da points to a set
*/
void bag2set(struct DynArr *da)
{
     /* FIX ME */
     int i;
     struct DynArr *arr= newDynArr(da->capacity);
     for(i=0; i< da->size; i++){
       if(containsDynArr(arr, da->data[i])==-1){
        addDynArr(arr, da->data[i]);
        printf("valued added was %f", arr->data[i]);
      }
     }
    deleteDynArr(da);
    da=arr;
}



/* An example how to test your bag2set() */
int main(int argc, char* argv[]){

	int i;
        struct DynArr *da= newDynArr(100);  /* bag */

        /*initDynArr(da, 100);*/
        da->size = 10;
        da->data[0] = 1.3;
	for (i=1;i<da->size;i++){
	    da->data[i] = 1.2;
	 }

        printf("Bag:\n\n");
	for (i=0;i<da->size;i++){
          printf("%g  \n", da->data[i]);
        }

        printf("\n\n\n");
        printf("Set:\n\n");
        bag2set(da);
	for (i=0;i<da->size;i++){
          printf("%g ", da->data[i]);
        }
        printf("\n");

	return 0;
}
