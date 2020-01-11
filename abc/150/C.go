// よくわからんけど嘘解法っぽい
// 普通に数えすぎているのに差分をとるとあっているのが、偶然なのか必然なのかわからん

package main

import "fmt"

const (
	n0 = 1
	n1 = 1
	n2 = 2 * n1
	n3 = 3 * n2
	n4 = 4 * n3
	n5 = 5 * n4
	n6 = 6 * n5
	n7 = 7 * n6
)

var frac = [8]int{n0, n1, n2, n3, n4, n5, n6, n7}

func count(n int, A [10]int) int {
	c := 0
	var q []int
	for i := 0; i < n; i++ {
		var p int
		if i == 0 {
			p = A[i] - 1
			//fmt.Printf("p = %d, A[%d] = %d\n", p, i, A[i])
		} else {
			tmp := A[i]
			p = tmp
			for j := 0; j < i; j++ {
				if A[j] < tmp {
					p--
				}
			}
			// fmt.Printf("p = %d, A[%d] = %d\n", p, i, A[i])
		}
		q = append(q, A[i])
		c += p * frac[n-i-1]
		//fmt.Printf("p = %d, frac[%d] = %d, c = %d\n", p, n-i-1, frac[n-i-1], c)
	}
	return c
}

func main() {
	var P, Q [10]int
	var n int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&P[i])
	}
	for i := 0; i < n; i++ {
		fmt.Scan(&Q[i])
	}
	v1 := count(n, P)
	v2 := count(n, Q)
	v := v1 - v2
	if v > 0 {
		fmt.Println(v)
	} else {
		fmt.Println(-v)
	}
}
