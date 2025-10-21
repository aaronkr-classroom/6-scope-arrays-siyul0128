// gl_game.c
#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()

int rand_num; // ���� ����

void gamelnit(void) {
	srand(time(0)); // 1970�� 1�� 1�� 0:00�ú��� ������� ms ��
	rand_num = rand() % 10 + 1; // (0-9) + 1 = [1, 10]
}

void gamePlay(void) {
	// ���� ����
	int guess = 0, count = 0, allowed = 5; // 5�� ������ ����

	printf("Guess the number (1-10): ");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num) {
			printf("���� ! Good! you win!");
			break;
		}
		else if (guess < rand_num) {
			printf("Too high! Try higher!");
		}
		else if (guess > rand_num) {
			printf("Too high! Try lower!");
		}
	} while (count != allowed);

	if (count > allowed) {
		printf("Too many guesses! You lose!");
	}
	
}


int main(void) {
	gamelnit();
	gamePlay();
	return 0;
}