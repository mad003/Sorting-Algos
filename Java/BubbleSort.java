package Java;

public class BubbleSort {
    
    public int[] bubblesort(int[] A){
     int count =0;
     int i=0,j=0;
     int n =A.length;
     for(i=0 ; i<n-1;i++){
         count++;
        System.out.println("Iteration " + count);
        for (j=0 ;j<n-1-i;j++){
            if(A[j]>A[j+1]){
             System.out.print("not swapped =>"+A[j]+ " " +A[j+1]);
             int temp = A[j];
             A[j] = A[j+1];
             A[j+1] =  temp;
             System.out.println(" swapped =>"+ A[j]+" " +A[j+1]);
            }
    
        }
     }
    return A;
    }
    static void printarr(int[] A) 
        { 
            int n = A.length; 
            for (int i=0; i<n;i++) 
                System.out.print(A[i]+" "); 
                System.out.println(); 
        } 
    
        public static void main(String []args){
    
            int []arr = {6,3,4,2,4,1};
    
            BubbleSort bbl1 = new BubbleSort();
            bbl1.bubblesort(arr);
    
            System.out.println("sorted array : ");
            printarr(arr);
        }
    }