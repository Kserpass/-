#define MaxSize 50
typedef struct{
  Elemtype data[MaxSize];
  int top; //默认top=-1，
} SqStack;

void InitStack(SqStack &S) {
  S.top=-1;
}

bool StackEmpty(SqStack S);

//合法性

bool GetTop(SqStack &S, Elemtype &x){
  if(S.top==-1)
    return false;
  //x=S.data[S.top--];
  x=S.data[S.top];//不出栈
  return true;
}

