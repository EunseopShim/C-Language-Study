//2
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     /* 2차원 배열의 초기화의 예 1*/
//     int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int arr2[3][3] = {{1},{4,5},{7,8,9}};
//     int arr3[3][3] = {1, 2, 3, 4, 5, 6, 7};

//     for (i = 0 ; i<3; i++)
//     {
//         for(j = 0 ; j < 3; j++)
//             printf("%d ",arr1[i][j]);
//         puts("");
//     }
//     for (i = 0 ; i<3; i++)
//     {
//         for(j = 0 ; j < 3; j++)
//             printf("%d ",arr2[i][j]);
//         puts("");
//     }
//     for (i = 0 ; i<3; i++)
//     {
//         for(j = 0 ; j < 3; j++)
//             printf("%d ",arr3[i][j]);
//         puts("");
//     }
// }


//5
// #include <stdio.h>
// int main()
// {
//     int M[3][6] = {{1,2,4,5,8,9},{50,80,70,60,45,70},{0}};
//     puts("          == Grades ==          ");
//     puts("num          grade         place");
//     for (int i = 0; i < 6 ; i++)
//     {
//         M[2][i]=1;
//         for (int j = 0; j <6; j++)
//         {
//             if (M[1][i] < M[1][j]) M[2][i]++;
//             //else if (M[1][i] > M[1][j]) M[2][j]++;
//         }
//     } 
//     for (int i = 0; i < 6; i++)
//         printf("%-10d%-10d%-10d\n",M[0][i],M[1][i],M[2][i]);
// }


//6
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int dab[] = {1, 2, 3, 4, 1}, arr[3][9] = {0};
//     char str[3][100];
//     printf("입력 데이터 ");
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 6; j++)
//             scanf("%d", &arr[i][j]);
//     puts("          == 채점 결과 ==          \n");
//     puts("번호   1   2   3   4   5   점수   석차   그래프");
//     for (int i = 0; i < 3; i++)
//     {
//         int score = 0;
//         for (int j = 0; j < 6; j++)
//             if (arr[i][j] == dab[j - 1])
//                 score += 20;
//         arr[i][6] = score;
//         for (int j = 0; j < score / 5; j++)
//             str[i][j] = '*';
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         arr[i][7]++;
//         for (int j = i + 1; j < 3; j++)
//         {
//             if (arr[i][6] < arr[j][6])
//                 arr[i][7]++;
//             else if (arr[i][6] > arr[j][6])
//                 arr[j][7]++;
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 8; j++)
//         {
//             if (j == 0 || j == 6 || j == 7)
//                 printf("%-4d", arr[i][j]);
//             else if (arr[i][j] == dab[j - 1])
//                 printf("%-4s", "O");
//             else
//                 printf("%-4s", "X");
//         }
//         printf("%s", str[i]);
//         puts("");
//     }
// }


//7
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char M[][7]={"BANANA","APPLE","PEAR","ORANGE"};
//     printf("SORT 전 : ");
//     for (int i = 0; i < sizeof(M) / sizeof(M[0]) ; i++)
//     {
//         printf("%s ",M[i]);
//     }
//     puts("");
//     printf("SORT 후 : ");
//     for (int j = 0; j < sizeof(M)/ sizeof(M[0])-1 ; j++)
//     {
//         for (int k = j+1; k < sizeof(M) / sizeof(M[0]) ; k ++)
//         {
//             if (strcmp(M[j],M[k]) > 0)
//             {
//                 char temp[7];
//                 strcpy(temp,M[j]);
//                 strcpy(M[j], M[k]);
//                 strcpy(M[k],temp);
//             }
//         }
//     }
//     for (int i = 0; i < sizeof(M) / sizeof(M[0]) ; i++)
//     {
//         printf("%s ",M[i]);
//     }
// }


//

