//定长顺序存储表示
#define MAXLEN 255
typedef struct{
  char ch[MAXLEN];
  int length;
}SString;


//堆分配存储表示
typedef struct{
  char *ch;
  int length;
}HString;

//块链存储表示
