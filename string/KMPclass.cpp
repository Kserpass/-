//https://github.com/labuladong/fucking-algorithm/blob/master/%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92%E7%B3%BB%E5%88%97/%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92%E4%B9%8BKMP%E5%AD%97%E7%AC%A6%E5%8C%B9%E9%85%8D%E7%AE%97%E6%B3%95.md
public class KMP{
  private int[][] dp;
  private String pat;
  
  public KMP(String pat){
    this.pat=pat;
    int M = pat.length();
    dp=new int[M][256];
    dp[0][pat.charAt(0)]=1;
    int X=0;
    for(int j=1;j<M;j++){
      for(int c=0;c<256;c++)
        dp[j][c]=dp[X][c];
      dp[j][pat.charAt(j)]=j+1;
      X=dp[X][pat.charAt(j)];
    }
  }
  
  public int search(String txt){
    int M=pat.length();
    int N = txt.length();
        // pat 的初始态为 0
        int j = 0;
        for (int i = 0; i < N; i++) {
            // 计算 pat 的下一个状态
            j = dp[j][txt.charAt(i)];
            // 到达终止态，返回结果
            if (j == M) return i - M + 1;
        }
        // 没到达终止态，匹配失败
        return -1;
    }
}
