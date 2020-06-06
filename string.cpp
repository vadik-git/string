#include "String.h"
#include<iostream>

using namespace std;




String::String(String&& other)


{


	cout << "work move" << endl;


	Word = other.Word;


	size = other.size;


	other.Word= nullptr;


	other.size = 0;


}


void String::SetName(const char* word, size_t size)


{


	if (word == nullptr || strlen(word) == 0)


		return;


	if (this-> != nullptr) {


		delete[]this->Word;


	}


	this->size = size;


	size_t  NewSize = size;


	if (size <= strlen(word)) {


		cout << "size incorect" << endl;


		return;


	}


	this->Word= new char[NewSize];


	strcpy_s(this->Word, NewSize, word);


}





void String::SetSize(const size_t size)


{


	this->size = size;


}








void String::print() const


{


	if (Word!= nullptr) {


		cout << getItem() << endl;


	}





}





void String::assing(const String& other)


{


	if (Word != nullptr) {


		delete[]Word;


	}





	size = other.size;


	Word = new char[size];


	for (size_t i = 0; i < size; i++)


	{


	    Word[i] = other.Word[i];


	}


}








void String::operator=(const String& other)


{


	if (this != &other)


		assing(other);


}





void String::operator=(String&& other)


{


	if (this != &other) {


		if (Word != nullptr)


			delete[]Word;


		cout << "work move " << endl;


		Word = other.Word;


		size = other.size;


		other.Word = nullptr;


		other.size = 0;


	}


}





void String::input()


{


	const int newsize = 1000;


	char* tmp = new char[newsize];


	cin.getline(tmp, newsize);


	cin.ignore(cin.rdbuf()->in_avail());


	this->size = newsize;


	size_t  NewSize = newsize;


	if (size <= strlen(tmp)) {


		cout << "size incorect" << endl;


		return;


	}


	this->Word= new char[NewSize];


	strcpy_s(this->Word, NewSize, tmp);


}

















bool String::operator==(const String& other) const


{


	return this->Word == other.Word;


}





bool String::operator!=(const String& other) const


{


	return !(*this == other);


}





int String::operator[](int index) const


{


	if (index < size) {


		return Word[index];


	}


	cout << "Error" << endl;


	exit(EXIT_FAILURE);


	return 0;


}
