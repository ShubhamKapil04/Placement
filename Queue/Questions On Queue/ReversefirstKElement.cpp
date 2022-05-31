// { Driver Code Starts
// Initial Template for C

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include<stack>
using namespace std;

// A structure to represent a queue

struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
};

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
struct Queue* createQueue(unsigned capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    // This is important, see the enqueue
    queue->rear = capacity - 1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Queue is full when size becomes
// equal to the capacity
int isFull_Queue(struct Queue* queue) {
    return (queue->size == queue->capacity);
}

// Queue is empty when size is 0
int isEmpty_Queue(struct Queue* queue) {
    return (queue->size == 0);
}

void enqueue(struct Queue* queue, int item) {
    if (isFull_Queue(queue)) return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}

// Function to remove an item from queue.
// It changes front and size
void dequeue(struct Queue* queue) {
    if (isEmpty_Queue(queue)) return;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
}

// Function to get front of queue
int front(struct Queue* queue) {
    if (isEmpty_Queue(queue)) return INT_MIN;
    return queue->array[queue->front];
}


 // } Driver Code Ends
// User function Template for C

struct Queue *modifyQueue(struct Queue *queue, int n, int k) {
    
    //Step1 Pop first K group from the Q and put into stack
    stack< int > s;
    for(int i = 0; i < k; i++){
        int val = queue.front();
        queue.pop();
        s.push(val);
    }
    
    //Step 2 fetch from satck and put back into Q
    
    while(!s.empty()){
        int val = s.top();
        s.pop();
        queue.push(val);
    }
    
    //Step 3 fatch first (n-k) element from Q and push back into Q
    
    int t = queue.size() - k;
    while(t--){
        int val = queue.front();
        queue.pop();
        queue.push(val);
    }
    
    return queue;
}


// { Driver Code Starts.

// Driver program to test above functions./
int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        int n, k;
        scanf("%d %d", &n, &k);

        struct Queue* queue = createQueue(n + 5);

        for (int i = 0; i < n; i++) {
            int data;
            scanf("%d", &data);
            enqueue(queue, data);
        }

        struct Queue* queue_ans = modifyQueue(queue, n, k);

        while (n--) {
            int data = front(queue_ans);
            dequeue(queue_ans);
            printf("%d ", data);
        }

        printf("\n");
    }
}
  // } Driver Code Ends