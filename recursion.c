//1
// #include <stdio.h>
// void main()
// {
//     printf("안녕");
//     main();
// }


//2
// #include <stdio.h>
// void KK(int a)
// {
//     if (a==0) return;
//     KK(a -1);
//     printf("%3d",a);
// }
// int main()
// {
//     KK(2);
// }


//3
// #include <stdio.h>
// void DispNum(int a)
// {
//     if (a==3) return;
//     DispNum(a+1);
//     printf("%3d",a);
// }
// int main()
// {
//     DispNum(0);
// }


//1
// #include <stdio.h>
// void KK1(int N)
// {
//     if (N==0) return;
//     KK1(N-1);
//     printf("%3d",N);
// }
// void KK2(int a,int N)
// {
//     printf("%3d",a);
//     if (a==N)return;
//     KK2(a+1,N);
//     printf("%3d",a);
// }
// int main()
// {
//     KK1(3);
//     puts("");
//     KK2(1,3);
// }


//2
// #include <stdio.h>
// int Sum1(int N) { return (N <= 1 ? N : N + Sum1(N - 1)); }
// int Sum( int a, int N) {return (N<=a? a:N+Sum(a,N-1));}
// int Pow(int a, int N) {return (N<=1? a:a * Pow(a, N-1));}
// int Fac(int N) {return (N <=1? 1:N*Fac(N-1));}

// int main()
// {
//     printf("%d\n",Sum1(3));
//     printf("%d\n",Sum(1,3));
//     printf("%d\n",Pow(2,3));
//     printf("%d\n",Fac(3));
// }


//3
// #include <stdio.h>
// void Disp1(int a, int b)
// {
//     if (a > b) return;
//     printf("%3d",a);
//     Disp1(a+1,b);
// }
// void Disp2(int a, int b)
// {
//     if (a < b) return;
//     printf("%3d",a);
//     Disp2(a-1,b);
// }
// void Disp(int a, int b)
// {
//     if (b > a) Disp1(a, b);
//     else Disp2(a,b);
//     puts("");
// }
// int main()
// {
//     int a=1,b=3;
//     Disp(a,b);
//     Disp(b,a);
// }


//4
// #include <stdio.h>


// void BubbleSort(int ary[],int len)
// {
//     int i, j;
//     int temp;

//     for (i = 0; i < len -1; i++)
//     {
//         for (j =0; j < len-1-i; j++)
//         {
//             if (ary[j]>ary[j+1])
//             {
//                 temp = ary[j];
//                 ary[j] = ary[j+1];
//                 ary[j+1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[4]= {3,2,1,4};
//     int i;
//     BubbleSort(arr, sizeof(arr)/sizeof(int));
//     for (i = 0; i < 4; i++)
//         printf("%d ",arr[i]);
//     puts("");
//     return 0;
// }


//5
// #include <stdio.h>
// #include <string.h>
// char str[10];

// char *getword(int n)
// {
//     switch(n%10){
//         case 0: strcpy(str, "zero "); break;
//         case 1: strcpy(str, "one "); break;
//         case 2: strcpy(str, "two "); break;
//         case 3: strcpy(str, "three "); break;
//         case 4: strcpy(str, "four "); break;
//         case 5: strcpy(str, "five "); break;
//         case 6: strcpy(str, "six "); break;
//         case 7: strcpy(str, "seven "); break;
//         case 8: strcpy(str, "eight "); break;
//         case 9: strcpy(str, "nine "); break;
//     }
//     return str;
// }

// void dispword(int n)
// {
//     if (n<10) printf("%s",getword(n));
//     else
//     {
//         dispword(n/10);
//         printf("%s",getword(n));
//     }
// }
// int main()
// {
//     int n;
//     printf("정수를 입력 : ");
//     scanf("%d",&n);
//     dispword(n);
// }



//EX1
// #include <stdio.h>
// void disp(int a)
// {
//     if (a > 7) return;
//     printf("%-2d",a); 
//     disp(a+1);
    
// }
// int main()
// {
//     disp(1);
// }


//EX2
// #include <stdio.h>
// void disp(int n)
// {
//     if (n < 1) return;
//     printf("%-2d",n);
//     disp(n-1);
// }
// int main()
// {
//     disp(5);
// }


//EX3
// #include <stdio.h>
// void disp(int n)
// {
//     if (n < 1) return;
//     disp(n-1);
//     printf("#");
// }
// int main()
// {
//     disp(10);
// }


//EX4
// #include <stdio.h>
// void disp(int y)
// {
//     if (y < 1) return;
//     disp(y-1);
//     printf("#");
// }
// void disp1(int x, int y)
// {
//     if (x < 1) return;
//     disp(y);
//     puts("");
//     disp1(x-1,y);
// }
// int main()
// {
//     disp1(5,10);
// }


//EX5
// #include <stdio.h>
// void disp(int n)
// {
//     if (n < 1) 
//     {
//         puts("");
//         return;
//     }
//     disp(n-1);
//     printf("%-2d",n);
// }
// void repeat(int a, int n)
// {
//     if (a < 1) return;
//     repeat(a-1,n);
//     disp(n);
// }
// int main()
// {
//     repeat(5,10);
// }


//EX6
// #include <stdio.h>
// void disp(int n)
// {
//     if (n < 1) return;
//     disp(n-1);
//     printf("#");
// }
// void disptotal(int a)
// {
//     if (a < 1) return;
//     disptotal(a-1);
//     disp(a);
//     puts("");
// }
// int main()
// {
//     disptotal(5);
// }


//EX7
// #include <stdio.h>
// void disp(int n)
// {
//     if (n < 1) return;
//     disp(n-1);
//     printf("#");
// }
// void disptotal(int a)
// {
//     if (a < 1) return;
//     disp(a);
//     puts("");
//     disptotal(a-1);
// }
// int main()
// {
//     disptotal(5);
// }


