         C PROGRAMMING
DYNAMIC LIBRARIES
A dynamic library is a programming concept in which shared libraries with special functionalities are launced only during prigram execution.
Dynamic Linking is when external or shared libraries are copied into the executable file by name rigth at the point of run time.
It is only then that required librasries are loaded to memory by the operating system.

BENEFITS OF DYNAMIC LINKING.
1.Leads to small file sizes.
2.Can reduce start-up time of a program.
3.You can update routines with out relinking.
4.LOwer maintanance cost and need for support.

LIMITATION OF DYNAMIC LINKING.
The removal of a library could cause the program to break.
If you have aan inflexible dynamic linker, you could find a program no longer lauches at all or doesnt work correctly.

0.A library is not a luxury but one of the necessities of life.
I have created a dynamic library libdynamic.so that contains all the functions listed here:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
