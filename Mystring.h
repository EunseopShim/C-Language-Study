#include <stdio.h>
void Mystrreverse(char *ap);
int Mystrlen(char *str);
void myStrcat(char *ap, char *bp);
void Mynospace(char *str);
void myStrcpy1(char *str, char *str2);
void myStrncpy(char *ap, char *bp, int n);
char *myStrcpy2(char *ap, char *bp);
int MyStrcmp(char *ap, char *bp);
int MyStricmp(char *ap, char *bp);
int MyStrncmp(char *ap, char *bp,int n);
int numberofword(char *ap, char *bp);
int Mystrchr (char *ap,char *bp);
void myStrncpyNONULL(char *ap, char *bp, int n);
void findandchange(char *M, char *str1, char *str2);


void Mystrreverse(char *ap)
{
    for (int i = 0; i < Mystrlen(ap)/2; i++)
    {
        char temp;
        temp = *(ap+i);
        *(ap+i) = *(ap+Mystrlen(ap)-i-1);
        *(ap+Mystrlen(ap)-i-1) = temp;
    }
}

int Mystrlen(char *str)
{
    for (int i = 0;; i++)
        if (*(str+i) == '\0')
            return i;
}

void Mynospace(char *str)
{
    char *ap=str;
    while (*str!='\0')
    {
        if (*str != 32) *ap++ = *str++;
        else str++; 
    }
    *ap ='\0'; 
}



void myStrcat(char *ap, char *bp)
{
    ap+=Mystrlen(ap);
    while(1){
        *ap=*bp;
        if(*ap=='\0')
        break;
        ap++,bp++;
    }
}

void myStrcpy1(char *str, char *str2)
{
    for (int i = 0; i <= Mystrlen(str2); i++)
        *(str+i) = *(str2+i);
}

char *myStrcpy2(char *ap, char *bp)
{
    char *r = ap;
    while (*bp != '\0')
        *ap++ = *bp++;
    *ap = *bp;
    return r;
}

void myStrncpy(char *ap, char *bp, int n)
{
    for (int i = 0; i < n; i++)
        *(ap+i) = *(bp+i);
    *(ap+n) = '\0';
}

void myStrncpyNONULL(char *ap, char *bp, int n)
{
    for (int i = 0; i < n; i++)
        *(ap+i) = *(bp+i);
}

// int MyStrcmp(char *ap, char *bp)
// {
//     while (*ap != '\0' && *bp != '\0')
//     {
//         if (*ap > *bp) return 1;
//         if (*ap < *bp) return -1;
//         ap++; bp++;
//     }
//     if (Mystrlen(ap) > Mystrlen(bp)) return 1;
//     else if (Mystrlen(ap) > Mystrlen(bp)) return -1;
//     else return 0;
// }

int MyStrcmp(char *ap, char *bp)
{
    while (1)
    {
        if(*ap==NULL && *bp==NULL) return 0;
        if (*ap > *bp) return 1;
        if (*ap < *bp) return -1;
        ap++; bp++;
    }

}


int MyStricmp(char *ap, char *bp)
{
    while (1)
    {
        if(*ap==NULL && *bp==NULL) return 0;
        if (*ap >= 'A' && *ap <= 'Z') *ap = *ap + 'a' -'A';
        if (*bp >= 'A' && *bp <= 'Z') *bp = *bp + 'a' - 'A';
        if (*ap > *bp) return 1;
        if (*ap < *bp) return -1;
        ap++; bp++;
    }
}

int MyStrincmp(char *ap, char *bp,int n)
{
    int k =0;
    while (k != n)
    {
        if (*ap >= 'A' && *ap <= 'Z') *ap = *ap + 'a' -'A';
        if (*bp >= 'A' && *bp <= 'Z') *bp = *bp + 'a' - 'A';
        if (*ap > *bp) return 1;
        if (*ap < *bp) return -1;
        ap++; bp++; k++;
    }
    return 0;
}
int MyStrncmp(char *ap, char *bp,int n)
{
    int k =0;
    while (k != n)
    {
        if (*ap > *bp) return 1;
        if (*ap < *bp) return -1;
        ap++; bp++; k++;
    }
    return 0;
}


int Mystrchr (char *ap,char *bp) // 다시풀기
{
    char *r = ap;
    while(*ap != '\0')
    {
        if (*bp == *ap) 
            if (MyStrncmp(ap,bp,Mystrlen(bp)) == 0 &&( (*(ap+Mystrlen(bp)) == ' ') ||(*(ap+Mystrlen(bp)) == '\0')) && (*(ap-1) == ' ' || ap==r) ) return ap-r;
        ap++;
    }
    return -1;
}

int numberofword(char *ap, char *bp)
{
    int n = 0;
    while (*ap != '\0')
    {
        if (*bp == *ap) 
            if (MyStrncmp(ap,bp,Mystrlen(bp)) == 0) n++;
        ap++;
    }
    return n;
}

void findandchange(char* M, char* str1, char* str2)
{
    while (*M != '\0')
    {
        if (MyStrncmp(M, str1, Mystrlen(str1)) == 0)
        {
            if (Mystrlen(str1) < Mystrlen(str2))
                for (int i = 0; i < Mystrlen(M); i++)
                    *(M + Mystrlen(M) - i + Mystrlen(str2) - Mystrlen(str1)) = *(M + Mystrlen(M) - i);

            myStrncpyNONULL(M, str2, Mystrlen(str2));

            if (Mystrlen(str1) > Mystrlen(str2))
                while (*(M + Mystrlen(str2)) != ' ')
                {
                    *(M + Mystrlen(str2)) = ' ';
                    M++;
                }
        }
        M++;
    }
    *M = '\0';
}
