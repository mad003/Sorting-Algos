package Java;

public class MergeSort {

    public static void main(String[] args) {
        int []nums = {5,2,6,1,4,-1,2,22,12,1,-10,-13,-32};
        mergeSort(nums,0,nums.length - 1);
        for(int i : nums){
            System.out.print(i + " ");
        }
    }

    public static void mergeSort(int []nums, int left, int right){
        if(left < right){
            int mid = (right + left) / 2;
            mergeSort(nums,left,mid);
            mergeSort(nums,mid + 1,right);
            merge(nums,left,mid,right);
        }
    }

    public static void merge(int []nums,int start,int mid,int end){
        int n1 = mid - start + 1, n2 = end - mid;
        int []L = new int[n1];
        int []R = new int[n2];
        // dividing array into left and right
        for(int i = 0;i < n1;i++)
            L[i] = nums[start + i];

        for(int j = 0;j < n2;j++)
            R[j] = nums[mid + j + 1];

        // merging the two left and right sorted arrays
        int i = 0,j = 0;
        int k = start;
        while(i < n1 && j < n2){
            if(L[i] <= R[j])
                nums[k++] = L[i++];
            else{
                nums[k++] = R[j++];
            }

        }
        while(i < n1){
            nums[k++] = L[i++];
        }

        while(j < n2){
            nums[k++] = R[j++];
        }

    }


}
