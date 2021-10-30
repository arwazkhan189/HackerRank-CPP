package com.company;

import java.util.Arrays;

public class arr_pr_14 {
    public static void main(String[] args) {
        int [ ] arr1  =  {2,5,6,8,9,3,0};//initializing
        int [ ] arr2 =  {3,5,9,3,4,8,1};

        System.out.println("original array 1 is: " + Arrays.toString(arr1));
        System.out.println("original array 1 is: " + Arrays.toString(arr2));// changing to string

        for (int i : arr1) { //for each loop
            for (int j : arr2) {
                if (i == j) {
                    System.out.println("duplicate array is: " + i);
                }
            }
        }
    }
}
