//week14_5_sound
//���sketch-Library-Manage Libearies...
//�w��Sound��,�}�l �g
//���File-Examples��Libraries�֤ߨ禡�wSound-Soundfile-Jumble
//�A�ۤv�g
import processing.sound.*;//Java�ϥ�Sound�~��
SoundFile music,sword,monkey,intro;//�ŧi�@���ܼ�music
void setup(){
  size(640,360);
  sword=new SoundFile(this,"sword slash.mp3");
  monkey=new SoundFile(this,"Monkey 1.mp3");
  intro=new SoundFile(this,"Intro Song Final.mp3");
  music=new SoundFile(this,"In Game Music.mp3");
  music.play();//play()����
}
void mousePressed(){//���Umouse
 if(mouseButton==LEFT)sword.play();
 else monkey.play();
}
void draw(){
  //�̭��O�ť�
}
