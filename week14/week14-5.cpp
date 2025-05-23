//week14_5_sound
//選單sketch-Library-Manage Libearies...
//安裝Sound後,開始 寫
//選單File-Examples選Libraries核心函式庫Sound-Soundfile-Jumble
//再自己寫
import processing.sound.*;//Java使用Sound外掛
SoundFile music,sword,monkey,intro;//宣告一個變數music
void setup(){
  size(640,360);
  sword=new SoundFile(this,"sword slash.mp3");
  monkey=new SoundFile(this,"Monkey 1.mp3");
  intro=new SoundFile(this,"Intro Song Final.mp3");
  music=new SoundFile(this,"In Game Music.mp3");
  music.play();//play()播放
}
void mousePressed(){//按下mouse
 if(mouseButton==LEFT)sword.play();
 else monkey.play();
}
void draw(){
  //裡面是空白
}
