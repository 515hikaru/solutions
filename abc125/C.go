package main

import "fmt"

func gcd(a, b int) int {
	if a < b {
		a, b = b, a
	}
	if b == 0 {
		return a
	}
	return gcd(b, a%b)
}

func main() {
	var n int
	fmt.Scan(&n)
	as := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&as[i])
	}
	left := make([]int, n)
	right := make([]int, n)
	left[0] = 0
	right[n-1] = 0
	for i := 1; i < n; i++ {
		left[i] = gcd(left[i-1], as[i-1])
	}
	for i := n - 2; i >= 0; i-- {
		right[i] = gcd(right[i+1], as[i+1])
	}
	m := 1
	for i := 0; i < n ; i ++ {
		mm := gcd(left[i], right[i])
		if mm > m {
			m = mm
		}
	}
	fmt.Println(m)
}
