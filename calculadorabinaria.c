// C++ code
//
int ledPin[]={9,8,7,6,5,4,3,2, 10,11};
void setup()
{
  for(int i=0; i<10; i++){
    pinMode(ledPin[i], OUTPUT);

  }

}

void loop()
{
  int result=0;
  for(int multiplicando=1; multiplicando <=25; multiplicando++){



    for(int multiplicador=1; multiplicador<=10; multiplicador++){//multiplica de 1 -25
      displayBinary(multiplicando);//mostra multiplicando
  	  delay(2000);
      
      digitalWrite(10, HIGH);//liga o bit de multiplicação
	    displayBinary(multiplicador);//mostra multiplicador
  	  delay(2000); //delay para mostrar multiplicador
      digitalWrite(10, LOW);//desliga bit de multiplicação
      
      result=multiplicador*multiplicando;
      
      displayBinary(0);//desliga todos os bits
      
      digitalWrite(11, HIGH);//liga bit de resultado
      displayBinary(result);
      delay(2000);
      digitalWrite(11, LOW);

	    displayBinary(0);//apaga tudo e espera pra fazer dnv
      delay(1000);//7 segundos
    }
  }
}

void displayBinary(byte number){
  //digitalWrite(ledPin[2], HIGH);
  if(number==0){
      for(int i=0; i<8; i++){
      digitalWrite(ledPin[i], LOW);

     }
  }
  for(int i=0; i<8; i++){
    if(bitRead(number, i)==1)
    {
    	digitalWrite(ledPin[i], HIGH);
    }
    else{
      	digitalWrite(ledPin[i], LOW);
      
    }
  
  }
}
