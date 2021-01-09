#include <SD.h>               // need to include the SD library
#include <TMRpcm.h>           //  also need to include this library...

#define SD_ChipSelectPin 4    // пин карты памяти

// Пин линии сигнала датчиков касания
#define btnPin1 2
#define btnPin2 3
#define btnPin3 6
#define btnPin4 7
// Пин линии сигнала датчиков касания

TMRpcm tmrpcm;

void setup() {
  Serial.begin(9600);
  
  pinMode(btnPin1, INPUT);
  pinMode(btnPin2, INPUT);
  pinMode(btnPin3, INPUT);
  pinMode(btnPin4, INPUT);

  // Пины динамиков
  tmrpcm.speakerPin = 9;
  pinMode(10,OUTPUT);
  // Пины динамиков

  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("SD err!");
    return;
  }
  
  Serial.println("SD ok!");
  
  tmrpcm.volume(5);
  
}

void loop() {

  if (digitalRead(btnPin1)) {        // кнопка 1
    Serial.println("btn1");
    tmrpcm.play("1.wav");
    
  } else if (digitalRead(btnPin2)) { // кнопка 2
    Serial.println("btn1");
    tmrpcm.play("2.wav");
    
  } else if (digitalRead(btnPin3)) { // кнопка 3
    Serial.println("btn1");
    tmrpcm.play("3.wav");
    
  } else if (digitalRead(btnPin4)) { // кнопка 4
    Serial.println("btn1");
    tmrpcm.play("4.wav");
    
  }
  
}
