package main

import (
	"fmt"
)

func main() {
	var n, x int
	var a [10000]int
	var d [10000]int
	fmt.Scan(&n)
	fmt.Scan(&x)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	for i := 0; i < n-1; i++ {
		d[i] = a[i+1] - a[i]
	}

}
