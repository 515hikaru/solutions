go: main.go
	cat bar.txt | go run main.go

all: a.out
	cat foo.txt | ./a.out

a.out: main.c
	gcc main.c
