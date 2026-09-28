#include <stdio.h>
#include <stdlib.h>

// this code is basic implementation of dynamic arrays / vectors from c++

// making our dynamic array struct, type of "data" element can be whatever you want, it will work
typedef struct {
    int* data;
    size_t size;
    size_t max_capacity;
} DA;

// creating a macro function to add a new element to the last slot of the array
// made it as a macro function so it can be compatible with any type
#define DARR_APPEND(da, value)\
    do{\
        if((da).size >= (da).max_capacity) {\
            if((da).max_capacity == 0) {\
                (da).max_capacity = 128;\
            } else {\
                (da).max_capacity *= 2;\
            }\
            void* temp = realloc((da).data, (da).max_capacity * sizeof(*(da).data));\
            if(temp == NULL) {\
                fprintf(stderr, "couldnt allocate memory for the dynamic array");\
                exit(1);\
            }\
            (da).data = (temp);\
        }\
        (da).data[(da).size++] = (value);\
    } while(0)

// function to free the allocated memory from the heap,
// this could've been done as a normal void function but idk i did it like this now
#define DARR_DESTROY(da) \
    do { \
        free((da).data); \
        (da).data = NULL; \
        (da).size = 0; \
        (da).max_capacity = 0; \
    } while(0)

// function to remove the last element from the array
// example: {1,2,3,4,5} -> {1,2,3,4}
#define DARR_POP(da)\
    do{\
        if((da).size > 0) {\
            (da).size--;\
        }\
    } while(0)

int main() {
    DA da = {0}; // initializing the array / vector 
    for(int i = 0; i < 5; i++) {
        DARR_APPEND(da, i * 2); // calling the append function we implemented above 
    }

    for(size_t i = 0; i < da.size; i++) {
        printf("%d ", da.data[i]); // printing out the contents of our array
    }

    DARR_DESTROY(da); // freeing the memory we allocated for the array so we dont get a memory leak
    return 0;
}
