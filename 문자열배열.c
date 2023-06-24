//1
// #include <stdio.h>
// int main(void)
// {
//     char str[50];
//     int idx=0;
    
//     printf("문자열 입력: ");
//     scanf("%s",str);
//     printf("입력 받은 문자열: %s \n",str);
//     printf("문자 단위 출력: ");
//     while (str[idx] != '\0')
//     {
//         printf("%c",str[idx]);
//         idx ++;
//     }
//     printf("\n");
//     return 0;
// }


//EX1
// #include <stdio.h>
// int main(){
//     char str[100],ind =0;
//     printf("문자열 입력 : ");
//     // scanf("%s",str); //끝을 인식하는 기호가 스페이스와 엔터다
//     gets(str); //끝을 인식하는 기호가 엔터이다.
//     while (str[ind]!='\0'){
//         ind ++;
//     }
//     printf("입력한 문자는 %d 글자 입니다.", ind);
// }


//EX2
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100];
//     printf("문자열입력 : ");
//     gets(str);
//     for (int i =0; i < strlen(str)-1; i++){
//         for (int j =i+1; j < strlen(str); j ++){
//             if (str[i] < str[j]) {
//                 char temp = str[j];
//                 str[j] = str[i];
//                 str[i] = temp;
//             }
//         }


//     }
//     printf("정렬후   : %s",str);
// }



//EX3
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[100],ch;
//     printf("문자열 : ");
//     gets(str);
//     printf("찾을 문자 : ");
//     scanf("%c",&ch);
//     for (int i=0; i < strlen(str); i++){
//         if (str[i] == ch){
//             printf("%c은 앞에서 %d번째 뒤에서 %d번째입니다.\n",ch,i+1,(strlen(str)-i));
//         }
//     }
// }


//EX4
// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str[100];
//     printf("문자열 입력 : ");
//     gets(str);
//     printf("뒤집은후 문자열 : ");
//     for (int i = 0; i  <(int) strlen(str)/2;i++){
//         char temp = str[i];
//         str[i] = str[strlen(str)-1-i];
//         str[strlen(str)-1-i] = temp;
//     }
//     puts(str);
// }


//EX5
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     int ind = 0, num;
//     printf("문자열 입력 : ");
//     gets(str);
//     for (int num = 0;; num++)
//     {
//         if (str[ind] == ' ' || str[ind] == NULL)
//             ind++;
//         if (str[ind] == NULL)
//             break;
//     }
//     printf("단어는 %d개입니다.", num);
// }



//EX6
// #include <stdio.h>
// int main(){
//     char str[100],maxchar=0;
//     printf("단어입력 : ");
//     gets(str);
//     int ind =0;
//     while (str[ind]!='\0'){
//         if (str[ind] > maxchar)
//             maxchar = str[ind];
//         ind ++;
//     }
//     printf("아스키코드값이 가장 큰 문자는 %c",maxchar);
// }

// EX7
//  #include <stdio.h>
//  #include <string.h>
//  int main()
//  {
//      int a[26] = {0};
//      char str[100];
//      printf("문자열을 입력 하세요 : ");
//      gets(str);
//      for (int i = 0; i < strlen(str); i++)
//      {
//          if (str[i] >= 'A' && str[i] <= 'Z'){
//              a[(int)(str[i]- 'A')] ++;
//          }
//          else if (str[i] >= 'a' && str[i] <= 'z'){
//              a[(int)(str[i]- 'a')] ++;
//          }
//      }
//      for (int i = 0; i < 26; i++){
//          printf("%c=%d  ", (char) (97+i),a[i]);
//          if ((i+1)%10 == 0){
//              printf("\n");
//          }
//      }
//  }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     int idx = 0;
//     printf("문자열을 입력하세요 : ");
//     gets(str);
//     for (int j = 97; j < 123; j++)
//     {
//         int n =0;
//         for (int i = 0; i < strlen(str); i++)
//         {
//             if (str[i] == j)
//                 n++;
//         }
//         printf("%c=%d  ",j,n);
//         idx ++;
//         if (idx % 10 == 0)
//             printf("\n");
//     }
// }

// EX8
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100], s;
//     int n = 0;
//     printf("문자열을 입력하세요: ");
//     gets(str);
//     printf("문자를 입력하세요: ");
//     s = getchar();
//     if (str[0] == s)
//         n++;
//     for (int i = 1; i < strlen(str) - 1; i++)
//     {
//         if (str[i] == ' ' && str[i + 1] == s)
//             n++;
//     }
//     printf("%c로 시작하는 단어는 %d개", s, n);
// }

//EX9 다시 풀었음
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100],ch;
//     int a[26] = {0},max=0;
//     printf("문자열입력: ");
//     gets(str);
//     for (int j = 97; j < 123; j++)
//     {
//         int n =0;
//         for (int i = 0; i < strlen(str); i++)
//         {
//             if (str[i] == j)
//                 n++;
//         }
//         if (max < n)
//         {
//             max = n;
//             ch = j;
//         }
//     }
//     printf("가장 많은 문자는 %c이고 %d", ch,max);
// }


