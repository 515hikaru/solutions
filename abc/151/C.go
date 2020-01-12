package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func nextInt() int {
	sc.Scan()
	sc.Split(bufio.ScanWords)
	i, e := strconv.Atoi(sc.Text())
	if e != nil {
		panic(e)
	}
	return i
}

func nextLine() string {
	sc.Scan()
	return sc.Text()
}

func main() {
	var n, m int
	pmap := map[int]bool{}
	fmt.Scan(&n)
	fmt.Scan(&m)
	var num, ac, wa int
	var ans string
	for i := 0; i < m; i++ {
		num, ans = nextInt(), nextLine()
		val, ok := pmap[num]
		// まだ AC も WA もしてないとき
		if !ok {

			if ans == "AC" {
				pmap[num] = true
				ac++
			} else {
				pmap[num] = false
				wa++
			}
		} else {
			// 既に AC または WA してるとき
			if val {
				// AC 済み
			} else {
				// WA
				if ans == "AC" {
					// 正解した
					pmap[num] = true
					ac++
				} else {
					// ひきつづき不正解
					wa++
				}
			}
		}
	}
	fmt.Printf("%d %d\n", ac, wa)
}
