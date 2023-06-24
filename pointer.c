//1
// #include <stdio.h>
// int main()
// {
//     short a;
//     short b;
//     short c;
//     a = 10; *&b = *&a + 2; *&a+=4;
//     c = a + b;
//     printf("%d %d %d\n",&a,&b,&c);
//     printf("%d\n",c);
// }



//2
// #include <stdio.h>
// int main()
// {
//     long M[3] = {10, 20, 30};
//     long K;
//     K = *M + M[1] + *(M+1);
//     K += *&M[2] + *M + 1;
//     printf("%ld\n", K);
// }


//3
// #include <stdio.h>
// int main()
// {
//     char M[]  = {'A','B','C','D'};
//     int N = sizeof(M);
//     int a;
//     *&M[0]+=32; *(M+1)+=1; ++*(M+2); *(M+3)+=2;
//     for (a=0; a< N;a++)
//         putchar(*(M+a));
// }


//4
// #include <stdio.h>
// int main()
// {
//     short M[2][2] = {{10, 20},{30, 40}};
//     short a;
//     a = M[0][0] + M[0][1] + M[1][0] + M[1][1];
//     a += (*&M[1][0] + *M[0] + *(M[1]+1));
//     a -= **M;
//     a += *(*(M+1) + 1);
//     printf("%d\n",a);
// }


//5
// #include <stdio.h>
// int main()
// {
//     short M[2][2] = { {10, 20}, {30, 40}};
//     short a, sum=0;
//     *M[0] = 15; *(M[0]+1) = 25;
//     *M[1] = 35; M[0][3] = 45;
//     **M=17; *(*(M+1)+1) = 47;
//     *(*M+1) = 27; **(M+1)=37;
//     M[1][-1]+=2;
//     for (a = 0; a < 4; a++)
//         sum+=M[0][a];
//     printf("%d\n", sum);
// }


//6
// #include <stdio.h>
// int main()
// {
//     short M[2][2][2] = {{{10,20},{30,40}},{{50,60},{70, 80}}};
//     int a, b, c;
//     short cnt = 0;
//     ++*M[0][0];
//     *M[0][1]+=2;
//     *M[1][0]+=3;
//     *M[1][1]+=4;
//     ++*(M[0][0]+1);
//     *(M[0][1]+1)+=2;
//     *(M[1][0]+1)+=3;
//     *(*(M[0]+0))+=1;
//     *(*(M[0]+0)+1) = *(*M[0]+1) + *(**M+1) + 2;
//     *(*(M[0]+1)) = *(*(*M+1)) +3;

//     for (a=0; a<8 ; a++)
//         if(M[0][0][a]>=40) M[0][0][a]/=2;
    
//     for (a = 0;a<2;a++){
//         for(b = 0; b < 2; b++){
//             for (c = 0; c < 2; c++)
//             {
//                 if (M[a][b][c]/10 == 2) cnt ++;
//                 printf("%d",M[a][b][c]);
//             }
//             puts("");
//         }
//         puts("");
//     }
//     printf("%d\n",cnt);
// }




//7
// #include <stdio.h>
// int main()
// {
//     short a,b;
//     short *ap;
//     short c;
//     *&a = 5; ap = &b; *ap = a; *ap+=2;
//     a = a + *ap;
//     **&ap+=3;
//     c = a + b;
//     printf("%d\n",c);
// }


//8
// #include <stdio.h>
// int main()
// {
//     short M[] = {10, 20, 30, 40};
//     short *ap;
//     short c;
//     ap = M;
//     c = *ap++; c += *(ap+1);
//     c += *++ap; c += ap[1]--;
//     c += ap[1];
//     printf("%d\n",c);
// }


//9
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char M[] = {'P','A','E','\0'};
//     char *ap;
//     int a = 0;
//     ap = M + strlen(M) -1;
//     printf("%c\n",*ap--); *--ap = 'T'; printf("%s\n",ap);
//     printf("%c\n",*++ap); printf("%c\n", ap[a++]);
//     printf("%c\n",ap[--a]);
// }




