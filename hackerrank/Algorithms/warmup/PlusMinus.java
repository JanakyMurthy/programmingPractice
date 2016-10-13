import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

/* Author: Janaky Murthy */

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        float posCount =0, negCount=0, zeroCount =0;
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        for(int i=0;i<n;i++)
        {
            int a = s.nextInt();
            if(a==0) zeroCount++;
            else if(a>0) posCount++;
            else negCount++;
        }
        System.out.printf("%.3f\n",posCount/n);
        System.out.printf("%.3f\n",negCount/n);
        System.out.printf("%.3f\n",zeroCount/n);
    }
}