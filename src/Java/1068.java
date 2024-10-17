/*
 * 1068 - Parenthesis Balance
 * Author: Otavio
 * Date: 17/10/2024
 */
import java.io.IOException;
import java.util.Scanner;

public class Main {

	private static class Stack {
		private final char[] data = new char[1000];
		private int top = 0;

		public boolean isEmpty() {
			return this.top == 0;
		}

		public void push(char item) {
			this.data[this.top] = item;
			top++;
		}

		public char pop() {
			top--;
			final char result = this.data[this.top];
			this.data[this.top] = '\0';
			return result;
		}
	}

	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		Stack stk;
		boolean incorrect;

		while(sc.hasNextLine()) {
			stk = new Stack();
			incorrect = false;
			for(char c: sc.nextLine().toCharArray()) {
				if(c=='(') {
					stk.push('(');
				} else if(c==')') {
					if(stk.isEmpty()) {
						incorrect = true;
						break;
					} else {
						stk.pop();
					}
				}
			}
			incorrect = incorrect || !(stk.isEmpty());
			System.out.println(incorrect?"incorrect":"correct");
		}
	}
}
