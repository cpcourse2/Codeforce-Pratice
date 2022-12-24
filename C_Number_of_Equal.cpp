#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    int t;
    cin>>t;

    void solved();
    while(t--){
        solved();
    }
 }

 void solved(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        
    }
 }


//  2
//  3 4 
//  4 5

// import java.util.*;
// import java.lang.*;
// import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		int ar[] = new int[T];
		
		String temp=sc.nextLine(); // Important difference - taking that end character as input..
		
		for(int i=0;i<T;i++){
		    String s =sc.nextLine();
		    String[] st=s.split(" ");   
            //This approach is highly appreciable but it is not recommended , so take these integers as input using nextInt()..
		    
		  /* Why it didn't work for your code : Basically after taking testcases ( integer ) as input -
		   you'll have a "\n" nextLine character in the first line - so you need to take that character also into consideration take that as input before 
		   going to these testcases.. ( As we did in line 12 ) */
		 
    	   // System.out.println(Arrays.toString(st));
    	   // System.out.println(st[0]+" "+st[1]);
    	   
    	    int a=Integer.parseInt(st[0]);
    	    int b=Integer.parseInt(st[1]);
    	    System.out.println(b-a);
		}
	}
}






