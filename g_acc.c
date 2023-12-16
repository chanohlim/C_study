const int button = 5;
const int emag = 3;
const int trig = 9;
const int echo = 10;

float duration, distance;

float start, end;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(emag, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  digitalWrite(emag, HIGH);

  Serial.println("중력가속도 : 9.54km/s^2");
  Serial.println("중력가속도 : 9.72km/s^2");
  Serial.println("중력가속도 : 10.04km/s^2");
}

void loop() {
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration*.0343)/2; // 초음파 센서로 거리 측정
  Serial.println(distance);

  if (digitalRead(button) == LOW){ // INPUT_PULLUP -> 반대로 읽음 -> 버튼 누르면
    start = millis();
    digitalWrite(emag, LOW); // 전자석 파워 off -> 하강 시작
    delay(100);
    digitalWrite(emag, HIGH);
  }


  if(distance < 10){ // 전자석에 붙어있던 쇠붙이가 초음파 센서 앞으로 떨어지면
    end = millis();
    Serial.println("중력가속도 : ");
    Serial.print(2*1 / sqrt(end - start));
    Serial.print("km/s^2");
    delay(300);
  }

}
