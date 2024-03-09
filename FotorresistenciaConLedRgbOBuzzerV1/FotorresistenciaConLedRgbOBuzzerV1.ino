// Declaración de variables.

  // Fotorresistencia.
  
  int F = A5;

  // Para la canción con el buzzer.

  int altavoz = 3; 

  int LaS2=1864;
  int La2= 1760;
  int Sol2=1567;
  int Fa=  698;
  int Fa2= 1396;
  int Re2= 1174;
  int Do2= 1046;
  int LaS= 932;
  int La = 880;
  int Sol= 783;
  int blanca=0;
  int negra=0;  
  int corchea=0;
  int bpm= 120;

void setup()
{
  
  // Configuración del pulsador como de entrada.
  
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
  pinMode(F, INPUT);
  Serial.begin(9600);
  
  pinMode(altavoz, OUTPUT);
    negra= 25000/bpm; 
    blanca= negra*2;
    corchea= negra/2;
}

void loop()
{
  
  // Declaramos una variable en donde optenemos del valor de la fotorresistencia.
  
  int Valor_F = analogRead(F);
  
  
  Serial.print("El valor de la fotorresistencia es: ");
  Serial.println(Valor_F);
  delay(1000);
  
  /*
    Realizamos una condición con un "if" en donde si el valor de la fotorresistencia es mayor a "500"
    se encenderá el led rgb de color blanco y si no se cumple, se realiza un "else if" en donde si el
    valor de la fotorresistencia está en el rango de "200" a "500" encenderá el led a color amarillo
    y si no se cumple ninguno empezara a sonar una canción con el buzzer. 
  */
  
  if(Valor_F >= 500){
    
    
    // Led RGB de color blanco.
    
      digitalWrite(7, 255);
      digitalWrite(6, 255);
      digitalWrite(5, 255);
    
  } else if (Valor_F > 200 && Valor_F < 500){
    
    // Led RGB de color amarillo.
    
     digitalWrite(7, 255);
     digitalWrite(6, 0);
     digitalWrite(5, 116);

  } else {
    
   Serial.println("La bateria se esta agotando");
    
    REPETICION1();
    tone(altavoz,Sol2,negra);
    delay(negra+50);
    tone(altavoz,Sol2,negra);
    delay(negra+50);
    tone(altavoz,Sol2,negra);
    delay(2*corchea+50);
    REPETICION3();
    REPETICION2();
    REPETICION2();
    REPETICION2();
    delay(10000);
    
  }
}

// Función para reproducir sonidos con el buzzer.
void REPETICION1(){
   tone(altavoz,LaS,negra);
   delay(negra+50);
   tone(altavoz,LaS,negra);
   delay(negra+50);
   tone(altavoz,LaS,negra);
   delay(negra+50);
   tone(altavoz,LaS,negra);
  
   delay(2*corchea+50);
  
   tone(altavoz,Re2,negra);
   delay(negra+50);
   tone(altavoz,Re2,negra);
   delay(negra+50);
   tone(altavoz,Re2,negra);
   delay(negra+50);
   tone(altavoz,Re2,negra);
 
   delay(2*corchea+50);
  
   tone(altavoz,Do2,negra);
   delay(negra+50);
   tone(altavoz,Do2,negra);
   delay(negra+50);
   tone(altavoz,Do2,negra);
   delay(negra+50);
   tone(altavoz,Do2,negra);
 
   delay(2*corchea+50);
  
   tone(altavoz,Fa2,negra);
   delay(negra+50);
   tone(altavoz,Fa2,negra);
   delay(negra+50);
   tone(altavoz,Fa2,negra);
   delay(negra+50);
   tone(altavoz,Fa2,negra);
 
   delay(2*corchea+50);
  
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   tone(altavoz,Sol2,negra);
   delay(negra+50);
   
}

// Función para reproducir sonidos con el buzzer. 
  void REPETICION2(){
    tone(altavoz,Sol,negra);
    delay(negra+200);
  
    tone(altavoz,Sol,negra);
    delay(negra+50);
    tone(altavoz,Re2,negra);
    delay(negra+100);
    tone(altavoz,Do2,negra);
    delay(negra+300);
    tone(altavoz,LaS,negra);
    delay(negra+100);
    tone(altavoz,La,negra);
    delay(negra+300);
    tone(altavoz,La,negra);
    delay(negra+50);
    tone(altavoz,La,negra);
    delay(negra+50);
    tone(altavoz,Do2,negra);
    delay(negra+300);
    tone(altavoz,LaS,negra);
    delay(negra+50);
    tone(altavoz,La,negra);
    delay(negra+50);
    tone(altavoz,Sol,negra);
    delay(negra+300);
  
    tone(altavoz,Sol,negra);
    delay(negra+50);
  
    tone(altavoz,LaS2,negra);
    delay(negra+50);
    tone(altavoz,La2,negra);
    delay(negra+50);
    tone(altavoz,LaS2,negra);
    delay(negra+50);
    tone(altavoz,La2,negra);
    delay(negra+50);
    tone(altavoz,LaS2,negra);
    delay(negra+50);
  
    tone(altavoz,Sol,negra);
    delay(negra+300);
    tone(altavoz,Sol,negra);
    delay(negra+50);
  
  
    tone(altavoz,LaS2,negra);
    delay(negra+50);
    tone(altavoz,La2,negra);
    delay(negra+50);
    tone(altavoz,LaS2,negra);
    delay(negra+50);
    tone(altavoz,La2,negra);
    delay(negra+50);
    tone(altavoz,LaS2,negra);
    delay(negra+50);
  }

// Función para reproducir sonidos con el buzzer.
 void REPETICION3(){
    tone(altavoz,Do2,negra);
    delay(negra+50);
    tone(altavoz,LaS,negra);
    delay(negra+50);
    tone(altavoz,La,negra);
    delay(negra+50);
    tone(altavoz,Fa,negra);
    delay(negra+50);
}
