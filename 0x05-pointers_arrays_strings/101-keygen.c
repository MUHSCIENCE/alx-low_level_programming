#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define PASSWORD_LENGTH 11
int main(void)
{
       	char password[PASSWORD_LENGTH];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int charset_size = sizeof(charset) - 1;
	int i;
	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH - 1; i++)
	{
		password[i] = charset[rand() % charset_size];
	}
	password[PASSWORD_LENGTH - 1] = '\0';
	printf("%s\n", password);
	return 0;
}