package main

import (
	"fmt"
	"sort"
)

func main() {
	var L, N int
	var W [10000]int
	fmt.Scan(&L)
	fmt.Scan(&N)
	for i := 0; i < N; i++ {
		fmt.Scan(&W[i])
	}
	w := W[:N]
	sort.Ints(w)
	sum := 0
	c := 0
	for i := 0; i < N; i++ {
		if sum+W[i] > L {
			break
		}
		sum += W[i]
		c++
	}
	fmt.Println(c)
}
