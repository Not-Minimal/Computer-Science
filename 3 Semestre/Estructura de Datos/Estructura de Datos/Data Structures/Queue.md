A queue is a useful data structure in programming. It is similar to the ticket queue outside a cinema hall, where the first person entering the queue is the first person who gets the ticket.

Queue follows the **First In First Out (FIFO)** rule - the item that goes in first is the item that comes out first.

![[queue.png]]

In the above image, since 1 was kept in the queue before 2, it is the first to be removed from the queue as well. It follows the #FIFO rule.

In programming terms, putting items in the queue is called **enqueue**, and removing items from the queue is called **dequeue**.

## Basic Operations of Queue

A queue is an object (an abstract data structure - ADT) that allows the following operations:

- **Enqueue**: Add an element to the end of the queue
- **Dequeue**: Remove an element from the front of the queue
- **IsEmpty**: Check if the queue is empty
- **IsFull**: Check if the queue is full
- **Peek**: Get the value of the front of the queue without removing it

## Working of Queue

Queue operations work as follows:

-   two pointers FRONT and REAR
-   FRONT track the first element of the queue
-   REAR track the last element of the queue
-   initially, set value of FRONT and REAR to -1

### Enqueue Operation

-   check if the queue is full
-   for the first element, set the value of FRONT to 0
-   increase the REAR index by 1
-   add the new element in the position pointed to by REAR

### Dequeue Operation

-   check if the queue is empty
-   return the value pointed by FRONT
-   increase the FRONT index by 1
-   for the last element, reset the values of FRONT and REAR to -1

![[queue-2.png]]

## Queue Implementations in Golang

We usually use arrays to implement queues.

```go
package main

import (
	"fmt"
)

type Event struct {
	Name  string
	Body  string
	Index int
}

const queueLimit = 4

func main() {
	var queue []Event
	indexes := []int{1, 2, 3, 4, 5}

	for _, index := range indexes {
		queue = Enqueue(queue, Event{
			Name:  "Queue Event",
			Body:  "Hello world",
			Index: index,
		})
	}

	fmt.Println("BEFORE DEQUEUE")
	fmt.Println(queue)
	queue = Dequeue(queue)
	fmt.Println("AFTER DEQUEUE")
	fmt.Println(queue)
	Peek(queue)
}

func Enqueue(queue []Event, event Event) []Event {
	queue = append(queue, event)
	fmt.Println("new event enqueued ", event.Index)
	return queue
}

func Dequeue(queue []Event) []Event {
	element := queue[0]
	fmt.Println("an event dequeued: ", element.Index)
	return queue[:len(queue)-1]
}

func Peek(queue []Event) Event {
	element := queue[len(queue)-1]
	fmt.Println("an event peeked: ", element.Index)
	return element
}
```

## Applications of Queue

-   CPU scheduling, Disk Scheduling
-   When data is transferred asynchronously between two processes.The queue is used for synchronization. For example: IO Buffers, pipes, file IO, etc
-   Handling of interrupts in real-time systems.
-   Call Center phone systems use Queues to hold people calling them in order.

## Types of Queue

There are four different types of queues:
-   #simple-queue
	In a simple queue, insertion takes place at the rear and removal occurs at the front. It strictly follows the FIFO (First in First out) rule.
	
-   #circular-queue
	In a [[Circular Queue]], the last element points to the first element making a circular link. The main advantage of a circular queue over a simple queue is better memory utilization. If the last position is full and the first position is empty, we can insert an element in the first position. This action is not possible in a simple queue.
	
	![[circular-queue.png]]
	
-   #priority-queue
	A [[Priority Queue]] is a special type of queue in which each element is associated with a priority and is served according to its priority. If elements with the same priority occur, they are served according to their order in the queue. Insertion occurs based on the arrival of the values and removal occurs based on priority.

 ![[priority-queue.png]]
 
-   #double-ended-queue
	In a [[Double Queue]], insertion and removal of elements can be performed from either from the front or rear. Thus, it does not follow the FIFO (First In First Out) rule.
	
![[double-queue.png]]

[[DequeSearching problem]]
