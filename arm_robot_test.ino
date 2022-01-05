//HADID-TECHNOLOGY
//Creator = Muhammad Ikhwan Fathulloh

//Kamus
#include <Servo.h>

//Servo
Servo myservo1;  
Servo myservo2;
Servo myservo3; 
Servo myservo4;

//Posisi
int pos1 = 0;
int pos2 = 0; 
int pos3 = 0; 
int pos4 = 0;    

void setup() {
  Serial.begin(9600);

  //Servo
  myservo1.attach(2);//Gripper
  myservo2.attach(3);//x
  myservo3.attach(4);//y
  myservo4.attach(5);//z

}

void loop() {
 

   tutup();
    mundur();
    buka();
    atas();
    maju();
    kanan();

    bawah();
    mundur();
    tutup();
    maju();
    buka();
    kiri();

}

//Gripper
void tutup(){
  for (pos1 = 0; pos1 <= 75; pos1 += 1) {  
    myservo1.write(pos1);              
    delay(50);                       
  }
}
void buka(){
  for (pos1 = 75; pos1 >= 0; pos1 -= 1) { 
    myservo1.write(pos1);            
    delay(50);                       
  }
}

//X
void mundur(){
  for (pos2 = 0; pos2 <= 45; pos2 += 1) {  
    myservo2.write(pos2);              
    delay(50);                       
  }
}
void maju(){
  for (pos2 = 45; pos2 >= 0; pos2 -= 1) { 
    myservo2.write(pos2);            
    delay(50);                       
  }
}

//Y
void bawah(){
  for (pos3 = 0; pos3 <= 75; pos3 += 1) {  
    myservo3.write(pos3);              
    delay(50);                       
  }
}
void atas(){
  for (pos3 = 75; pos3 >= 0; pos3 -= 1) { 
    myservo3.write(pos3);            
    delay(50);                       
  }
}

//Z
void kiri(){
  for (pos4 = 0; pos4 <= 90; pos4 += 1) {  
    myservo4.write(pos4);              
    delay(50);                       
  }
}
void kanan(){
  for (pos4 = 90; pos4 >= 0; pos4 -= 1) { 
    myservo4.write(pos4);            
    delay(50);                       
  }
}