//10
// #include <stdio.h>
// int main()
// {
//     int arr[10][10][3] = {0};
//     //initionalization
//     for (int i = 0; i < 10 ; i++)
//     {
//         for (int j = 0 ; j < 10 ; j++)
//         {
//             arr[i][j][0] = 65 + i;
//             arr[i][j][1] = i + 1;            
//         }
//     }

//     //좌석 결정 + 출력
//     while (1)
//     {
//         int n;
//         puts("==메뉴==");
//         puts("1. 좌석현황 출력");
//         puts("2. 좌석예약");
//         puts("3. 종료");
//         puts("=>선택 ");
//         scanf("%d",&n);
//         if (n == 1)
//         {
//             puts("  1 2 3 4 5 6 7 8 9 10");
//             for (int i = 0; i < 10 ; i ++)
//             {
//                 printf("%c ",arr[i][0][0]);
//                 for (int j = 0; j < 10 ; j ++)
//                     printf("%d ",arr[i][j][2]);
//                 puts("");
//             }
//         }
//         else if (n == 2)
//         {
//             char str[2];
//             int numidx,chidx;
//             printf("좌석번호 : ");
//             scanf("%s",str);
//             chidx = str[0] -65;
//             numidx = str[1] - 49;
//             if (chidx > 9 || chidx <0 || numidx >9 || numidx < 0) printf("ㅠㅠ 없는 좌석입니다.");
//             else if (arr[chidx][numidx][2] == 1) printf("ㅠㅠ 이미 예약이 되어있는 좌석입니다.\n");
//             else arr[chidx][numidx][2] = 1;
//         }
//         else break;
//     }
// }

//11
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     struct timespec start, end;
//     int nplayer,max=0,maxi;
//     int history[100]={0};
//     char names[100][20];
//     printf("게임 인원 : ");
//     scanf("%d",&nplayer);
//     for (int i = 0; i < nplayer; i++)
//     {
//         printf("%d번 이름 : ",i+1);
//         scanf("%s",names[i]);
//     }
//     for (int i = 0; i < nplayer; i++)
//     {
//         clock_gettime(CLOCK_MONOTONIC,&start);
//         char enter[100];
//         puts("\n-- 스피드 구구단 게임 --");
//         puts("당신의 계산 능력을 테스트하세요 !!!");
//         printf("%s님 ~ 테스트 하겠습니다.\n",names[i]);
//         puts("크게 심호흡을 하시고");
//         puts("준비되면 엔터를 누르세요...");
//         gets(enter);
//         if (strlen(enter) == 0)
//         {
//             srand(time(0));
            
//             int answer;
//             for (int j = 0; j < 10; j++)
//             {
//                 int l = rand() % 9 + 1;
//                 int r = rand() % 9 + 1;
//                 printf("[문제%d] : %d * %d = ",j+1,l,r);
//                 scanf("%d",&answer);
//                 if (answer == l * r) history[i] += 10;
//             }
//         }
//         clock_gettime(CLOCK_MONOTONIC,&end);
//         printf("%s님 점수 : %d점(총 %.2f초)\n",names[i],history[i],(end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9 );
//     }
//     puts("이름    점수");
//     puts("----------");
//     for (int i = 0; i < nplayer; i++)
//     {
//         printf("%s  %d\n",names[i],history[i]);
//         if (max < history[i])
//         {
//             max = history[i];
//             maxi = i;
//         }
//     }
//     puts("----------");
//     printf("1등    %s",names[maxi]);
// }


//13
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void insert(int arr[][11], int i)
// {
//     arr[i][i] = arr[i][10];
//     for (int j = 0; j < i; j++)
//         arr[i][j] = arr[i-1][j];
//     for (int k = i; k > 0; k--)
//     {
//         if(arr[i][k] > arr[i][k-1])
//         {
//             int temp = arr[i][k];
//             arr[i][k] = arr[i][k-1];
//             arr[i][k-1] = temp;
//         }
//     }
// }
// int main()
// {
//     int history[10][11] = {0};
//     srand(time(0));
//     for (int i = 0; i < 10; i++)
//     {
//         int random = rand() % 100;
//         history[i][10] = random;
//         insert(history, i);
//     }
//     for (int i = 0; i < 10; i++)
//         printf("[%-2d] 순위:%-5d%-5d%-5d%-5d%-5d\n",history[i][10],history[i][0],history[i][1],history[i][2],history[i][3],history[i][4]);
// }




