// Selection sort

fn sort(arr: &mut [i32]) {
    let len = arr.len();
    for i in 0..len {
        let mut temp = i;
        for j in (i+1)..len {
            if arr[temp] > arr[j] {
                temp = j;
            }
        }
        arr.swap(i, temp);
    }
}


fn main () {
    let mut test_arr:[i32; 7] = [7, 4, 1, 2, 0, 9, 6];
    println!("{:?}", test_arr);
    sort(&mut test_arr);
    println!("{:?}", test_arr);
}