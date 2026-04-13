//week08-1 好玩的程式設計 黑白棋
//File-Preference 字形放很大
size(620,620);
background(#E8BF73);//背景顏色
for (int i=0; i<10; i++) { //左手i 寬度 y
  for(int j=0; j<10; j++) { //右手j 寬度 x
   int x = 10 + j * 60, y = 10 + i * 60; //小心  j i
   fill(#E8BF73); //填充顏色
   strokeWeight(2); // 線條的粗細
   rect(x, y, 60, 60); //正方形
  }
 }
