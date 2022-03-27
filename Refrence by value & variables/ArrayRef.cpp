#include<iostream>

using namespace std;

int main(){

    int arr [5] = {1, 2, 3}; 
    
    /* Stack and Heap memoery

    what is stack memory and heap memory

    */

   int k = 5;

   /* This is the stack memory where The allocation 
   happens on contiguous blocks of memory. We call it
    a stack memory allocation because the allocation happens 
    in the function call stack. The size of memory to be allocated
    is known to the compiler and whenever a function is called, 
    its variables get memory allocated on the stack. And whenever
    the function call is over, the memory for the variables is de-allocated.
    This all happens using some predefined routines in the compiler. A programmer 
    does not have to worry about memory allocation and de-allocation of stack
    variables. This kind of memory allocation also known as Temporary memory 
    allocation because as soon as the method finishes its execution all the 
    data belongs to that method flushes out from the stack automatically. 
    Means, any value stored in the stack memory scheme is accessible as 
    long as the method hasn’t completed its execution and currently in running state.
    */
   // All these variables get memory
   // allocated on stack
   int a;
   int b[10];
   int n = 20;
   int c[n];

   /*
   Heap Allocation: The memory is allocated during the execution of instructions 
   written by programmers. Note that the name heap has nothing to do with the 
   heap data structure. It is called heap because it is a pile of memory 
   space available to programmers to allocated and de-allocate. 
   Every time when we made an object it always creates in Heap-space 
   and the referencing information to these objects are always 
   stored in Stack-memory. Heap memory allocation isn’t as 
   safe as Stack memory allocation was because the data stored 
   in this space is accessible or visible to all threads. If a 
   programmer does not handle this memory well, a memory leak can happen in the program.
   */

   // This memory for 10 integers
   // is allocated on heap.
   int *ptr  = new int[10];

   // If the value is given to the heap memory then we have to terminate that memory ourself only so 
   // for that we have to use keyword

   //// Release memory pointed by pointer-variable
    // Syntax delete pointer-variable;   

    delete [] ptr; 


    return 0;
}