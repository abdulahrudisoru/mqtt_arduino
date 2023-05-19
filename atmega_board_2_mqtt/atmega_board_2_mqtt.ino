//Program Atmega untuk board_2
#include <SoftwareSerial.h> //untuk komunikasi serial
#define RX 0 //pin RX
#define TX 1 //pin TX

//deklarasi pin LED
#define LED_01 A3
#define LED_02 A4
#define LED_03 A5
#define LED_04 PD4
#define LED_05 PD5
#define LED_06 PD6
#define LED_07 PD7
#define LED_08 8
#define LED_09 9
#define LED_10 10
#define LED_11 11
#define LED_12 12
#define LED_13 13
#define LED_14 A0
#define LED_15 A1
#define LED_16 A2

//deklarasi variable untuk read data
String data;
char c;


//define RX & TX pada board 1
SoftwareSerial wemos (RX, TX);


void setup() {
  // setup serial
  Serial.begin(9600);
  wemos.begin(9600);

  //setup pin LED
  pinMode(LED_01, OUTPUT);
  pinMode(LED_02, OUTPUT);
  pinMode(LED_03, OUTPUT);
  pinMode(LED_04, OUTPUT);
  pinMode(LED_05, OUTPUT);
  pinMode(LED_06, OUTPUT);
  pinMode(LED_07, OUTPUT);
  pinMode(LED_08, OUTPUT);
  pinMode(LED_09, OUTPUT);
  pinMode(LED_10, OUTPUT);
  pinMode(LED_11, OUTPUT);
  pinMode(LED_12, OUTPUT);
  pinMode(LED_13, OUTPUT);
  pinMode(LED_14, OUTPUT);
  pinMode(LED_15, OUTPUT);
  pinMode(LED_16, OUTPUT);

  //Matikan semua lampu
  digitalWrite(LED_01, HIGH);
  digitalWrite(LED_02, HIGH);
  digitalWrite(LED_03, HIGH);
  digitalWrite(LED_04, HIGH);
  digitalWrite(LED_05, HIGH);
  digitalWrite(LED_06, HIGH);
  digitalWrite(LED_07, HIGH);
  digitalWrite(LED_08, HIGH);
  digitalWrite(LED_09, HIGH);
  digitalWrite(LED_10, HIGH);
  digitalWrite(LED_11, HIGH);
  digitalWrite(LED_12, HIGH);
  digitalWrite(LED_13, HIGH);
  digitalWrite(LED_14, HIGH);
  digitalWrite(LED_15, HIGH);
  digitalWrite(LED_16, HIGH);
}

void loop() {
  //Membaca data yang dikirim oleh WEMOS
  while(wemos.available()>0){
    delay(10);
    c = wemos.read();
    data+=c;
  }

  //logika LED hidup/mati
  if(data == "170"){
    digitalWrite(LED_01, HIGH);
  } 
  else if(data == "171"){
    digitalWrite(LED_01, LOW);
  } 
  else if(data == "180"){
    digitalWrite(LED_02, HIGH);
  } 
  else if(data == "181"){
    digitalWrite(LED_02, LOW);
  } 
  else if(data == "190"){
    digitalWrite(LED_03, HIGH);
  } 
  else if(data == "191"){
    digitalWrite(LED_03, LOW);
  }
  else if(data == "200"){
    digitalWrite(LED_04, HIGH);
  }
  else if(data == "201"){
    digitalWrite(LED_04, LOW);
  }
  else if(data == "210"){
    digitalWrite(LED_05, HIGH);
  }
  else if(data == "211"){
    digitalWrite(LED_05, LOW);
  }
  else if(data == "220"){
    digitalWrite(LED_06, HIGH);
  }
  else if(data == "221"){
    digitalWrite(LED_06, LOW);
  }
  else if(data == "230"){
    digitalWrite(LED_07, HIGH);
  }
  else if(data == "231"){
    digitalWrite(LED_07, LOW);
  }
  else if(data == "240"){
    digitalWrite(LED_08, HIGH);
  }
  else if(data == "241"){
    digitalWrite(LED_08, LOW);
  }
  else if(data == "250"){
    digitalWrite(LED_09, HIGH);
  }
  else if(data == "251"){
    digitalWrite(LED_09, LOW);
  }
  else if(data == "260"){
    digitalWrite(LED_10, HIGH);
  }
  else if(data == "261"){
    digitalWrite(LED_10, LOW);
  }
  else if(data == "270"){
    digitalWrite(LED_11, HIGH);
  }
  else if(data == "271"){
    digitalWrite(LED_11, LOW);
  }
  else if(data == "280"){
    digitalWrite(LED_12, HIGH);
  }
  else if(data == "281"){
    digitalWrite(LED_12, LOW);
  }
  else if(data == "290"){
    digitalWrite(LED_13, HIGH);
  }
  else if(data == "291"){
    digitalWrite(LED_13, LOW);
  }
  else if(data == "300"){
    digitalWrite(LED_14, HIGH);
  }
  else if(data == "301"){
    digitalWrite(LED_14, LOW);
  }
  else if(data == "310"){
    digitalWrite(LED_15, HIGH);
  }
  else if(data == "311"){
    digitalWrite(LED_15, LOW);
  }
  else if(data == "320"){
    digitalWrite(LED_16, HIGH);
  }
  else if(data == "321"){
    digitalWrite(LED_16, LOW);
  }
  
  //mengembalikan data menjadi ""
  data="";

}
