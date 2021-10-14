public class SelectionSort {

    public static void selectionSort(int []ar,int n){
        int min_index;
        int temp;
        for(int i = 0;i < n - 1;i++){
            min_index = i;
            for(int j = i + 1;j < n;j++){
                if(ar[min_index] > ar[j])
                    min_index = j;
            }
            temp = ar[i];
            ar[i] = ar[min_index];
            ar[min_index] = temp;
        }
    }


    public static void main(String[] args) {
        int []ar = {64,45,22,-12,-2,0,1,42};
        selectionSort(ar,ar.length);
        // printing array
        for(int i : ar){
            System.out.print(i + " ");
        }
    }
}
