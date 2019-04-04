package main

import "testing"

func TestStackInitial(t *testing.T) {
	s := Stack{}
	if s.Idx != 0 {
		t.Errorf("s.Idx is expected 0, but got=%d", s.Idx)
	}
}

func TestPushSomeItem(t *testing.T) {
	s := Stack{}
	s.push("foo")
	if s.Items[0] != "foo" {
		t.Errorf("s.Items[0] is expected \"foo\", got=%s", s.Items[0])
	}
	if s.Idx!= 1 {
		t.Errorf("s.Idx is expected 1, got=%d", s.Idx)
	}
	s.push("bar")
	if s.Items[1] != "bar" {
		t.Errorf("s.Items[1] is expected \"foo\", got=%s", s.Items[1])
	}
	if s.Idx!= 2 {
		t.Errorf("s.Idx is expected 2, got=%d", s.Idx)
	}
}
