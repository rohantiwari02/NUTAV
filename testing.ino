
//Define pins

const uint8_t DRIVER_A_PIN = 10;
const uint8_t DRIVER_B_PIN = 11;


void setup() {
  // put your setup code here, to run once:
  Serial2.begin(9600);
  Serial3.begin(9600);
  pinMode(DRIVER_A_PIN, OUTPUT);
  pinMode(DRIVER_B_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:;

    //Driver A
  //digitalWrite(DRIVER_A_PIN, HIGH);
  //Serial.write(180);
  //delayMicroseconds(50);
  //digitalWrite(DRIVER_A_PIN, LOW);

    //Driver B
  //digitalWrite(DRIVER_B_PIN, HIGH);
  //Serial.write(130);
  //delayMicroseconds(50);
  //digitalWrite(DRIVER_B_PIN, LOW);


      //Driver A
  digitalWrite(DRIVER_A_PIN, HIGH);
  Serial2.write(120);
  Serial2.write(130);
  delayMicroseconds(50);
  digitalWrite(DRIVER_A_PIN, LOW);

  delay(20);

//Driver B
  digitalWrite(DRIVER_B_PIN, HIGH);
  Serial3.write(120);
  Serial3.write(130);
  delayMicroseconds(50);
  digitalWrite(DRIVER_B_PIN, LOW);

 
//  delay(20);
}
