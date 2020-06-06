#include<iostream>
#include"String.h"

using namespace std;


int main() {


	String str;




	String word1("slob", 5);


	word1.print();


	String copy = word1;


	copy.print();


	String word(copy);


	word.print();


	String word2 = move(word1);


	cout << "Word 1 : ";


	word1.print();


	cout << endl;


	cout << "V2 : ";


	word2.print();


	cout << endl;


	String in;


	cout << "Enter somthing->";


	in.input();



	system("pause");
	return 0;
}