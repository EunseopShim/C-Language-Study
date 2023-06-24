//1
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     char *ap, **bp;
//     ap = (char *)malloc(4);
//     strcpy(ap,"ABC");
//     puts(ap);
//     printf("%c\n",ap[1]);
//     bp = &ap;
//     puts(*bp);
//     printf("%c",bp[0][1]);
//     free(ap);
// }


//2
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char **ap;
//     ap = (char **)malloc(sizeof(char *)*2);
//     ap[0] = (char *)malloc(3);
//     ap[1] = (char *)malloc(3);
//     strcpy(ap[0],"AB");
//     strcpy(ap[1],"CD");
//     puts(ap[0]);
//     puts(ap[1]);
//     free(ap[0]);
//     free(ap[1]);
//     free(ap);
// }


//3
// #include <stdio.h>
// int main()
// {
//     char *M[] = {"ABC","DEF"};
//     puts(M[0]);
//     puts(M[1]);
//     putchar(M[1][1]);
// }



//4
// #include <stdio.h>
// int main()
// {
//     char *M[] = {"ABC","DEF"};
//     char **ap;
//     ap = M;
//     puts(*ap);
//     puts(ap[1]);
//     putchar(ap[1][1]);
// }


//5
// #include <stdio.h>
// int main()
// {
//     char *M[2] = {"AB","CD"}, *N[2]={"EF","GH"};
//     char **ap[] = {M,N};
//     puts(ap[0][0]);
//     puts(ap[0][1]);
//     puts(ap[1][1]);
//     putchar(ap[1][1][1]);
// }


//6
// #include <stdio.h>
// int main()
// {
//     char *M[2][2] = {{"AB","CD"},{"EF","GH"}};
//     puts(M[0][0]);
//     puts(M[0][1]);
//     puts(M[1][0]);
//     putchar(M[1][1][1]);
// }



//7
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char m[] = "ABC";
//     char *ap = (char *) malloc(sizeof(m));
//     char *aap;
//     strcpy(ap,m); aap=m; puts(aap);printf("%c",*ap++);
//     printf("%c",ap[0]); ap--; printf("%c",*aap); free(ap);
// }



//8
// #include <stdio.h>
// int main()
// {
//     int M;
//     int *ap;
//     int **bp;
//     int ***cp;
//     ap = &M;
//     bp = &ap;
//     cp = &bp;
//     *ap = 1;
//     **bp+=2;
//     ***cp+=3;
//     printf("%d=n",M);
// }


//9
// #include <stdio.h>
// int main()
// {
//     char M[] = "YYYY";
//     char *ap, **bp;
//     ap = M; bp=&ap; *ap = 'A'; ap++; **bp= 'B';
//     bp[0][3] = 'C';
//     ap[1] = 'D';
//     puts(M);
// }



//10 
// #include <stdio.h>
// #include "Myalgorithm.h"
// int main()
// {
//     int num1 = 10, num2 = 20;
//     int *ptr1, *ptr2;
//     ptr1 = &num1, ptr2 = &num2;
//     printf("*ptr1, *ptr2: %d %d \n",*ptr1, *ptr2);
//     SwapIntDoublePtr(&ptr1, &ptr2);
//     printf("*ptr1, *ptr2: %d %d \n",*ptr1, *ptr2);
//     return 0;
// }



//11
// #include <stdio.h>
// int main()
// {
//     int n = 20;
//     int * np = &n;
//     int ** npp = &np;
//     printf("%d %d %d\n",n, *np, **npp);
// }


//12
// #include <stdio.h>
// int main()
// {
//     char carr3[2][2][3] = {'A','B','C','D','E','F','G','H','I','J','K'};
//     printf("%x %x %x\n",carr3,carr3[0],carr3[0][0],carr3[0][0][0]);
//     printf("%x %x %x\n",carr3 +1, *carr3+1,**carr3+1,***carr3+1);
// }


//13
// #include <stdio.h>
// int main()
// {
//     char M[2][3]={"AB","CD"};
//     char (*ap)[3];
//     ap = M;
//     puts(ap[0]);
//     puts(ap[1]);
//     putchar(ap[1][1]);
// }


//14
// #include <stdio.h>
// int main()
// {
//     char M[2][2][3]={{"AB","CD"},{"EF","GH"}};
//     char (*ap)[2][3];
//     ap = M;
//     puts(ap[0][0]);
//     puts(ap[1][0]);
//     putchar(ap[1][1][1]);
// }




//20
// #include <stdio.h>
// int main()
// {
//     char carr[12]={'A','B','C','D','E','F','G','H','I','J','K','L'};
//     char (*ap1)[4] = (char (*)[4])carr;
//     char (*ap2)[3] = (char (*)[3])carr;
//     char (*ap3)[2][3] = (char (*)[2][3])carr;
//     printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",ap1[0][0],ap1[0][1],ap1[0][2],ap1[0][3],ap1[1][0],ap1[1][1],ap1[1][2],ap1[1][3],ap1[2][0],ap1[2][1],ap1[2][2],ap1[2][3]);
//     printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",ap2[0][0],ap2[0][1],ap2[0][2],ap2[1][0],ap2[1][1],ap2[1][2],ap2[2][0],ap2[2][1],ap2[2][2],ap2[3][0],ap2[3][1],ap2[3][2]);
//     printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",ap3[0][0][0],ap3[0][0][1],ap3[0][0][2],ap3[0][1][0],ap3[0][1][1],ap3[0][1][2],ap3[1][0][0],ap3[1][0][1],ap3[1][0][2],ap3[1][1][0],ap3[1][1][1],ap3[1][1][2]);
// }



