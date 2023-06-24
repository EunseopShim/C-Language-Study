//enum 나열형 정수값
// #include <stdio.h>
// int main()
// {
//     const int k=10; 
//     //k++;


//     enum KT{a=101,d};

//     printf("%d\n",d);
// }

// #include <stdio.h>
// int main()
// {
//     enum MT{one = 1, two, three, five = 5,six, ten = 10};
//     printf("%d\n",six);
// }

// #include <stdio.h>
// int main()
// {
//     enum MT{one = 1, two, three, five = 5,six,ten=10};
//     enum MT M;
//     M = three;
//     printf("%d\n",M);
// }


//1
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     short a = 5;
//     short *ap; 
//     ap = (short*)malloc(2);
//     printf("%u\n",ap);
//     *ap = 10;
//     printf("%d\n",a + *ap);
//     free(ap);
// }


//2
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr1 = (int *)malloc(sizeof(int));
//     int *ptr2 = (int *)malloc(sizeof(int)*7);

//     *ptr1 = 20;
//     for (int i = 0; i < 7; i++)
//         ptr2[i] = i + 1;
//     printf("%d\n",*ptr1);
//     for (int i = 0; i < 7; i++)
//         printf("%d\n",ptr2[i]);
//     free(ptr1);
//     free(ptr2);
//     return 0;
// }


//3
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     char *ap;
//     ap = (char *)malloc(4);
//     strcpy(ap,"ABC");
//     printf("%u\n",ap); puts(ap);
//     free(ap);
//     ap = (char *)malloc(4);
//     strcpy(ap,"DEF");
//     printf("%u\n",ap); puts(ap);
//     free(ap);
// }


//4
// #include <stdio.h>
// #include <stdlib.h>
// char *ReadUserName(void)
// {
//     char *name = (char *)malloc(30);
//     printf("What is your name? ");
//     gets(name);
//     return name;
// }
// int main()
// {
//     char *name1;
//     char *name2;
//     name1 = ReadUserName();
//     printf("name1: %s \n",name1);
//     name2 = ReadUserName();
//     printf("name2: %s \n",name2);
//     return 0;
// }


//5
// #include <stdio.h>
// #include <stdlib.h>
// #include <malloc/malloc.h>
// int main()
// {
//     char *pmem;
//     pmem = (char *) malloc(100);
//     if (pmem == NULL)
//     {
//         puts("메모리를 할당할 수 없습니다.");
//     }
//     else
//     {
//         printf("할당된 메모리 길이는 %zu바이트입니다. \n",malloc_size(pmem));
//     }
//     if (pmem == NULL)
//     {
//         puts("메모리를 재 할당할 수 없습니다.");
//     }
//     else
//     {
//         printf("재할당된 메모리 길이는 %zu바이트입니다. \n",malloc_size((pmem)));
//     }
//     free(pmem);
// }



//HW1
// #include <stdio.h>
// #include <stdlib.h>
// int *dynamicinput(int n)
// {
//     int *input = (int *)malloc(sizeof(int) * n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d번째 값 : ",i+1);
//         scanf("%d",input+i);
//     }
//     return input;
// }
// int main()
// {
//     int n;
//     printf("몇개의 수를 입력할까요 ?");
//     scanf("%d",&n);
//     int *k = dynamicinput(n);
//     printf("=> 입력한 값은 %d %d %d", *k, *(k+1), *(k+2) );
//     free(k);
// }


//HW2
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int *dynamics(int n)
// {
//     int *arr = (int *)malloc(sizeof(int)*n);
    
//     for ( int i = 0; i < n; i++)
//         *(arr+i) = rand()%100 + 1;
//     return arr;
// }
// int main()
// {
//     int n,total;
//     srand(time(0));
//     printf("몇 개의 난수를 발생 할까요 ? ");
//     scanf("%d",&n);
//     int *k = dynamics(n);
//     printf("\n=>");
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d",*k);
//         total += *k++;
//     }
//     printf("\n합=%d",total);
//     free(k);
// }




//HW 3
// #include <stdio.h>
// #include <stdlib.h>
// int *fn(int n)
// {
    
//     int *arr = (int *)malloc(sizeof(int)*n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("정수를 입력하세요 : ");
//         scanf("%d",arr+i);
//     }
//     return arr;
// }
// int main()
// {
//     int n;
//     printf("몇 개의 수를 입력 하시겠습니까 ? ");
//     scanf("%d",&n);
//     int *k = fn(n);
//     int sum1 = 0,max = *k,min = *k;
//     double mean;
//     for (int i = 0; i < n; i++)
//     {
//         if (*k > max) max = *k;
//         if (*k < min) min = *k;
//         sum1 += *k++;
//     }
//     mean = (double) sum1 / (double) n;
//     printf("합 = %d\n",sum1);
//     printf("평균 = %g\n",mean);
//     printf("최대값 = %d\n",max);
//     printf("최소값 = %d\n", min);
//     free(k);
// }



//HW 4
// #include <stdio.h>
// #include <stdlib.h>
// char *chararr()
// {
//     char *k = (char *)malloc(100);
//     gets(k);
//     return k;
// }
// int main()
// {
//     char *str = chararr();
//     while (*str != '\0')
//     {
//         printf("%c->",*str++);
//     }
//     printf("\b\b ");
//     free(str);
// }


//HW 5
// #include <stdio.h>
// #include <stdlib.h>
// #include "Mystring.h"
// char *chararr()
// {
//     char *k = (char *)malloc(100);
//     gets(k);
//     Mystrreverse(k);
//     return k;
// }
// int main()
// {
//     char *str = chararr();
//     while (*str != '\0')
//     {
//         printf("%c->",*str++);
//     }
//     printf("\b\b ");
// free(str);
// }

// scanf("%[^\n]s") 
//HW 6 왜 gets()는 안되는지, null자리도 dynamic 공간 확보 해야하는지
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// char **getfivefruit()
// {
//     char **arr = (char **)malloc(5 * sizeof(char*));
//     for (int i = 0; i < 5 ; i++)
//     {
//         char temp[20];
//         printf("과일이름 : ");
//         // scanf("%s",temp); 
//         gets(temp);
//         // printf("%s",temp);
//         arr[i] = (char *)malloc(strlen(temp)+1);
//         strcpy(arr[i],temp);
//     }
//     return arr;
// }
// int main()
// {
//     char **k = getfivefruit();
//     for (int i = 0; i < 5; i++)
//         printf("%s ", k[i]);
//     for (int i = 0; i < 5; i++)
//         free(k[i]);
//     free(k);
// }


