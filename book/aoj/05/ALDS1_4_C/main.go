package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

const (
	A = iota
	C
	G
	T
)

const (
	M = 1046527
)

var (
	H  [M]string
	sc = bufio.NewScanner(os.Stdin)

)
func getChar(s string) int {
	switch s {
	case "A":
		return A + 1
	case "C":
		return C + 1
	case "G":
		return G + 1
	case "T":
		return T + 1
	default:
		return 0
	}
}

func getKey(s string) int {
	var sum int
	p := 1
	for i := 0; i < len(s); i++ {
		char := string(s[i])
		sum += p * getChar(char)
		p *= 5
	}
	return sum
}

func h1(key int) int { return key % M }
func h2(key int) int { return 1 + (key % (M - 1)) }

func find(s string) bool {
	key := getKey(s)
	var h int
	for i := 0; ; i++ {
		h = (h1(key) + i*h2(key)) % M
		if H[h] == s {
			return true
		} else if len(H[h]) == 0 {
			return false
		}
	}
	return false
}

func insert(s string) bool {
	key := getKey(s)
	var h int
	for i := 0; ; i++ {
		h = (h1(key) + i*h2(key)) % M
		if H[h] == s {
			return true
		} else if len(H[h]) == 0 {
			H[h] = s
			return true
		}
	}
	return false
}

func firstInt() int {
	sc.Scan()
	i, e := strconv.Atoi(sc.Text())
	if e != nil {
		panic(e)
	}
	return i
}

func nextLine() string {
	sc.Scan()
	a := sc.Text()
	return a
}

func main() {
	sc.Split(bufio.ScanWords)
	var n int
	var str, command string
	n = firstInt()
	for i := 0; i < n; i++ {
		// fmt.Scan(&command, &str)
		command = nextLine()
		str = nextLine()
		if string(command[0]) == "i" {
			insert(str)
		} else {
			if find(str) {
				fmt.Println("yes")
			} else {
				fmt.Println("no")
			}
		}
	}
}
