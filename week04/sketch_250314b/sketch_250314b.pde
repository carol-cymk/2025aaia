///week04_5 ?????
void setup(){
  size(600, 400);
}
float x, y; // 沒有給值
float fishX = 300, fishY = 200; // 魚的座標
void draw(){
  background( #C0FFEE );
  if(x>0){ // 有飼料的話
    ellipse(x, y, 8, 8);
    y += 2;
  }
}
void mousePressed(){
  x = mouseX \;
  y = mouseY \;
}
