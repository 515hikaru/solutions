package main

import "fmt"

const LEN = 100005

type item struct {
	Name string
	Time int
}

type Queue struct {
	head   int
	tail   int
	length int
	items  [LEN]item
}

func (q *Queue) enqueue(x item) {
	q.items[q.tail] = x
	q.tail += 1
	if q.tail == LEN {
		q.tail = 0
	}
}

func (q *Queue) dequeue() item {
	tmp := q.head
	if q.head+1 == LEN {
		q.head = 0
	} else {
		q.head++
	}
	return q.items[tmp]
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func main() {
	var n, q int
	fmt.Scan(&n, &q)
	var items [LEN]item
	queue := &Queue{0, 0, n, items}
	for i := 0; i < n; i++ {
		fmt.Scan(&items[i].Name, &items[i].Time)
		queue.enqueue(items[i])
	}
	var a item
	var totalTime int
	var t int
	queue.head = 0
	queue.tail = n
	for queue.head != queue.tail {
		a = queue.dequeue()

		t = min(q, a.Time)
		a.Time -= t
		totalTime += t
		if a.Time == 0 {
			fmt.Printf("%s %d\n", a.Name, totalTime)
		} else {
			queue.enqueue(a)
		}
	}
}
