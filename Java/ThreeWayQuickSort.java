/** autor: Edimar Chaves Jr.
 * 29/10/2021 23:12:47
 *
 * @param <T> T is a generic comparable type (Integer for exemple)
 *
 * The Three way quicksort it is an optimized version of traditional quicksort
 * this one deals better with several occurrences of elements equal to the pivot.
 **/

public class ThreeWayQuickSort<T extends Comparable<T>> {

    public void sort(T[] array, int l, int r) {

        if (l < r) this.partition(array, l, r);

    }

    private void partition(T[] array, int l, int r) {

        if (l < r) {

            int start = l;
            int end = r;
            int i = l;
            T pivot = array[l];

            while (i <= end) {

                if (array[i].compareTo(pivot) < 0) {

                    this.swap(array, start, i);
                    start++;
                    i++;

                } else if (array[i].compareTo(pivot) > 0) {

                    this.swap(array, i, end);
                    end--;

                } else i++;

            }

            sort(array, l, start - 1);
            sort(array, end + 1, r);

        }
    }

    private void swap(T[] array, int i, int j){
        T temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}