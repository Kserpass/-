#define  MaxSize 50
typedef struct{
  ElemType data[MaxSize];
  int front, rear;
} SqQueue;

void InitQueue(SqQueue &Q) {
  Q.rear=Q.front=0
}

//循环队列
bool isEmpty()
  
bool EnQueue(SqQueue &Q, ElemType &x){
  if((Q.rear+1)% MaxSize==Q.front)return false; //队尾后一位置为队头则队满
  Q.data[Q.rear]=x;
  Q.rear=(Q.rear+1)%MaxSize;
  return true;
}

bool DeQueue()
  
