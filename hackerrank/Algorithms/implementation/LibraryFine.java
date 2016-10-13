import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

/* Author: Janaky Murthy*/

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int fine;
        Scanner s = new Scanner(System.in);
        int time[] = new int[6];
        for(int i=0;i<6;i++) time[i]= s.nextInt();
        if( time[2] < time[5]) fine =0;
        else if( time[2] == time[5] && time[1] < time[4]) fine =0;
      
        else if( time[2] == time[5] && time[1] <= time[4] && time[0] <= time[3] ) fine =0;
        else if(time[2] == time[5] && time[1]==time[4]) fine = (time[0] - time[3])*15;
         else if(time[2] == time[5] ) fine = (time[1] - time[4])*500;
          else fine =10000;
            
            System.out.println(fine);
    }
}