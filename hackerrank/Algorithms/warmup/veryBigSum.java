import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

/* Author: Janaky Murthy*/
public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        long sum=0;
        int n = s.nextInt();
        for(int i=0;i<n;i++) sum+=s.nextLong();
        System.out.println(sum);
    }
}