//14
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int total;
// void printing(int arr[5][5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//             printf("%-2d",arr[i][j]);
//         puts("");
//     }
// }
// void initializing(int arr[5][5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             int random = rand()%2;
//             arr[i][j] = random;
//         }
//     }
// }
// int checkcheck(int arr[5][5])
// {
//     int n[4] = {0}, cr1 = 0, cr2 = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         int c = 0, r = 0;
//         for (int j = 0; j < 4; j++)
//         {
//             if (arr[i][j] == arr[i][j + 1]) c++;
//             if (arr[j][i] == arr[j + 1][i]) r++;
//         }
//         if (c == 4)
//         {
//             printf("%d행이 모두 같습니다.\n", i + 1);
//             n[0] = 1;
//             total++; 
//         }
//         if (r == 4)
//         {
//             printf("%d열이 모두 같습니다.\n", i + 1);
//             n[1] = 1;
//             total++; 
//         }
//         if (i != 4 && arr[i][i] == arr[i + 1][i + 1]) cr1++;
//         if (i != 4 && arr[4 - i][i] == arr[3 - i][i + 1]) cr2++;
//     }
//     if (cr1 == 4)
//     {
//         puts("우하향 대각선이 모두 같습니다.");
//         n[2] = 1;
//         total++;
//     }
//     if (cr2 == 4)
//     {
//         puts("우상향 대각선이 모두 같습니다.");
//         n[3] = 1;
//         total++;
//     }
//     if (n[0] ==1 && n[1] ==1 && n[2] ==1 && n[3] == 1) 
//     {
//         puts("빙고!");
//         return 1;
//     }
//     else return 0;
// }
// int main()
// {
//     int checkboard[5][5] = {0};
//     int try = 0;        
//     srand(time(0));
//     while(1)
//     {
//         total = 0;

//         initializing(checkboard);
//         printing(checkboard);

//         if (checkcheck(checkboard) == 1) 
//         {
//             printf("%d번만에 성공\n",try);
//             break;
//         }
//         if (total >= 4)
//         {
//             printf("total =%d\n",total);
//             getchar();
//         }
//         else printf("\n%d 째 \n",try);
//         try++;
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int total;
// void printing(int arr[5][5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//             printf("%-2d",arr[i][j]);
//         puts("");
//     }
// }
// void initializing(int arr[5][5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             int random = rand()%2;
//             arr[i][j] = random;
//         }
//     }
// }
// int checkcheck(int arr[5][5])
// {
//     int n[4] = {0};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (arr[i][0] == arr[i][j]) n[0]++;
//             if (arr[0][i] == arr[j][i]) n[0]++;
//         }
//         if (i != 4 && arr[0][0] == arr[i][i]) n[2]++;
//         if (i != 4 && arr[4 - i][i] == arr[3 - i][i + 1]) cr2++;
//     }
//     if (cr1 == 4)
//     {
//         puts("우하향 대각선이 모두 같습니다.");
//         n[2] = 1;
//         total++;
//     }
//     if (cr2 == 4)
//     {
//         puts("우상향 대각선이 모두 같습니다.");
//         n[3] = 1;
//         total++;
//     }
//     if (n[0] ==1 && n[1] ==1 && n[2] ==1 && n[3] == 1) 
//     {
//         puts("빙고!");
//         return 1;
//     }
//     else return 0;
// }
// int main()
// {
//     int checkboard[5][5] = {0};
//     int try = 0;        
//     srand(time(0));
//     while(1)
//     {
//         total = 0;

