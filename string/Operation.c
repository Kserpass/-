//堆分配存储结构的串既有顺序存储结构的特点，处理方便，对串长没有限制
Status StrAssign(HString &T,char * chars){
  //生成一个值为chars的串T
  if(T.ch)  free(T.ch);
  for(i=0,c=chars;  *c; ++i,++c); //求chars的长度
  if(!i){T.ch=NULL; T.length=0;}
  else{
    if(!(T.ch=(char *)malloc(i * sizeof(char))))
      exit(OVERFLOW);
    T.ch[0..i-1]=chars[0..i-1];
    T.length=i;
  }
  return OK;
}//StrAssign
