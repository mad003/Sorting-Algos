import java.util.*;

public class CombSort
{

    int getNextGap(int gap)
    {
        
        gap = (gap*10)/13;
        if (gap < 1)
            return 1;
        return gap;
    }
 
    
    void sort(int arr[])
    {
        int n = arr.length;
 
        
        int gap = n;
 
        
        boolean swap = true;
 
        
        while (gap != 1 || swap == true)
        {
            
            gap = getNextGap(gap);
            swap = false;
 
            
            for (int i=0; i<n-gap; i++)
            {
                if (arr[i] > arr[i+gap])
                {
                    
                    int temp = arr[i];
                    arr[i] = arr[i+gap];
                    arr[i+gap] = temp;
 
                   
                    swap = true;
                }
            }
        }
    }
    // Driver method
    public static void main(String args[])
    {
        CombSort ob = new CombSort();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i =0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        
        ob.sort(arr);

        for (int i=0; i<arr.length; ++i)
            System.out.print(arr[i] + " ");
 
    }
}