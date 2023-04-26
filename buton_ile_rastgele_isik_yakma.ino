void setup() {
  Serial.begin(9600);
  Serial.println(analogRead(A0));   //bu pinden bagli degilken okuma yaparak rastgele deger alacak her calismada
  randomSeed(analogRead(A0));
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  if(digitalRead(2)==1){
    //burdan digitalRead cunku digital girislerde islem var...
    int rand_int = random(1,5);   //1,2,3,4 degerleri donecek
    
    Serial.println(rand_int);
    switch(rand_int){
      case 1:
      digitalWrite(3,1);
      digitalWrite(4,0);
      digitalWrite(5,0);
      digitalWrite(6,0);
      break;
      case 2:
      digitalWrite(3,0);
      digitalWrite(4,1);
      digitalWrite(5,0);
      digitalWrite(6,0);
      break;
      case 3:
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,1);
      digitalWrite(6,0);
      break;
      case 4:
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
      digitalWrite(6,1);
      break;
      default:
      //gerekli degil zaten
      break;
    }
    delay(500);   //beklemek zorunda yoksa direkt soner
    digitalWrite(rand_int+2,0);   //3-4-5-6'li pinler icin 1-2-3-4 case'leri kullanilir.
  }
}
