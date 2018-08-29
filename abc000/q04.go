package main

import (
	"fmt"
)

func chkAllEven(a [200]int, n int) ([200]int, bool) {
	even := true
	for i := 0; i < n; i++ {
		if a[i]%2 != 0 {
			even = false
			break
		}
		a[i] = a[i] / 2
	}
	return a, even
}

func main() {
	var n int
	var a [200]int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	c := 0
	even := true
	for {
		a, even = chkAllEven(a, n)
		if even == false {
			break
		}
		c++
	}
	fmt.Println(c)
}
