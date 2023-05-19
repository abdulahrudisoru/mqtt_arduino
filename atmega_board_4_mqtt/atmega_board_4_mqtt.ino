//Program Atmega untuk board_4
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
  if(data == "490"){
    digitalWrite(LED_01, HIGH);
  } 
  else if(data == "491"){
    digitalWrite(LED_01, LOW);
  } 
  else if(data == "500"){
    digitalWrite(LED_02, HIGH);
  } 
  else if(data == "501"){
    digitalWrite(LED_02, LOW);
  } 
  else if(data == "510"){
    digitalWrite(LED_03, HIGH);
  } 
  else if(data == "511"){
    digitalWrite(LED_03, LOW);
  }
  else if(data == "520"){
    digitalWrite(LED_04, HIGH);
  }
  else if(data == "521"){
    digitalWrite(LED_04, LOW);
  }
  else if(data == "530"){
    digitalWrite(LED_05, HIGH);
  }
  else if(data == "531"){
    digitalWrite(LED_05, LOW);
  }
  else if(data == "540"){
    digitalWrite(LED_06, HIGH);
  }
  else if(data == "541"){
    digitalWrite(LED_06, LOW);
  }
  else if(data == "550"){
    digitalWrite(LED_07, HIGH);
  }
  else if(data == "551"){
    digitalWrite(LED_07, LOW);
  }
  else if(data == "560"){
    digitalWrite(LED_08, HIGH);
  }
  else if(data == "561"){
    digitalWrite(LED_08, LOW);
  }
  else if(data == "570"){
    digitalWrite(LED_09, HIGH);
  }
  else if(data == "571"){
    digitalWrite(LED_09, LOW);
  }
  else if(data == "580"){
    digitalWrite(LED_10, HIGH);
  }
  else if(data == "581"){
    digitalWrite(LED_10, LOW);
  }
  else if(data == "590"){
    digitalWrite(LED_11, HIGH);
  }
  else if(data == "591"){
    digitalWrite(LED_11, LOW);
  }
  else if(data == "600"){
    digitalWrite(LED_12, HIGH);
  }
  else if(data == "601"){
    digitalWrite(LED_12, LOW);
  }
  else if(data == "610"){
    digitalWrite(LED_13, HIGH);
  }
  else if(data == "611"){
    digitalWrite(LED_13, LOW);
  }
  else if(data == "620"){
    digitalWrite(LED_14, HIGH);
  }
  else if(data == "621"){
    digitalWrite(LED_14, LOW);
  }
  else if(data == "630"){
    digitalWrite(LED_15, HIGH);
  }
  else if(data == "631"){
    digitalWrite(LED_15, LOW);
  }
  else if(data == "640"){
    digitalWrite(LED_16, HIGH);
  }
  else if(data == "641"){
    digitalWrite(LED_16, LOW);
  }
  
  //mengembalikan data menjadi ""
  data="";

}
