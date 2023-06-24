//5
// #include <stdio.h>
// int main()
// {
//     int arr[] = {60,200,100,80,70}, total = 0,max = arr[0];
//     int size = sizeof(arr) / sizeof(arr[0]), min = arr[0],sec;
//     for (int i = 0; i < size ; i ++)
//     {
//         total += arr[i];
//         if (max < arr[i])
//         {
//             sec = max;
//             max = arr[i];
//         }
//         if (max > arr[i] && sec < arr[i])
//             sec = arr[i];
//         if (min > arr[i])
//             min = arr[i];
//     }
//     printf("합 계 : %d\n",total);
//     printf("평 균 : %d\n",total/size);
//     printf("최대값 : %d\n",max);
//     printf("최소값 : %d\n",min);
//     printf("2번째 큰값 : %d\n",sec);
// }


//7 
// #include <stdio.h>
// int main()
// {
//     int arr[] = {60, 200, 100, 80, 70}, n,  yes = 0;

//     while (1)
//     {
//         printf("찾을 숫자 : ");
//         scanf("%d",&n);
//         for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
//         {
//             if (arr[i] == n)
//             {
//                 printf("뒤에서 %d번째에서 발견\n", (int)sizeof(arr) / sizeof(arr[0]) - i);
//                 yes++;
//             }
//         }
//         if (yes == 0)
//             printf("발견못함\n");
//         yes = 0;
//     }
// }



//13
// #include <stdio.h>

// int main()
// {
//     int M[100],idx =1,agegroup[6] ={0},max=0,min=60;
//     while (idx != 11)
//     {
//         int temp;
//         printf("%d번째 사람의 나이를 입력하시오: ",idx);
//         scanf("%d",&temp);
//         if (temp >= 60 || temp < 10)
//         {
//             printf("==범위를 초과합니다. 다시 입력하세요~\n");
//             continue;
//         }
//         else
//         {
//             M[idx-1] = temp;
//             idx ++;
//         }
//     }
//     printf("<<입력된값들>>\n");
//     for (int i = 0; i < 10; i++)
//     {
//         agegroup[(int)M[i]/10-1] ++;
//         if (max < M[i])
//             max = M[i];
//         if (min > M[i])
//             min = M[i];
//         printf("M[%d]=%d  ",i,M[i]);
//         if ((i+1)%5 == 0)
//             printf("\n");
//     }
//     printf("<<연령대별 인원>>\n");
//     for (int i =0 ; i< 5; i++)
//     {
//         printf("%d대=%d명  ", (i+1)*10,agegroup[i]);
//     }
//     printf("\n\n");
//     printf("가장 많은 나이 : %d\n",max);
//     printf("가장 적은 나이 : %d\n",min);
// }




//14 여기서 다시 질문
// #include <stdio.h>
// void printing(int k[],int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (i == size-1)
//             printf("%d\n",k[i]);
//         else
//             printf("%d, ",k[i]);
//     }
// }
// int main()
// {
//     int M[] = {10,20,30,40,50,60,70,80,90,100},size =sizeof(M)/sizeof(M[0]);
//     printf("이동전 : ");
//     printing(M,size);
//     for (int i = 1; i < size; i ++);
//         M[i-1] = M[i]; 
//     printf("이동후 : ");
//     printing(M,size);
// }


//15
// #include <stdio.h>
// void printing(int k[],int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (i == size-1)
//             printf("%d\n",k[i]);
//         else
//             printf("%d, ",k[i]);
//     }
// }
// int main()
// {
//     int M[] = {10,20,30,40,50,60,70,80,90,100}, size = sizeof(M)/sizeof(M[0]);
//     printf("이동전 : ");
//     printing(M, size);
//     for (int j = 0; j < 2; j++)
//     {
//         for (int i = size -1; i >= 0; i--)
//             M[i+1] = M[i];
//     }
//     printf("이동후 : ");
//     printing(M, size);
// }


//16
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int arr[7]={10000,5000,1000,500,100,50,10},num;
//     printf("월급입력 : ");
//     scanf("%d",&num);

