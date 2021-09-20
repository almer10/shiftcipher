/*
Nama     : Prianggara Hadyan Almer
NPM      : 140810190065
Kelas    : A
Program  : Shift Cipher
*/

#include <iostream>
#include <limits.h>
#include <stdio.h>
#include <string.h>

using namespace std;

void Enkripsi(char text[], int key){
	char plaintext;
	for (int i = 0; text[i] != '\0'; ++i){
		plaintext = text[i];

		if (plaintext >= 'a' && plaintext <= 'z'){
			plaintext = plaintext + key;
			if (plaintext > 'z') {
				plaintext = plaintext - 'z' + 'a' - 1;
			}
			text[i] = plaintext;
		}
		else if (plaintext >= 'A' && plaintext <= 'Z'){
			plaintext = plaintext + key;
			if (plaintext > 'Z') {
					plaintext = plaintext - 'Z' + 'A' - 1;
			}
			text[i] = plaintext;
		}
	}
	printf("\n Hasil Enkripsi  : %s", text);
}

void Deskripsi(char text[], int key){
	char ciphertext;
		for (int i = 0; text[i] != '\0'; ++i){
			ciphertext = text[i];

			if (ciphertext >= 'a' && ciphertext <= 'z'){
				ciphertext = ciphertext - key;
				if (ciphertext < 'a') {
					ciphertext = ciphertext + 'z' - 'a' + 1;
				}
				text[i] = ciphertext;
			}
			else if (ciphertext >= 'A' && ciphertext <= 'Z'){
				ciphertext = ciphertext - key;
				if (ciphertext < 'A') {
					ciphertext = ciphertext + 'Z' - 'A' + 1;
				}
				text[i] = ciphertext;
			}
		}
		printf("\n Hasil Deskripsi : %s", text);
}

int main() {
	int operasi, key, length;
	char text[100];

	
		cout << "Program Shift Cipher \n";
		
		cout << " Masukkan Text : ";
		cin.getline(text,100);

		cout << " Masukkan Key  : ";
		cin >> key;

		length = strlen(text);

		cout << " Pilih Operasi : \n"
			 << " 1. Enkripsi \n"
			 << " 2. Deskripsi \n"
			 << " >> ";
		cin >> operasi;

		// Enkripsi
		if (operasi == 1){
			Enkripsi(text, key);
		}

		// Deskripsi
		else if (operasi == 2){
			Deskripsi(text, key);
		}
}