//         initializing(checkboard);
//         printing(checkboard);

//         if (checkcheck(checkboard) == 1) 
//         {
//             printf("%d번만에 성공\n",try);
//             break;
//         }
//         if (total >= 4)
//         {
//             printf("total =%d\n",total);
//             getchar();
//         }
//         else printf("\n%d 째 \n",try);
//         try++;
//     }
// }

//15
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     char map[10][10];
//     int n;
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//             map[i][j] = 'o';
//     }
//     srand(time(0));
//     while (1)
//     {
//         puts("== menu ==");
//         puts("1. 폭탄 던지기(x, y좌표 난수로 발생)");
//         puts("2. 배열보기");
//         puts("3. 종료");
//         scanf("%d", &n);
//         if (n == 1)
//         {
//             int x = rand() % 10;
//             int y = rand() % 10;
//             int sx = x-1, ex = x+1, sy = y-1, ey = y + 1; 
//             if (x == 0) sx++;
//             if (y == 0) sy++;
//             if (x == 9) ex--;
//             if (y == 9) ey--;
//             for (int i = sx; i <= ex; i++)
//                 for (int j = sy; j <= ey; j++)
//                     map[j][i] = 'x';
//         }
//         else if (n == 2)
//         {
//             for (int i = 0; i < 10; i++)
//             {
//                 for (int j = 0; j < 10; j++)
//                     printf("%-2c", map[i][j]);
//                 puts("");
//             }
//         }
//         else if (n == 3)
//             break;
//         else
//             puts("잘못된 인풋입니다.");
//     }
// }





//16
// #include <stdio.h>
// void printing(int arr[5][5])
// {
//     for (int i = 0; i < 5; i ++)
//     {
//         for (int j = 0; j <5; j++)
//             printf("%-3d",arr[i][j]);
//         puts("");
//     }
// }
// void num1(int arr[5][5])
// {
//     int n=1;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//             arr[j][i] = n++;
//     }
// }
// void num2(int arr[5][5])
// {
//     int n = 1;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 2-i; j < i +3; j++)
//             arr[i][j] = n++;
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = i +1; j < -i+4; j++)
//             arr[i+3][j] = n++;
//     }
// }
// void num3(int arr[5][5])
// {
//     int n = 1;
//     for (int i = 0; i  < 3; i++)
//     {
//         for (int j = -i+2; j < i + 3; j++)
//             arr[4-j][4-i] = n++;
//     }
//     for (int i =0; i < 2; i++)
//     {
//         for(int j= i; j < -i+3; j++)
//             arr[3-j][1-i] = n++;
//     }
// }

// void num4(int arr[5][5])
// {
//     int n = 1;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < i+1 ; j++)
//             arr[j][i-j] = n++;
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         for(int j= 0; j < 4-i;j++)
//             arr[j+1+i][-j+4] = n++;
//     }
// }

// void num5(int arr[5][5])
// {
//     int n = 1;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < i+1 ; j++)
//             arr[j][4-i+j] = n++;
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         for(int j= 0; j < 4-i;j++)
//             arr[j+1+i][j] = n++;
//     }
// }

// void num6(int arr[5][5])
// {
//     int n = 1;

// }

// int main()
// {
//     int arr1[5][5] = {0};
//     num1(arr1);
//     printing(arr1);
//     puts("");

//     int arr2[5][5]={0};
//     num2(arr2);
//     printing(arr2);
//     puts("");

//     int arr3[5][5]={0};
//     num3(arr3);
//     printing(arr3);
//     puts("");

//     int arr4[5][5]={0};
//     num4(arr4);
//     printing(arr4);
//     puts("");

//     int arr5[5][5]={0};
//     num5(arr5);
//     printing(arr5);
//     puts("");

//     int arr6[5][5]={0};
//     num6(arr6);
//     printing(arr6);
//     puts("");
// }



