// $G $D/$F.go && $L $F.$A && ./$A.out 2>&1 | cmp - $D/$F.out

// Copyright 2010 The Go Authors.  All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

package main

func main() {
	defer println(42, true, false, true, 1.5, "world", (chan int)(nil), []int(nil), (map[string]int)(nil), (func())(nil), byte(255))
	defer println(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20)
//	defer panic("dead")
	defer print("printing: ")
}
