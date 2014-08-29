void setup(){
  Serial.begin(9600);
  Serial1.begin(9600);
  while(!Serial);
  while(!Serial1);
  //Serial.println("Simple Arduino Comm Bridge V1.0");
}

void loop(){
}

void serialEvent(){
  if(Serial.available()){
    Serial1.write(Serial.read());
  }
}

void serialEvent1(){
  if(Serial1.available()){
    Serial.write(Serial1.read());
  }
}






