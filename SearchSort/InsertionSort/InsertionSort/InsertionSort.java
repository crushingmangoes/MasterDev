package SearchSort.InsertionSort;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class InsertionSort {
    
    //Generic class for insertion sort
    static <T extends Comparable<T>> void insertionSort(List<T> array)
    {
        T key = null;
        int j = -1;

        for(int i = 1; i < array.size(); i++)
        {
            //Get the current key to be inserted
            key = array.get(i);

            //Get the index of the last sorted element
            j = i - 1;

            //Loop until we find where to insert the element in the sorted list
            while(j >= 0 && array.get(j).compareTo(key) > 0)
            {
                Collections.swap(array, j, j + 1);
                j -= 1;
            }
        }
    }

    public static void main (String [] args)
    {
        //Test array
        List<Integer> t1 = new ArrayList<>(Arrays.asList(5, 2, 1, 3, 99, 10, 102, 99));

        InsertionSort.insertionSort(t1);

        System.out.println(t1);
    }
}
