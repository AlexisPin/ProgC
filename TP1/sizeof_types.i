int main(){
 printf("char : %ld, MIN : %d , MAX : %d \n", sizeof(char), (-0x7f - 1) , 0x7f );
 printf("signed char : %ld,  MIN : %d , MAX : %d \n", sizeof(signed char), (-0x7f - 1) , 0x7f);
 printf("unsigned char : %ld,  MIN : %d , MAX : %d \n", sizeof(unsigned char), UCHAR_MIN , (0x7f * 2 + 1));
 printf("short : %ld, MIN : %d , MAX : %d \n", sizeof(short), (-0x7fff - 1), 0x7fff);
 printf("signed short : %ld, MIN : %d , MAX : %d \n", sizeof(signed short), (-0x7fff - 1), 0x7fff);
 printf("unsigned short : %ld, MIN : %d , MAX : %d \n", sizeof(unsigned short), 0 , (0x7fff * 2 + 1));
 printf("int : %ld, MIN : %d , MAX : %d \n", sizeof(int), (-0x7fffffff - 1), 0x7fffffff);
 printf("signed int : %ld, MIN : %d , MAX : %d \n", sizeof(signed int), (-0x7fffffff - 1), 0x7fffffff);
 printf("unsigned int : %ld, MIN : %d , MAX : %d \n", sizeof(unsigned int), 0, (0x7fffffff * 2U + 1U));
 printf("long int : %ld \n", sizeof(long int));
 printf("signed long int : %ld \n", sizeof(signed long int));
 printf("unsigned long int : %ld \n", sizeof(unsigned long int));
 printf("long long int : %ld \n", sizeof(long long int));
 printf("unsigned long long int : %ld \n", sizeof(unsigned long long int));
 printf("signed long long int : %ld \n", sizeof(signed long long int));
 printf("float : %ld \n", sizeof(float));
 printf("double : %ld \n", sizeof(double));
 printf("long double : %ld \n", sizeof(long double));
 return 0;
}
