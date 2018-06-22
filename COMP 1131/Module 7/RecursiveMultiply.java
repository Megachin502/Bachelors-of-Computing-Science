//********************************************************************
//  RecursiveMultiply.java       Java Foundations
//
//  Solution to Exercise 11.3
//********************************************************************

public class RecursiveMultiply
{
   //-----------------------------------------------------------------
   //  Performs integer multiplication recursively
   //-----------------------------------------------------------------
   public static void main (String args[])
   {
      System.out.print ("1 * 1 is ");
      System.out.println (mult(1,1));

      System.out.print ("1 * 7 is ");
      System.out.println (mult(1,7));

      System.out.print ("6 * 7 is ");
      System.out.println (mult(6,7));

      System.out.print ("42 * 7 is ");
      System.out.println (mult(42,7));
   }

   public static int mult (int i, int j)
   {
   	  int result;
      if (i == 1)
       	result = j;
   	  else
   	    result = j + mult(i-1, j);
      return result;
   }
}
