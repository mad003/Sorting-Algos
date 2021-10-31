package main

import "fmt"

func main() {

  
    len := 0
    fmt.Print("Enter the number of elements in array : ")
    fmt.Scanln(&len)
    input := make([]int, len)
    for i := 0; i < len; i++ {
        fmt.Print("Enter a number : ")
        fmt.Scanf("%d", &input[i])
    }
    insertionSort(input)
}

func insertionSort(arr []int) {
    len := len(arr)
    for i := 1; i < len; i++ {
        for j := 0; j < i; j++ {
            if arr[j] > arr[i] {
                arr[j], arr[i] = arr[i], arr[j]
            }
        }
    }
  fmt.Print("Sorted Array : ")
    for _, val := range arr {
        fmt.Print(val," ")
    }
}
