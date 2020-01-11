package main

import (
	"fmt"
)

func main() {
	var a int
	fmt.Scan(&a)
	var b, c int
	fmt.Scan(&b)
	fmt.Scan(&c)
	var s string
	fmt.Scan(&s)
	fmt.Printf("%d %s\n", a+b+c, s)
}
