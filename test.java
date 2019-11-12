/* This is a simple Java program.
FileName : "HelloWorld.java". */
import java.util.Scanner;

class test
{
	// Your program begins with a call to main().
	// Prints "Hello, World" to the terminal window.

	public static void main(String args[])
	{
        Scanner in = new Scanner(System.in);

		System.out.println("Hello, World");

        String name;
        name = in.nextLine();
        System.out.println("You entered string "+name);

	}
}
