/* 
 * Object-Oriented Programming Paradigm
 * 
 * Write a Java program to create an interface Sortable with a method sort() that sorts an array
 * of integers in ascending order. Create two classes BubbleSort and SelectionSort that
 * implement the Sortable interface and provide their own implementations of the sort()
 * method.
 * 
 * 
 */

import java.util.Scanner;

interface Sortable {
    void sort(int[] arr);
}

class BubbleSort implements Sortable {
    @Override
    public void sort(int[] arr) {
        int n = arr.length;
        boolean swapped;
        do {
            swapped = false;
            for (int i = 1; i < n; i++) {
                if (arr[i - 1] > arr[i]) {
                    int temp = arr[i - 1];
                    arr[i - 1] = arr[i];
                    arr[i] = temp;
                    swapped = true;
                }
            }
            n--;
        } while (swapped);
    }
}

class SelectionSort implements Sortable {
    @Override
    public void sort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

public class q6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        Sortable bubbleSort = new BubbleSort();
        Sortable selectionSort = new SelectionSort();

        System.out.println("Original Array:");
        printArray(arr);

        bubbleSort.sort(arr);
        System.out.println("\nSorted Array using Bubble Sort:");
        printArray(arr);

        selectionSort.sort(arr);
        System.out.println("\nSorted Array using Selection Sort:");
        printArray(arr);

        scanner.close();
    }

    private static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
