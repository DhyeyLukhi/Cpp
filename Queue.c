#include <stdio.h>
#define max 100
int queue[max];
int front = 0;
int rear = 0;

int enqueue(int data){
    if (rear == max)
    {
        printf("Queue is overflowed !!!\n");
    }
    else{
        queue[rear] = data;
        rear++;
    }
    
    return 0;
}

int dequeue(){

    queue[front] = 0;
    if (front > rear)
    {
        front = rear = 0;
    }
    else{
        front++;
    }
    
    return 0;
}

int printQueue(){

    for (int i = front; i < rear; i++)
    {
        printf("%d ", queue[i]);
    }
    
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    enqueue(50);
    printQueue();
    return 0;
}