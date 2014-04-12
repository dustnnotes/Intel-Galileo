/*
  Serial1 - /dev/ttyS0   in Galileo - AHRS CJMCU
  Serial  - /dev/ttyGS0  in Galileo - Arduion IDE Serial Monitor
  
*/

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(57600);
  Serial.begin(9600);
}

void loop() {

  char read_data;
  // check if data has been sent from AHRS:
  if (Serial1.available()) {
    // read the most recent byte (which will be from 0 to 255):
    read_data = char(Serial1.read());
    Serial.print(read_data);  // print to Serial(/dev/ttyGS0)
  }
  
  
}
