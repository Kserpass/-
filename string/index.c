//简单的模式匹配算法
int Index(SString S,SString T){
  int i=1,j=1;
  while(i<=S.length && j<=T.length){
    if(S.ch[i]==T.ch[j]){
      ++i;++j;
    }
    else{
      i=i-j+2;j=1; //i比原来往后移一位
    }
    if(j>T.length)return i-T.length;
    else return 0;                                                                                                                
  }
}

int search(String pat, String txt){
  int M=pat.length;
  int N=txt.length;
  for(int i=0; i<=N-M;i++){
    int j;
    for(j=0;j<M;j++){
      if(pat[j]!=txt[i+j])
        break;
    }
    if(j==M) return i;
  }
  return -1;
}