//10
// #include <stdio.h>
// int main()
// {
//     short M[2][2] = {{10, 20},{30,40}};
//     short *ap;
//     short c;
//     ap = M[0]; c =*ap; ap++; c+=*ap;
//     ap += 2; c += *ap; c+=*ap--; c+= *--ap;
//     printf("%d %d %d %d\n",M[0][0],M[0][1],M[1][0],M[1][1]);
//     c += *ap; c+= ap[-1]; c+= ++*ap; ap++;
//     c += ap[1];
//     printf("%d\n",++*ap);
//     printf("%d\n",c);
// }



//11
// #include <stdio.h>
// int main()
// {
//     short M[2][2] = {{10, 20},{30, 40}};
//     short *ap;
//     short c;
//     ap = M[0]; c = *ap;
//     ap++; c+= *ap;
//     ap+=2; c+=*ap;
//     c+=*ap;
//     c += *--ap;
//     printf("%d %d %d %d\n",M[0][0],M[0][1],M[1][0],M[1][1]);
//     c += *(ap-2);
//     c += ap[-1];
//     c += ++*ap; ap++; c-=ap[-1];
//     printf("%d\n", ++*ap);
//     printf("%d\n",c);
// }


//12
// #include <stdio.h>
// int main()
// {
//     short M[2][2] = {{10,20},{30,40}};
//     short *ap, *bp;
//     short a, sum = 0;
//     ap = M[0];
//     bp = M[0] + sizeof(M)/sizeof(M[0][0])-1;
//     for (a=0; a < sizeof(M)/sizeof(M[0][0]);a++)
//         sum += *ap++ + *bp--;
//     *--ap = 45; *++bp=15; a=0; bp[++a]++; ++ap[-a--];ap=M[0];
//     for( ; a < sizeof(M)/sizeof(M[0][0]); a++)
//         sum -= ap[a];
    
//     ap = M[1]-sizeof(M[0])/sizeof(M[0][0]);
//     printf("%d\n",sum);
//     printf("%d %d %d %d \n",M[0][0],M[0][1],M[1][0],M[1][1]);
// }


//13

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char M[] = "ABC";
//     char *ap = "ABC";
//     puts(M); puts(ap);
//     ap="DEF";
//     puts(ap);
//     printf("%c",ap[1]);
//     strcpy(M,"YZ");
//     puts(M);
// }



//14
// #include <stdio.h>
// int main()
// {
//     char M[4] = "ABC";
//     printf("%c%c%c\n",M[0],M[1],M[2]);
//     *M = 'X';
//     *(M+1) = 'Y';
//     *(M+2) = 'Z';
//     puts(M);
// }



//15
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char M[2][5] = {"ABC","XYZ"};
//     printf("%c%c%c\n",M[0][0],M[0][1],M[0][2]); //ABC
//     puts(&M[1][0]); //XYZ
//     *(M[0]+1) = 'F'; *(M[1]+1)='E'; //B-> F, Y->E
//     puts(M[0]); puts(*M); // AFC \n AFC
//     strcpy(M[1],"GHI"); //XEZ -> GHI
//     puts(*(M+1)); //GHI
//     printf("%c\n",**M); //A
// }


//16
// #include <stdio.h>
// int main()
// {
//     char M[] = "ABC";
//     char *ap = M;
//     *ap++ += 1;
//     *++ap += 3;
//     ap-= 2;
//     ap[1]+=2;
//     puts(M);
// }



//17
// #include <stdio.h>

// int main()
// {
//     char M[2][7] = {"KOREA","SEOUL"};
//     char *ap = M[0];
//     puts(M[0]);
//     puts(ap);
//     ap += sizeof(M[0]);
//     puts(ap++);
//     printf("%c\n",ap[2]);
//     printf("%c\n",*ap--);
//     puts(ap);
//     printf("%c\n",*++ap);
// }


