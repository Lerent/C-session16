#include <stdio.h>
#include <string.h>

int main () {
	char inputstring[100];
	char reversestring[100];
	char *ptrinput;
	char *ptrreverse;	
	printf("Hay nhap mot mang bat ky: ");
	fgets(inputstring, sizeof(inputstring), stdin);
	inputstring[strcspn(inputstring, "\n")] = '\0';
	ptrinput = inputstring;                         
    ptrreverse = reversestring + strlen(inputstring);
    *ptrreverse = '\0';
    while (*ptrinput != '\0') {
        ptrreverse--; 
        *ptrreverse = *ptrinput;
        ptrinput++;
    }
    printf("Chuoi goc: %s\n", inputstring);
    printf("Chuoi dao nguoc: %s\n", reversestring);

    return 0;
}
