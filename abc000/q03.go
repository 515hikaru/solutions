package main

import (
	"fmt"
)

func main() {
	var s string
	fmt.Scan(&s)
	c := 0
	for _, w := range s {
		if w == '1' {
			c++
		}
	}
	fmt.Println(c)
}
