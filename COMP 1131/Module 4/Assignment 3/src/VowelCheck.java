/*HiLoGame.java
 * 
 * Elvis Lam, T00610439
 * Comp 1131
 * Assignment 3
 * Question 2.	Design and implement an application that reads a string from the user, then determines and displays how many (of each) vowels (a, e, i, o, and u) appear in the entire string. Have a separate counter for each vowel. Also count and print the number of non-vowel characters. The logic must include a switch-case structure to determine which counter to increment.
Hint: Use the charAt method of the String class to examine each character of the input. 
Testing: Build a test plan separately so you can predict and show that your program is working correctly. You need to determine a selection of inputs, such as something with no vowels, only a single letter “a,” etc. A key requirement is to prove that each counter is functioning independently.
 * */
import java.util.*;
public class VowelCheck {
	public static void main (String[] args){
		System.out.print("Input string: ");
		Scanner scan = new Scanner(System.in);
		String text = scan.nextLine();
		text = text.toLowerCase();
		int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0,i = 0,j = 0,k = 0,l = 0,m = 0,n = 0,o = 0,p = 0,q = 0,r = 0,s = 0,t = 0,u = 0,v = 0,w = 0,y = 0,x = 0,z = 0;
		for(int counter =0;counter<text.length();counter++){
			//Checks all the characters one by one and increments its counter
			switch (text.charAt(counter)){
			case 'a':
				a++;
				break;
			case 'b':
				b++;
				break;
			case 'c':
				c++;
				break;
			case 'd':
				d++;
				break;
			case 'e':
				e++;
				break;
			case 'f':
				f++;
				break;
			case 'g':
				g++;
				break;
			case 'h':
				h++;
				break;
			case 'i':
				i++;
				break;
			case 'j':
				j++;
				break;
			case 'k':
				k++;
				break;
			case 'l':
				l++;
				break;
			case 'm':
				m++;
				break;
			case 'n':
				n++;
				break;
			case 'o':
				o++;
				break;
			case 'p':
				p++;
				break;
			case 'q':
				q++;
				break;
			case 'r':
				r++;
				break;
			case 's':
				s++;
				break;
			case 't':
				t++;
				break;
			case 'u':
				u++;
				break;
			case 'v':
				v++;
				break;
			case 'w':
				w++;
				break;
			case 'y':
				y++;
				break;
			case 'x':
				x++;
				break;
			case 'z':
				z++;
				break;
			}
		}
		//Outputs results
		System.out.println("--[Vowels]--");
		System.out.println("a: " + a + "\ne: " + e + "\ni: " + i + "\no: " + o +"\nu: " + u);
		System.out.println("--[Non-Vowels]--");
		System.out.println("b: " + b + "\nc: " + c + "\nd: " + d + "\nf: " + f +"\ng: " + g +"\nh: " + h +"\nj: " + j +"\nk: " + k +"\nl: " + l +"\nm: " + m +"\nn: " + n +"\np: " + p +"\nq: " + q +"\nr: " + r +"\ns: " + s +"\nt: " + t +"\nv: " + v +"\nw: " + w +"\ny: " + y +"\nz: " + z);
	}
}