//EX8
// #include <stdio.h>
// int display(int start, int end)
// {
//     printf("%d+", start);
//     if (end>start) return start + display(start + 1, end);
//     else return start;
    
// }
// int main()
// {
//     printf("\b=%d", display(1,10));
// }


//EX9
// #include <stdio.h>
// int Factorial(int n) {return (n <= 1? n:n * Factorial(n-1));}
// int main()
// {
//     printf("1! = %d \n", Factorial(1));
//     printf("2! = %d \n", Factorial(2));
//     printf("3! = %d \n", Factorial(3));
//     printf("4! = %d \n", Factorial(4));
//     printf("9! = %d \n", Factorial(9));
//     return 0;
// }







//EX10
// #include <stdio.h>
// int sum1(int s, int e) {return(s >= e? s:s + sum1(s+1,e));}
// int main()
// {
//     int s,e;
//     printf("첫 번째 수 입력 : ");
//     scanf("%d",&s);
//     printf("두 번째 수 입력 : ");
//     scanf("%d",&e);
//     printf("%d부터 %d까지의 합 = %d",s,e,sum1(s,e));
// }


//EX11
// #include <stdio.h>
// int timeuntil(int e) {return(e <= 1? e: e*timeuntil(e-1));}
// int main()
// {
//     int n;
//     printf("어디까지의 곱을 계산할까요 ? ");
//     scanf("%d",&n);
//     printf("1부터 %d까지의 곱은 %d",n,timeuntil(n));
// }



//EX12
// #include <stdio.h>
// int Recursive(int num) {return (num<=2? 1:Recursive(num-1)+Recursive(num-2));}
// int main()
// {
//     printf("%d",Recursive(3));
// }


//EX13
// #include <stdio.h>
// int BSearchRecur(int arr[], int s, int e, int target)
// {
//     int mid = (s+e)/2;
//     if (arr[mid] == target) return mid;
//     if (s == mid || e == mid) return -1;
//     if (arr[mid] > target) return BSearchRecur(arr,s,mid,target);
//     else if (arr[mid] < target) return BSearchRecur(arr,mid,e,target);
// }

// int main()
// {
//     int arr[] = {10,20,30,40,50,60,70,80,90,100};
//     int idx, target;
//     printf("찾을값: ");
//     scanf("%d",&target);
//     idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1,target);
//     if (idx == -1) printf("탐색 실패\n");
//     else printf("타겠저장인덱스 %d \n",idx);
//     return 0;
// }


//EX14
// #include <stdio.h>
// int powerof2(int a)
// {
//     if (a <= 1) return 2;
//     else return powerof2(a-1) * 2;
// }
// int main()
// {
//     int n;
//     printf("2의 몇승을 구할까요 ? ");
//     scanf("%d",&n);
//     printf("%d입니다.",powerof2(n));
// }


//15
// #include <stdio.h>
// void convert(int a)
// {
//     if (a <= 0) return;
//     convert(a/2);
//     printf("%d",a%2);
// }
// int main()
// {
//     int n;
//     printf("10진수 값 입력 : ");
//     scanf("%d",&n);
//     convert(n);
// }


//16
// #include <stdio.h>
// void split(int a)
// {
//     if (a <= 0) return;
//     printf("%-3d",a%10);
//     split(a/10);
// }
// int main()
// {
//     int n;
//     printf("정수 입력 : ");
//     scanf("%d",&n);
//     split(n);
// }



//17
// #include <stdio.h>
// void show_digit(int x)
// {
//     if (x<=0) return;
//     show_digit(x/10);
//     printf("%-2d",x%10);
// }
// int main()
// {
//     int n;
//     printf("정수를 입력하시오: ");
//     scanf("%d",&n);
//     show_digit(n);
// }

//18
// #include <stdio.h>
// int main()
// {
//     int n, total = 1; 
//     scanf("%d",&n);
//     for (int i = 1; i < n+1; i++)
//         total *= i;
//     printf("%d\n", total);
// }


//19
// #include <stdio.h>
// int sumup(int n) {return(n<= 1? n:n+sumup(n-1));}
// int main()
// {
//     int n;
//     printf("몇까지의 합 ? : ");
//     scanf("%d",&n);
//     printf("%d",sumup(n));
// }


//20
// #include <stdio.h>
// int sumpow3(int n){return(n <= 1? n*n*n: n*n*n+sumpow3(n-1));}
// int main()
// {
//     int n;
//     printf("몇까지의 합 ? : ");
//     scanf("%d",&n);
//     printf("%d",sumpow3(n));
// }



//21
// #include <stdio.h>
// #include <string.h>
// void invert(char str[], int len)
// {
//     if (len == 0) return;
//     printf("%c",str[len-1]);
//     invert(str,len-1);
// }
// int main()
// {
//     char str[100];
//     gets(str);
//     invert(str, strlen(str));
// }


//22
// #include <stdio.h>
// void printodd(int s,int e)
// {
//     if (s > e) return;
//     if (s%2 == 1) printf("%d ",s);
//     printodd(s+1,e);
// }
// int main()
// {
//     int s,e;
//     printf("시작값 : ");
//     scanf("%d",&s);
//     printf("끝 값 : ");
//     scanf("%d",&e);
//     printodd(s,e);
// }


//23
// #include <stdio.h>
// int gcd(int a, int b) {return(a%b? gcd(b,a%b) : b);}
// int main()
// {
//     int a,b;
//     printf("수 1: ");
//     scanf("%d",&a);
//     printf("수 2: ");
//     scanf("%d",&b);
//     printf("%d",gcd(a,b));
// }