//18
// #include <stdio.h>
// int main()
// {
//     char *ap = "KOREA";
//     char M[5] = {0};
//     int a = 0;
//     M[0] = ap[a++];
//     M[1] = *++ap;
//     M[2] = ap[++a];
//     M[3] = ap[a-1];
//     puts(M);
// }



//EX1
// #include <stdio.h>
// int main()
// {
//     int num1=100, num2=100;
//     int *pnum;
//     pnum=&num1;
//     (*pnum)+=30;
//     pnum=&num2;
//     (*pnum)-=30;
//     printf("num1:%d, num2:%d\n",num1,num2);
//     return 0;
// }


//EX2
// #include <stdio.h>
// int main()
// {
//     int arr[3] = {15, 25, 35};
//     int * ptr = &arr[0];
//     printf("%d %d \n",ptr[0],arr[0]);
//     printf("%d %d \n",ptr[1],arr[1]);
//     printf("%d %d \n",ptr[2],arr[2]);
//     printf("%d %d \n",*ptr,*arr);
//     return 0;
// }


//EX3
// #include <stdio.h>
// int main()
// {
//     int arr1[3] = {1, 2, 3};
//     double arr2[3] = {1.1, 2.2, 3.3};
//     printf("%d    %g\n",*arr1, *arr2);
//     *arr1 += 100;
//     *arr2 += 120.5;
//     printf("%d    %g \n",arr1[0],arr2[0]);
//     return 0;
// }



//EX4
// #include <stdio.h>
// int main()
// {
//     int arr[3] = {0, 1, 2};
//     printf("배열의 이름:%p \n", arr);
//     printf("첫 번째 요소: %p \n",&arr[0]);
//     printf("두 번째 요소: %p \n",&arr[1]);
//     printf("세 번째 요소: %p \n",&arr[2]);
//     return 0;
// }



//EX5
// #include <stdio.h>
// int main()
// {
//     int num1 = 10, num2 = 20, num3 = 30;
//     int *arr[3] = {&num1, &num2, &num3};
//     printf("%d \n",*arr[0]);
//     printf("%d \n",*arr[1]);
//     printf("%d \n",*arr[2]);
//     return 0;
// }


//EX6
// #include <stdio.h>
// int main()
// {
//     int arr[3] = {11, 22, 33};
//     int *ptr = arr;
//     printf("%d %d %D \n",*ptr, *(ptr+1), *(ptr+2));
//     printf("%d",*ptr); ptr++;
//     printf("%d", *ptr); ptr++;
//     printf("%d",*ptr); ptr--;
//     printf("%d",*ptr); ptr--;
//     printf("%d",*ptr); printf("\n");
//     return 0;
// }


//EX7
// #include <stdio.h>
// int main()
// {
//     int tr1; double tr2;
//     int *ptr1=&tr1;
//     double *ptr2=&tr2;
//     printf("%d %d %d \n",ptr1,ptr1+1, ptr1+2);
//     printf("%d %d %d \n",ptr2,ptr2 +1, ptr2+2);
//     ptr1++;
//     ptr2++;
//     printf("%d %d \n",ptr1,ptr2);
//     return 0;
// }



//EX8
// #include <stdio.h>
// int main()
// {
//     char *strArr[3]={"Simple","String","Array"};
//     printf("%s \n",strArr[0]);
//     printf("%s \n",strArr[1]);
//     printf("%s \n",strArr[2]);
//     return 0;
// }



//9 왜안되는지 모름
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[20]="My String";
//     char *str2="Your String";
//     printf("%s %s \n",str1,str2);
//     strcpy(str1,"Our String");
//     str2="Our String";
//     printf("%s %s\n",str1,str2);

//     str1[0] = 'X';
//     // str2[0] = 'X'; 이부분 에러
//     printf("%s %s \n",str1,str2);
//     return 0;

// }