//     for (int i = 0; i < 7; i++)
//     {
//         printf("%-5d%-6s----------%d매\n",arr[i],"pay",  num/arr[i]);
//         num %= arr[i];
//     }
// }



//19
// #include <stdio.h>

// void printing(int a[],int size)
// {

//     for (int i = 0; i < size; i++)
//         printf("%d ", a[i]);
//     printf("\n");
// }
// int main()
// {
//     int A[] = {8,3,5,1,6,9,4,2,7,10};
//     printf("원본 A : ");
    
//     int size = sizeof(A)/sizeof(A[0]);
//     int B[10] ={0}, C[10] ={0},idxb=0,idxc=0;
//     printing(A,size);
//     for (int i = 0; i < size;i++)
//     {
//         if (A[i]%2)
//             C[idxc++] = A[i];
//         else
//             B[idxb++] = A[i];
//     }
//     printf("짝수배열 B: ");
//     printing(B,idxb);
//     printf("홀수배열 C: ");
//     printing(C,idxc);
// }



//20 merge할때 정렬해서 넣기
// #include <stdio.h>
// int main()
// {
//     int A[] = {20, 50, 80,90, 100,110,120,130,140,150}, B[] = {10, 30, 40, 60, 70 }, C[100], idxa=0,idxb=0;
//     for (int i = 0; i < sizeof(A)/sizeof(A[0]) + sizeof(B)/sizeof(B[0])+1; i ++)
//     {
        // if (idxa ==sizeof(A)/sizeof(A[0]) ) C[i] = B[idxb++];
        // else if (idxb ==sizeof(B)/sizeof(B[0]) ) C[i] = A[idxa++];
        // else if (A[idxa] < B[idxb] && idxa < sizeof(A)/sizeof(A[0])) 
        //     C[i] = A[idxa++];
        // else if (A[idxa] > B[idxb] && idxb < sizeof(B)/sizeof(B[0])) 
        //     C[i] = B[idxb++];
//     }
//     printf("int C[100]={");
//     for (int i =0; i < sizeof(A)/sizeof(A[0]) + sizeof(B)/sizeof(B[0]); i++)
//     {
//         if (i != sizeof(A)/sizeof(A[0]) + sizeof(B)/sizeof(B[0])-1)
//             printf("%d,",C[i]);
//         else
//             printf("%d}",C[i]);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int A[] = {20, 50, 80,90, 100,110,120,130,140,150}, B[] = {10, 30, 40, 60, 70 }, C[100], idxa=0,idxb=0;
//     int aLen=sizeof(A)/sizeof(A[0]), bLen=sizeof(B)/sizeof(B[0]);

//     for (int i = 0; ; i ++)
//     {
//         if (A[idxa] == '\0' && B[idxa] == '\0')break;
//         if(A[idxa]==NULL) C[i]=B[idxb++];
//         else if (B[idxa]==NULL) C[i]=A[idxa++];
//         else (A[idxa]<B[idxb] )
//             C[i]= A[idxa++];
//         else if (B != '\0')
//             C[i] = B[idxb++];
//     }

//     printf("int C[100]={");
//     for (int i =0; i < aLen + bLen; i++)
//     {
//         if (i != aLen + bLen-1)
//             printf("%d,",C[i]);
//         else
//             printf("%d}",C[i]);
//     }
// }
//22
// #include <stdio.h>
// int main()
// {
//     int i;
//     int M[] = {5,2,8,4,7};
//     int im;
//     puts("<<소트전>>");
//     for(int a=0;a<5;a++)
//         printf("M[%d]=%d ",a,M[a]);
//     puts("\n");
//     for (int i = 0 ; i < sizeof(M)/sizeof(M[0]); i++)
//     {
//         for (int j = 0 ; j < sizeof(M)/sizeof(M[0]) - i -1; j++)
//         {
//             if (M[j] > M[j+1])
//             {
//                 int temp = M[j];
//                 M[j] = M[j+1];
//                 M[j+1] = temp;
//             }
//         }
//     }
//     puts("<<소트후>>");
//     for (int a=0;a<5;a++)
//         printf("M[%d]=%d ",a,M[a]);
//     puts("\n");
// }



