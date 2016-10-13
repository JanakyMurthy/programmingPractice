import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

/* Author: Janaky Murthy */

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);   
        int n = s.nextInt();
        for(int rows =1;rows <=n; rows++)
        {
            for(int space =1; space <=n-rows ; space++) System.out.print(" ");
            for(int col =1; col<=rows;col++ )System.out.print("#");
            System.out.println();
        }
    }
}