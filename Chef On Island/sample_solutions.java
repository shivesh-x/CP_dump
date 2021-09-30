/* package codechef; // don't place package name! */

import java.util.Scanner ;
import java.lang.*;
import java.io.*;


/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args)throws java.lang.Exception
	{
	    
	    Scanner sc = new Scanner(System.in);
	    try{
	    int T = sc.nextInt();
	    while(T>0){
	    int x = sc.nextInt();
	    int y = sc.nextInt();
	    int xr = sc.nextInt();
	    int yr = sc.nextInt();
	    int D = sc.nextInt();
	    int i =1;
	    
	   
	    Double a = new Double(x/xr);
	    Double b = new Double(y/yr);
	        
	    if(D<=Math.min(a,b))
	        {
	            System.out.println("YES");
	        }
	    else{
	            System.out.println("NO");
	        }
	    }
	    }
	    catch(Exception e){
	        return;
	    }
	    
}
    
}
