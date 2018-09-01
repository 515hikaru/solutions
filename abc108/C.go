package main

import (
	"fmt"
)

func main() {
	var N, K int
	fmt.Scan(&N)
	fmt.Scan(&K)
	count := 0
	if K%2 != 0 {
		for a := K; a < N+1; a += K {
			count++
		}
		fmt.Println(count * count * count)
	} else {
		var ord int
		var irr int
		for a := 1; a < N+1; a++ {
			if a%K == 0 {
				ord++
			} else if a%(K/2) == 0 {
				irr++
			}
		}
		fmt.Println(irr*irr*irr + ord*ord*ord)
	}
}
