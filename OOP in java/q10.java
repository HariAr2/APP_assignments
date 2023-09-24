/*
 * Object-Oriented Programming Paradigm
 * 
 * 
 * Create two different packages to compute bubblesort and selection sort. Write a Java
 * program to implement sorting functions in a single class.
 * 
 * 
 */
import java.util.Arrays;
import bubblesort.Bubblesort;
import selectionsort.SelectionSort;

public class q10 {
    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        
        System.out.println("Original Array: " + Arrays.toString(arr));

        int[] bubbleSortedArr = Arrays.copyOf(arr, arr.length);
        Bubblesort.sort(bubbleSortedArr);
        System.out.println("Bubble Sorted Array: " + Arrays.toString(bubbleSortedArr));

        int[] selectionSortedArr = Arrays.copyOf(arr, arr.length);
        SelectionSort.sort(selectionSortedArr);
        System.out.println("Selection Sorted Array: " + Arrays.toString(selectionSortedArr));
    }
}
