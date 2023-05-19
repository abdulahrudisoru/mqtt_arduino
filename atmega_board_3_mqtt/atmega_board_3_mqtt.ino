//Program Atmega untuk board_3
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
  if(data == "330"){
    digitalWrite(LED_01, HIGH);
  } 
  else if(data == "331"){
    digitalWrite(LED_01, LOW);
  } 
  else if(data == "340"){
    digitalWrite(LED_02, HIGH);
  } 
  else if(data == "341"){
    digitalWrite(LED_02, LOW);
  } 
  else if(data == "350"){
    digitalWrite(LED_03, HIGH);
  } 
  else if(data == "351"){
    digitalWrite(LED_03, LOW);
  }
  else if(data == "360"){
    digitalWrite(LED_04, HIGH);
  }
  else if(data == "361"){
    digitalWrite(LED_04, LOW);
  }
  else if(data == "370"){
    digitalWrite(LED_05, HIGH);
  }
  else if(data == "371"){
    digitalWrite(LED_05, LOW);
  }
  else if(data == "380"){
    digitalWrite(LED_06, HIGH);
  }
  else if(data == "381"){
    digitalWrite(LED_06, LOW);
  }
  else if(data == "390"){
    digitalWrite(LED_07, HIGH);
  }
  else if(data == "391"){
    digitalWrite(LED_07, LOW);
  }
  else if(data == "400"){
    digitalWrite(LED_08, HIGH);
  }
  else if(data == "401"){
    digitalWrite(LED_08, LOW);
  }
  else if(data == "410"){
    digitalWrite(LED_09, HIGH);
  }
  else if(data == "411"){
    digitalWrite(LED_09, LOW);
  }
  else if(data == "420"){
    digitalWrite(LED_10, HIGH);
  }
  else if(data == "421"){
    digitalWrite(LED_10, LOW);
  }
  else if(data == "430"){
    digitalWrite(LED_11, HIGH);
  }
  else if(data == "431"){
    digitalWrite(LED_11, LOW);
  }
  else if(data == "440"){
    digitalWrite(LED_12, HIGH);
  }
  else if(data == "441"){
    digitalWrite(LED_12, LOW);
  }
  else if(data == "450"){
    digitalWrite(LED_13, HIGH);
  }
  else if(data == "451"){
    digitalWrite(LED_13, LOW);
  }
  else if(data == "460"){
    digitalWrite(LED_14, HIGH);
  }
  else if(data == "461"){
    digitalWrite(LED_14, LOW);
  }
  else if(data == "470"){
    digitalWrite(LED_15, HIGH);
  }
  else if(data == "471"){
    digitalWrite(LED_15, LOW);
  }
  else if(data == "480"){
    digitalWrite(LED_16, HIGH);
  }
  else if(data == "481"){
    digitalWrite(LED_16, LOW);
  }
  
  //mengembalikan data menjadi ""
  data="";

}
