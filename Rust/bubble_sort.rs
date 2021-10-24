// Bubble Sort

fn sort(arr: &mut [i32]) {
    let len = arr.len();
    for i in 0..len {
        for j in 0..(len - 1 - i) {
            if arr[j] > arr[j+1] {
                arr.swap(j, j+1);
            }
        }
    }
}


fn main () {
    let mut test_arr:[i32; 7] = [7, 4, 1, 2, 0, 9, 6];
    println!("{:?}", test_arr);
    sort(&mut test_arr);
    println!("{:?}", test_arr);
}