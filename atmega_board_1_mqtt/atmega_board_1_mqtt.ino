//Program Atmega untuk board_1
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
  if(data == "10"){
    digitalWrite(LED_01, HIGH);
  } 
  else if(data == "11"){
    digitalWrite(LED_01, LOW);
  } 
  else if(data == "20"){
    digitalWrite(LED_02, HIGH);
  } 
  else if(data == "21"){
    digitalWrite(LED_02, LOW);
  } 
  else if(data == "30"){
    digitalWrite(LED_03, HIGH);
  } 
  else if(data == "31"){
    digitalWrite(LED_03, LOW);
  }
  else if(data == "40"){
    digitalWrite(LED_04, HIGH);
  }
  else if(data == "41"){
    digitalWrite(LED_04, LOW);
  }
  else if(data == "50"){
    digitalWrite(LED_05, HIGH);
  }
  else if(data == "51"){
    digitalWrite(LED_05, LOW);
  }
  else if(data == "60"){
    digitalWrite(LED_06, HIGH);
  }
  else if(data == "61"){
    digitalWrite(LED_06, LOW);
  }
  else if(data == "70"){
    digitalWrite(LED_07, HIGH);
  }
  else if(data == "71"){
    digitalWrite(LED_07, LOW);
  }
  else if(data == "80"){
    digitalWrite(LED_08, HIGH);
  }
  else if(data == "81"){
    digitalWrite(LED_08, LOW);
  }
  else if(data == "90"){
    digitalWrite(LED_09, HIGH);
  }
  else if(data == "91"){
    digitalWrite(LED_09, LOW);
  }
  else if(data == "100"){
    digitalWrite(LED_10, HIGH);
  }
  else if(data == "101"){
    digitalWrite(LED_10, LOW);
  }
  else if(data == "110"){
    digitalWrite(LED_11, HIGH);
  }
  else if(data == "111"){
    digitalWrite(LED_11, LOW);
  }
  else if(data == "120"){
    digitalWrite(LED_12, HIGH);
  }
  else if(data == "121"){
    digitalWrite(LED_12, LOW);
  }
  else if(data == "130"){
    digitalWrite(LED_13, HIGH);
  }
  else if(data == "131"){
    digitalWrite(LED_13, LOW);
  }
  else if(data == "140"){
    digitalWrite(LED_14, HIGH);
  }
  else if(data == "141"){
    digitalWrite(LED_14, LOW);
  }
  else if(data == "150"){
    digitalWrite(LED_15, HIGH);
  }
  else if(data == "151"){
    digitalWrite(LED_15, LOW);
  }
  else if(data == "160"){
    digitalWrite(LED_16, HIGH);
  }
  else if(data == "161"){
    digitalWrite(LED_16, LOW);
  }
  
  //mengembalikan data menjadi ""
  data="";

}
