//week06-2 好玩的程式設計, mouse 拖曳畫面時, 後面的格子慢慢變淡
//修改自week06-1 好玩的程式設計 兩層for(迴圈) 配合 陣列
void setup(){
  size(800,500);//視窗大小800*500
}
int[][]a = new int[10][16];//Java的列陣寫法, 跟C/C++不同
public void mouseDragged() { //mouse拖曳時,執行這段
  int i = mouseY/50, j=mouseX/50; // 計算i, j座標
  a[i][j] = 60;//數字變大了 試試60(1秒)再試試 120(2秒)
}
public void draw(){
  background(255);
  for(int i=0; i<10; i++){//上週是for y 現在改成for i 左手i
    for(int j=0; j<16; j++){//上週是for x 現在改成for j 右手j
      if(a[i][j] > 0) {
        fill(0xFF5DFF1F, a[i][j] *4);//若列陣有值, 設綠色
        a[i][j]--;
      } else fill(255);//沒有值,設白色
      rect(j*50,i*50, 50 ,50);//畫四邊形
      }
  }
}
