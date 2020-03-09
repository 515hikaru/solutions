package main

import (
	"fmt"
	"strconv"
)

func fizzbuzz(n int) string {
	s := ""
	flg := false
	if n%2 == 0 {
		s += "a"
		flg = true
	}
	if n%3 == 0 {
		s += "b"
		flg = true
	}
	if n%4 == 0 {
		s += "c"
	}
	if n%5 == 0 {
		s += "d"
		flg = true
	}
	if n%6 == 0 {
		s += "e"
	}
	if flg {
		return s
	} else {
		return strconv.Itoa(n)
	}
}

func main() {
	var n int
	fmt.Scan(&n)
	for i := 1; i <= n; i++ {
		fmt.Println(fizzbuzz(i))
	}
}
