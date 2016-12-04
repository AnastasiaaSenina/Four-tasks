#include "add.h"
int ReverseNumber(int x) {
  int res=0;
  while (x != 0) {
  res=res*10 +x%10;
  x=x/10;
  }
  return res;
}
char* CommonPrefix(char** mas, int sizemas, int len) {
  int LenPrefix=0;
  for (int i = 0; i < len; i++) {
    char simbol = mas[0][i];
    bool flag=true;
    for (int j = 1; j < sizemas; j++){
      if (mas[j][i] != simbol){
       flag=false;
       break;
      }
    }
    if ( flag == true ) 
     LenPrefix++;
    else
     break;
  }
  char *res = new char[LenPrefix+1];
  int i=0;

  while ( i < LenPrefix ) {
    res[i] = mas[0][i];
    i++;
  }
  res[LenPrefix]=0;
  return res;
}
void ReversePairElement(CNode *p) {
  if (p==0)
    throw 1;
  else {
  int temp;
  while (p!=0){
   if ((p != 0) && (p->next!=0 )) {
    temp=p->data;
    p->data=p->next->data;
    p->next->data=temp;
   } else break;
  p=p->next->next;
  }
 }
}

void SearchElemEqSum(int& a, int& b, int sum, int mas[], int sizeofmas) {
  int el;
  for (int i = 0; i < sizeofmas; i++) {
    el = sum - mas[i];
    for ( int j=i+1;j<sizeofmas;j++)
    if (mas[j] == el) {
     a=mas[i];
     b=mas[j];
     return;
    }
  }
  throw 1;
}
