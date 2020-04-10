#include <bits/stdc++.h>
const int ERROR_STATE=100;
typedef int state;
typedef unsigned char *attri;
typedef unsigned  char *token;
unsigned char *x;
unsigned int i = 0;
unsigned char readchar(unsigned char *x, unsigned int i){
    if (i<strlen(x)) return (*(x+i));
    else return ('\0');
}
attri attribute(state s){
    char *ch;
    switch (s)
    {
    case 2:
        strcpy(ch,"so sanh lon hon bang");
        break;
    case 3:
        strcpy(ch, "dich phai");
        break;
    case 6:
        strcpy(ch, "so sanh lon hon");
        break;
    case 7:
        strcpy(ch, "dich trai");
        break;
    case 8:
        strcpy(ch, "so sanh nho hon");
        break;
    case 7:
        strcpy(ch, "so sanh lon hon bang");
        break;
    case 8:
        strcpy(ch, "so sanh lon hon bang");
        break;
    default:
        break;
    }
}
int main()
{
    //nhap vao xau x
    i = 0;
    lexical_analysis();
}