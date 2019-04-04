package main

import "fmt"

type Stack struct {
	Idx int
	Items []string
}

func (s *Stack) push(item string) {
	s.Items	= append(s.Items, item)
	s.Idx += 1
}

func (s *Stack) pop() string {
	s.Idx -= 1
	return s.Items[s.Idx]
}

func main() {
	s := Stack{}
	fmt.Scan()
	foo := "x"
	bar := "y"
	poyo := "+"

	s.push(foo)
	s.push(bar)
	s.push(poyo)
	fmt.Println(s.pop(), s.pop(), s.pop())
}
