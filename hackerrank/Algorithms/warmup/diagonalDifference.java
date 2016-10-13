import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int n= s.nextInt();
        int fd=0, sd=0;
        for(int i=0;i<n;i++)
           for(int j=0;j<n;j++)
           {
             int a= s.nextInt();   
             if( i==j) fd+=a;
             if(i+j+1==n) sd+=a;
                 
          }
       
        System.out.println(Math.abs(fd-sd));
    }
}