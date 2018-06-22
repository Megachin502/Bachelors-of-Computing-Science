//********************************************************************
//  Test2.java        Java Foundations
//
//  Solution to Programming Project 1.2 
//********************************************************************

public class Test2
{
   //-----------------------------------------------------------------
   //  Tests various modifications to the program.
   //-----------------------------------------------------------------
   public static void main (String[] args)
   {
      System.out.println ("An Emergency Broadcast");
   }
}
//
//  a. Change Test to test
//
//     The compiler produces the bytecode file name based on the
//     class name (not the source code file name), so the bytecode
//     file name has a lower case t.
//
//  b. Change Emergency to emergency
//
//     The program compiles fine, and when executed prints the word
//     emergency with a lower case e.
//
//  c. Remove the first quotation mark in the string literal
//
//     The compiler produces an error: String not terminated at end
//     of line. It interpreted the last quote as the beginning of
//     a new string literal.
//
//  d. Remove the last quotation mark in the string literal
//
//     The compiler produces the same error as in part c.
//
//  e. Change main to man
//
//     The program compiles, but when submitted to the interpreter
//     it complains that the main method could not be found.
//
//  f. Change println to bogus
//
//     The compiler produces an error that says method bogus is not
//     found in class java.io.PrintStream.
//
//  g. Remove the semicolon at the end of the println statement
//
//     The compiler produces an error indicating that there is a
//     semicolon missing at the end of the println statement.
//
//  h. Remove the last brace in the program
//
//     The compiler produces an error indicating that there should
//     be a brace at the end of the program.
//
