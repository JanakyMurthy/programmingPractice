

import java.util.*;
import java.lang.*;
import java.io.*;

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

/* Author: Janaky Murthy*/

class Solution {

    public static void main(String[] args) throws IOException{
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in) );
        String s = br.readLine();
        if(Solution.isPanagram(s))
            System.out.println("pangram");
        else System.out.println("not pangram");
    }
   static   boolean isPanagram(String s) // brute force O(n) algorithm
	{
		int count =0;
		boolean charset[] = new boolean[26];
		for(int i=0; i<26; i++) charset[i]=false;
		int l=s.length();
		for(int i=0; i<l && count<=26 ; i++)
		{
		
			char c = s.charAt(i);
			if( c >='a' && c<='z')
			{	if(charset[c-'a']!= true) 
				{
				
					charset[c-'a']=true;
					count++;
				
				}
			}
			else if ( c>='A' && c<='Z')
				if(charset[c-'A']!= true) 
				{
				
					charset[c-'A']=true;
					count++;
				}
		}
		if(count == 26) return true;
		else return false;
	}
}