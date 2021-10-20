#ifndef HEADER_FILE
#define HEADER_FILE

char *_memset(char *s, char, unsigned int);
char *_memcpy(char *dest, char *src, unsigned int);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _putchar(char);
void print_chessboard(char (*a)[8]);

#endif
