#include <stdio.h>

int main() {

	for (float y = 1.5; y > -1.5; y -= 0.1) {

		for (float x = -1.5; x < 1.5; x += 0.04) {

			float a = x * x + y * y - 1;

			putchar(a * a * a - x * x * y * y * y <= 0.0 ? 'y' : ' ');
					   
		}

		putchar('\n');

	}

}