//10
// #include <stdio.h>
// int main()
// {
//     int arr[3][2];
//     int i,j;
//     for (i = 0; i < 3; i++)
//         for (j = 0; j <2; j++)
//             printf("%p\n",&arr[i][j]);
// }



//11
// #include <stdio.h>
// int main()
// {
//     int arr1[3][2];
//     int arr2[2][3];
//     printf("arr1: %d \n",arr1);
//     printf("arr1+1: %d\n",arr1[0]+1);
//     printf("arr1+2: %d\n",arr1 + 1);
//     printf("arr2: %d \n",arr2);
//     printf("arr1+2: %d \n",arr2[1]+2);
//     printf("arr2+1: %d \n",arr2 + 1);
// }



//12
// #include <stdio.h>
// int main()
// {
//     int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
//     int arr2d[2][4] = {1,2,3,4,5,6,7,8};
//     int i,j;
//     int *whoA[4]={&num1,&num2,&num3,&num4};
//     int (*whoB)[4]=arr2d;
//     printf("%d %d %d %d \n",*whoA[0],*whoA[1],*whoA[2],*whoA[3]);
//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 4; j++)
//             printf("%d ",whoB[i][j]);
//         printf("\n");
//     }
//     return 0;
// }


//13
// #include <stdio.h>
// int main()
// {
//     int num1=10, num2=20, num3 = 30;
//     int *ptr1=&num1;
//     int *ptr2=&num2;
//     int *ptr3=&num3;
//     int *ptrArr[]={ptr1, ptr2, ptr3};
//     int **dptr=ptrArr;
//     printf("%d %d %d \n", *(ptrArr[0]),*(ptrArr[1]),*(ptrArr[2]));
//     printf("%d %d %d \n", *(dptr[0]),*(dptr[1]),*(dptr[2]));
// }





//HW1
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "computer";
//     char *sp = str;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         for (int j = i; j < strlen(str); j++)
//             printf("%c",*(sp+j));
//         puts("");
//     }
// }


//HW2
// #include <stdio.h>
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int *ap = arr;
//     for (int i = 1; i < sizeof(arr)/sizeof(int); i+=2)
//         printf("%d ",*(ap+i));
// }


//HW3
// #include <stdio.h>
// void SaChick(double a, double b, double *ap)
// {
//     *ap = a + b;
//     *(ap+1) = a - b;
//     *(ap+2) = a * b;
//     *(ap+3) = a / b; 
// }
// int main()
// {
//     double a = 5, b = 2;
//     double M[4];
//     SaChick(a,b,M);
//     printf("%.1f %.1f\n",M[0],M[1]);
//     printf("%.1f %.1f\n",M[2],M[3]);
// }



//1
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a;
//     long b;
//     double c;
//     a = atoi("12"); b = atol("123400"); c = atof("12.5");
//     printf("%f\n",a+b+c);
// }


//2
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     printf("%d\n", islower('a')); printf("%d\n",isdigit('9'));
//     printf("%d\n", isupper('A')); printf("%d\n", !islower('a'));
//     printf("%d\n", isdigit('a'));
// }


//3
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char M[11]="abcdefg";
//     strcpy(M, "ABC");   //ABC
//     puts(M); //ABC
//     strncpy(M, "DEFG",2);
//     puts(M); //DEC
//     strncat(M,"JKLM",2); 
//     puts(M); //DECJK
//     printf("%d\n",strlen(M)); //5
//     printf("%d\n",strcmp("abc","ABC")); //1 같으면 0, 왼쪽이 크면 1, 오른쪽이 크면 -1
//     printf("%d\n",strcmpi("abc","ABC"));//0 대소문자 똑같이
//     printf("%d\n",strncmp("ABCD","ABDE",2)); //0 
//     printf("%d\n",strnicmp("abcd","ABCD",2));// 0
//     strcpy(M,"ABCDCE"); puts(M);
//     printf("%d\n",strchr(M,'C')-M);
// }



