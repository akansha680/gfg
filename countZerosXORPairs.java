/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc=new Scanner(System.in);
		StringBuffer sb=new StringBuffer();
		int T=sc.nextInt();
		while(T-->0)
		{
		    int n=sc.nextInt();
		    int count=0;
		 int[] arr=new int[n];
		 for(int i=0;i<n;i++)
		  {
		    arr[i]=sc.nextInt();
		  }
		 for(int i=0;i<n;i++)
		 {
		     for(int j=i+1;j<n;j++)
		     {
		         if((arr[i]^arr[j])==0)
		         {
		             count++;
		         }
		     }
		 }
		 sb.append(count+"\n");
		}
		System.out.print(sb);
	}
}