//24
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     int min = 1, max = 999, arr[100];
//     srand(time(0));
//     for (int i =0; i < 100; i++)
//     {
//         arr[i] = rand() % (max - min +1) + min;
//     }
//     for (int i =0; i < 99; i++)
//     {
//         for (int j = i+1; j <100; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 100 ; i++)
//     {
//         printf("%-3d ",arr[i]);
//         if (i%10 == 9)
//             puts("");
//     }
// }



//25 binary search
// #include <stdio.h>
// int main()
// {
//     int M[] = {57, 65, 88, 40, 90, 78, 33, 70};
//     for (int i = 0; i < sizeof(M) / sizeof(M[0]) - 1; i++)
//     {
//         for (int j = i + 1; j < sizeof(M) / sizeof(M[0]); j++)
//         {
//             if (M[i] > M[j])
//             {
//                 int temp = M[i];
//                 M[i] = M[j];
//                 M[j] = temp;
//             }
//         }
//     }
//     printf("정렬후 : ");
//     for (int i = 0; i < sizeof(M) / sizeof(M[0]); i++)
//     {
//         printf("%d ", M[i]);
//     }
//     puts("");
//     while (1)
//     {
//         int n;
//         printf("찾을 값 : ");
//         scanf("%d", &n);
//         int l = 0, r = sizeof(M) / sizeof(M[0]) - 1, mid;
//         while (1)
//         {
//             mid = (l + r) / 2;
//             if (M[mid] == n)
//             {
//                 printf("%d번째에서 발견됨\n", mid + 1);
//                 break;
//             }
//             if (l == r)
//             {
//                 printf("값이 존재하지 않습니다.\n");
//                 break;
//             }
//             if (M[mid] > n)
//                 r = mid - 1;
//             else
//                 l = mid + 1;
//         }
//     }
// }

//28
// #include <stdio.h>

// void changebase(int n , int b)
// {
//     int r = n % b;
//     if (n > 0) changebase(n/b,b);
//     if (r < 10) printf("%d", r);
//     else printf("%c",r - 10 + 'A');
// }
// int main()
// {
//     int n,b;
//     printf("정수값을 입력하세요 : ");
//     scanf("%d",&n);
//     printf("몇 진수로 출력할까요? : ");
//     scanf("%d",&b);
//     changebase(n,b);
//     puts("입니다.");
// }


// #include <stdio.h>

// void changebase(int n , int b)
// {
//     if(n==0)    return;
//     changebase(n/b,b);
//     if(n%b > 9) printf("%c ", n%b +55);
//     else printf("%d ", n%b);
// }
// int main()
// {
//     int n,b;
//     printf("정수값을 입력하세요 : ");
//     scanf("%d",&n);
//     printf("몇 진수로 출력할까요? : ");
//     scanf("%d",&b);
//     changebase(n,b);
//     puts("입니다.");
// }
// 29
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     int max = 9, min = 1, arr[6] = {0}, idx = 0, a, b, c, t = 0;

//     while (arr[5] == 0)
//     {
//         srand(time(0));
//         int randomnum = rand() % (max - min + 1) + min, n = 0;
//         for (int i = 0; i < 6; i++)
//             if (randomnum == arr[i])
//                 n++;
//         if (n == 0)
//             arr[idx++] = randomnum;
//     }
//     printf("복권번호를 넣으세요");
//     scanf("%d %d %d", &a, &b, &c);
//     printf("컴퓨터 추천 번호 : ");
//     for (int i = 0; i < 6; i++)
//         printf("%d ", arr[i]);
//     for (int j = 0; j < 6; j++)
//         if (a == arr[j] || b == arr[j] || c == arr[j])
//             t++;
//     if (t == 3)
//         puts("\n축하합니다 1등 당첨 !! 상금은 10000000원 입니다~");
//     else if (t == 2)
//         puts("\n축하합니다 2등 당첨 !! 상금은 5000000원 입니다~");
//     else
//         printf("\n꽝");
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     int arr[6], user[3],t = 0, k;
//     srand(time(0));
//     for(int i=0; i<6; i++)
//     {  
//         arr[i] = rand()%9+1;
//         for (k = 0; k <i; k++)
//             if (arr[i]==arr[k])
//                 break;
//         if (k<i)
//             i--;
//     }

