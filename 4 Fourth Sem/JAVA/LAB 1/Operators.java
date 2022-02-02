// Name: E.Sai Manoj
// Mis.No: 112015044
// This progrm is about Unary, Arithmetic, Relational, Logical and Ternary operators.


public class Operators
{
	public static void main(String[] args) {
		// Unary operators
		int a = 2;
		System.out.println(++a);        // 3
		System.out.println(a++ + ++a);  // 8
		
		// Arithmetic operators
		int b = 20;
		int c = 10;
		System.out.println("b+c : "+(b+c));     // 30
		System.out.println("b-c : "+(b-c));     // 10
		System.out.println("b*c : "+(b*c));     // 200
		System.out.println("b/c : "+(b/c));     // 2
		System.out.println("b%c : "+(b%c));     // 0
		
		// Relational operators
		System.out.println(1 < 2);      // true
		System.out.println(1 > 2);      // false
		System.out.println(1 == 2);     //false
		System.out.println(1 != 2);     // true
		
		// Logical operators
		System.out.println(2 < 3 && 4 < 5);     //true
		System.out.println(2 < 3 || 4 > 5);     // true
		
		// Ternary operators
		System.out.println(5 > 4 ? 1 : 0);      // 1
		System.out.println(5 < 4 ? 1 : 0);      // 0
		
	}
}
