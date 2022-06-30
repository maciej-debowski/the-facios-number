package main

import (
	"fmt"
	"math"
)

func f(x int64) int64 {

	if x > 0 {
		return int64(math.Pow(float64(x), float64(f(x-1))))
	}

	return x

}

func main() {
	fmt.Println(f(4))
}
