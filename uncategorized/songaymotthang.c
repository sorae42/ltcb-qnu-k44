#include <stdio.h>

int main(int argc, char *argv[])
{
	int day, month, year;
	printf("Cho biet so thang va nam? (mm/yyyy): ");
	scanf("%d/%d", &month, &year);

	switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			day = 31;
			break;
		case 4: case 6: case 9: case 11:
			day = 30;
			break;
		case 2:
			if (year % 400 == 0 || year % 4 == 0 && year & 100 != 0) day = 29;
			else day = 28;
			break;
		default:
			printf("Co ve nhu du lieu nhap khong hop le.\n");
			return 1;
	}

	printf("%d/%d co %d ngay.\n", month, year, day);
	return 0;
}
