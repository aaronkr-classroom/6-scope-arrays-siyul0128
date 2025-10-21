// bit-enc.c
#include <stdio.h>
#include <string.h> // ���ڿ��� ������ �迭�Դϴ�.

/*
������ ��ȣȭ:
- ���� ������: data[i] = 5 (2���� 0101)
- Ű: key = 3 (2���� 0011)
- XOR(^) ���� �� ���: 0101 ^ 0011 = 0110 (���: 6)
- ��ȣȭ: 0110 ^ 0011 = 0101
*/

void encrypt(char* data, char key) {
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}

void decrypt(char* data, char key) {
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}

int main(void) {
	char plaintext[] = "Hanbat National University";
	char key = 'M';

	printf("Original: %s\n", plaintext);

	encrypt(plaintext, key);
	printf("Encrypted: %s\n", plaintext);

	decrypt(plaintext, key);
	printf("Decrypted: %s\n", plaintext);

	return 0;
}