//EX10
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100], str2[100];
//     printf("문자열을 입력하시오: ");
//     gets(str);
//     printf("찾을 문자열: ");
//     gets(str2);
//     for (int i = 0; i < strlen(str) - strlen(str2) + 1; i++)
//     {
//         if (str2[0] == str[i])
//         {
//             int n = 0, ind = i;
//             for (int j = 0; j < strlen(str2); j++)
//             {
//                 if (str[ind] != str2[j])
//                     n++;
//                 ind++;
//             }
//             if (n == 0)
//                 printf("%s가 존재합니다.", str2);
//             else
//                 printf("%s가 존재하지 않습니다.", str2);
//         }
//     }
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100], str2[100], temp[100];
    
//     printf("문자열을 입력하시오: ");
//     gets(str);
//     printf("찾을 문자열: ");
//     gets(str2);
//     int n =0,s,e;
//     for (int i = 0 ; i < strlen(str); i++)
//     {
        
//         int s = -1, e = -1;
//         if (str[i] == ' ' && s == -1 || i ==0)
//             s = i;
//         else if (str[i] == ' ' || str[i] == '\0')
//         {
//             e = i-1;
            
//             for (int j = 0; j < e-s; j ++ )
//             {
//                 temp[j] = str[j+s];
//             }
            
//             temp[strlen(temp)] = '\0';
//             printf("temp = %s",temp);
//             if (strcmp(str2,temp)==0)
//             {
//                 printf("%s가 존재합니다.",str2); 
//                 break;
//             }
//             n++;

//         }
//         s = e+1;
//     }
//     if (n == 0)
//         printf("존재하지 않음");
// }


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100], str2[100], temp[100];
    
//     printf("문자열을 입력하시오: ");
//     gets(str);
//     printf("찾을 문자열: ");
//     gets(str2);
//     int n = 0, j = 0;
//     for (int i = 0; i <=strlen(str); i++)
//     {

//         if (str[i] == ' ' || str[i] == '\0')
//         {
//             temp[j] = NULL;
//             if (strcmp(str2, temp) == 0)
//             {
//                 printf("%s가 존재합니다.", str2);
//                 n++;
//                 break;
//             }
//             if (str[i] == NULL)
//                 break;
//             j = 0;
//         }
//         if (str[i] != ' ' && str[i] != '\0')    
//             temp[j++] = str[i];
//     }
//     if (n == 0)
//         printf("존재하지 않습니다.\n");
// }

//EX11
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int ind = 0;
//     char str[100], str2[100];
//     printf("문자열을 입력 하세요: ");
//     gets(str);
//     printf("입력데이터: %s\n", str);
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[ind] = str[i] + ('a' - 'A');
//             ind++;
//         }
//         else if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[ind] = str[i] - ('a' - 'A');
//             ind++;
//         }
//         else if (str[i] == ' ')
//             continue;
//         else
//         {
//             str[ind] = str[i];
//             ind++;
//         }
//     }
//     str[ind] = '\0';
//     printf("출력데이터: %s\n", str);
// }


//EX12
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     int s,n,idx=0;
//     printf("원형문자열 : ");
//     gets(str);
//     printf("몇 번째부터 몇글자를 지울까요? : ");
//     scanf("%d%d", &s, &n);
//     for (int i = s;; i++)
//     {
//         str[i] = str[i + n];
//         if (str[i] == NULL)
//             break;
//     }
//     printf("지운 후 : %s",str);
// }



//EX13
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     printf("문자열을 입력 : ");
//     gets(str);
//     if (str[0] == '"')
//     {
//         if ('a' <= str[1] && str[1] <= 'z')
//             str[1] -= ('a' -'A');
//         if (str[strlen(str)-2] != '.')
//         {
//             str[strlen(str)-1] = '.';
//             str[strlen(str)] = '"';
//         }
//     }
//     printf("봐뀐 후의 문자열 : %s",str);
// }


//EX14 한번더 풀었음
// #include <stdio.h>
// #include <string.h>

// void encode(char s[100],int key)
// {
//     for (int i = 0; i < key; i++) {    
//         int temp = s[0];
//         for (int i = 0; i < strlen(s)-1;i++)
//         {
//             s[i] = s[i + 1];
//             if (s[i] >= 'a' && s[i] <= 'z')
//                 s[i] -= ('a'-'A'); 
//         }
//         s[strlen(s)-1] = temp;
//     }
//     s[strlen(s)] = '\0';
// }

// int main()
// {
//     char str[100];
//     printf("평 문 : ");
//     gets(str);
//     encode(str,3);
//     printf("암호문 : %s",str);
// }