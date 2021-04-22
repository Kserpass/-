//链式队列
typedef struct{
  Elemtype data;
  LinkNode *next;
}LinkNode;
typedef struct {
  LinkNode *front, * rear;
}LinkQueue;

void InitQueue(LinkQueue &Q){
  Q.front=Q.rear=(LinkNode*)malloc(sizeof(LinkNode));//带头结点
  Q.front->next=NULL;
}

bool isEmpty()
 
void EnQueue(LinkNode &Q,Elemtype x){
  LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
  s->data=x; s->next=NULL;
  Q.rear->next=s;
  Q.rear=s;
}

//带头结点
bool DeQueue(LinkNode &Q,Elemtype &x){
  if(Q.front==Q.rear)return false;//队空
  LinkNode *p=Q.front->next;
  x=p->data;
  Q.front->next=p->next;
  if(Q.rear=p)
    Q.rear=Q.front//原来只有一个结点，删除后变空
  free(p);
  return true;
}
