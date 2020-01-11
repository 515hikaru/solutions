package main

import (
	"fmt"
)

func main() {
	var a int
	var b int
	fmt.Scan(&a)
	fmt.Scan(&b)
	prod := a * b
	if prod%2 == 0 {
		fmt.Println("Even")
	} else {
		fmt.Println("Odd")
	}
}