//     printf("복권번호를 넣으세요");
//     scanf("%d %d %d", &user[0], &user[1], &user[2]);
//     printf("컴퓨터 추천 번호 : ");
//     for (int i = 0; i < 6; i++)
//         printf("%d ", arr[i]);
//     for (int j = 0; j < 6; j++)
//         for (int k = 0; k < 3; k++)
//                 if (arr[j] == user[k]) t++;
//     if (t == 3) 
//         puts("\n축하합니다 1등 당첨 !! 상금은 10000000원 입니다~");
//     else if (t == 2)
//         puts("\n축하합니다 2등 당첨 !! 상금은 5000000원 입니다~");
//     else
//         printf("\n꽝");
// }

//30
// #include <stdio.h>
// int main()
// {
//     int n, arr[100];
//     for (int i = 0; i < 10; i ++)
//     {
//         printf("\n정수 입력 : ");
//         scanf("%d",&n);
//         arr[i] = n;
//         for (int j = i ; j > 0 && arr[j-1] > n; j--)
//         {
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
//         }
//         for (int k = 0; k < i + 1; k++)
//             printf("%d ", arr[k]);
//     }
// }


//31
// #include <stdio.h>
// void printing(int arr[], int k)
// {
//     printf("[");
//     for (int i = 0; i < k; i++)
//         printf("%d ", arr[i]);
//     printf("]\n");
// }
// int main()
// {
//     int Arr[100] = {10, 20, 30, 40, 50}, k = 5;
//     while (1)
//     {
//         int n;
//         puts("=== 메뉴 ===");
//         puts("1. 삽입");
//         puts("2. 삭제");
//         puts("3. 종료");
//         printf("선택 ==>");
//         scanf("%d", &n);
//         if (n == 1)
//         {
//             int idx, num;
//             printf("몇 번째에 삽입할까요 ? ");
//             scanf("%d %d", &idx, &num);
//             for (int i = k - 1; i >= idx; i--)
//                 Arr[i + 1] = Arr[i];
//             Arr[idx] = num;
//             k++;
//             printing(Arr, k);
//         }
//         else if (n == 2)
//         {
//             int idx;
//             printf("몇 번째 수를 삭제 할까요 ? ");
//             scanf("%d", &idx);
//             for (int i = idx; i < k - 1; i++)
//             {
//                 Arr[i] = Arr[i + 1];
//             }
//             k--;
//             Arr[k] = "\0";
//             printing(Arr, k);
//         }
//         else if (n == 3)
//         {
//             printf("프로그램을 종료합니다.\n");
//             break;
//         }
//     }
// }



//32
// #include <stdio.h>
// int main()
// {
//     int a[100],n,k;
//     printf("정수개수/계산횟수 : ");
//     scanf("%d%d", &n, &k);
//     for (int i =0 ; i < n; i++)
//         scanf("%d",&a[i]);
//     for (int i = 0 ; i < k; i++)
//     {
//         int max = a[0];
//         for (int j = 0 ; j < n; j++)
//             if (max < a[j]) max = a[j];
//         for (int j = 0; j < n; j++)
//             a[j] = max - a[j];
//     }
//     printf("%d번 연산 후 : ",k);
//     for (int i =0; i < n ; i ++)
//     {
//         if (i != n-1) printf("%d, ",a[i]);
//         else printf("%d",a[i]);
//     }
// }


//33
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int arr[6]={0};
//     srand(time(0));
//     for (int i = 0 ; i < 50 ; i++)
//     {
//         int random = rand() % 6 + 1;
//         arr[random-1] ++;
//     }
//     int max = arr[0],maxj;
//     for (int j = 0 ; j < 6 ; j++)
//     {
//         printf("%d번 : %d회\n",j+1,arr[j]);
//         if (max < arr[j]) 
//         {
//             max = arr[j];
//             maxj = j;
//         }
//     }
//     printf("가장 많이 나온 번호/회수 = %d / %d\n", maxj+1, max);
// }



