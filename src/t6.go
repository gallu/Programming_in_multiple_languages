package main

import "fmt"

func hoge(i int) int {
	return i * 2
}

func main() {
	i := hoge(10)
	fmt.Println("return is", i)
}
