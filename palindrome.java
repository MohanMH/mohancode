import java.io.*;
import java.util.*;
  public class Palindrome{
    public static void main(String args[])
      {
        int ans=0,temp,a,input;
        System.out.println("Enter any integer:");
        Scanner sc=new Scanner(System.in);
        input=sc.nextInt();
        temp=input;
        while(input>0)
          {
            a=x%10;
            ans=ans*10+a;
            input=input/10;
          }
          
        if(ans==temp)
          {
          System.out.println("The Given Number Is palindrom.....");
        else
          {
          System.out.println("The Given Number is not Palindrome...");
          }
     }
}     