//4
// #include <stdio.h>
// #include <string.h>
// void MyUpper(char *c)
// {
//     if (*c >= 'a' && *c <= 'z') 
//         *c+= 'A' - 'a';
// }


// int main()
// {
//     char a='a';
//     MyUpper(&a);
//     printf("%c", a);
// }


//5
// #include <stdio.h>
// #include "Mystring.h"

// int main()
// {
//     char st[100];
//     gets(st);
//     printf("%d",Mystrlen(st));
// }


//6
// #include <stdio.h>


// int main()
// {
//     char st[] ={'A','1','B','Z','C','3'};
//     Mystrreverse(st);
//     puts(st);
// }


//7
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char c[100];
//     gets(c);
//     Mynospace(c);
//     puts(c);
// }


//8
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char M[6] = "AB";
//     myStrcat(M,"CD");
//     puts(M);
// }


//9
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char M[4];
//     puts(myStrcpy2(M,"AB"));
//     //puts(M);
// }


//10
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char M[4] = {0};
//     myStrncpy(M,"ABCD",3);
//     puts(M);
// }


//11
// #include <stdio.h>
// #include "Mymath.h"
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     absolute(&n);
//     printf("%d",n);
// }



//12
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char str1[10],str2[10];
//     scanf("%s %s",str1,str2);
//     printf("%d",MyStrcmp(str1,str2));
// }


//13
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char str1[10], str2[10];
//     scanf("%s %s",str1,str2);
//     printf("%d",MyStricmp(str1,str2));
// }


//14
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char str1[10], str2[10];
//     scanf("%s %s",str1,str2);
//     printf("%d",MyStrincmp(str1,str2,3));
// }


//15
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char str1[100], str2[20];
//     printf("원문: ");
//     gets(str1);
//     printf("찾을 단어: ");
//     gets(str2);
//     if (Mystrchr(str1,str2) == -1) printf("존재하지 않습니다.");
//     else printf("%d번째에 존재합니다.",Mystrchr(str1,str2));
// }


//16
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char str1[100],str2[10]; 
//     printf("원문 : ");
//     gets(str1);
//     printf("찾을 단어 : ");
//     gets(str2);
//     printf("%s = %d개 존재",str2,numberofword(str1,str2));
// }


//17
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char M[]="YOU LOVE YOU YOO LOVE LOVE ME ...YOU", str1[10], str2[10];
//     printf("찾을 문자열 : ");
//     gets(str1);
//     printf("봐꿀 문자열 : ");
//     gets(str2);
//     findandchange(M,str1,str2);
//     puts(M);
// }


//18
// #include <stdio.h>
// #include "Myalgorithm.h"
// int main()
// {
//     int num1=10, num2 = 20;
//     int *ptr1, *ptr2;
//     ptr1 = &num1, ptr2 = &num2;
//     printf("*ptr, *ptr2: %d %d \n",*ptr1, *ptr2);
//     SwapIntPtr(ptr1,ptr2);
//     printf("*ptr, *ptr2: %d %d \n",*ptr1, *ptr2);
//     return 0;
// }



//19
// #include <stdio.h>
// #include "Mystring.h"
// int main()
// {
//     char str1[100],str2[100],str3[100];
//     printf("이름을 입력하시오 : ");
//     gets(str1);
//     printf("전화번호를 입력하시오 : ");
//     gets(str2);
//     printf("주로를 입력하시오 : ");
//     gets(str3);
//     myStrcat(str1,str2);
//     myStrcat(str1,str3);
//     puts(str1);
// }


//20
// #include <stdio.h>
// #include "Mymath.h"
// int main()
// {
//     char n1[100],n2[100],sum[100];
//     printf("1번째 수를 입력하세요 : ");
//     gets(n1);
//     printf("2번째 수를 입력하세요 : ");
//     gets(n2);
//     printf("%s + %s = %s",n1,n2,longsum(n1,n2,sum));
// }