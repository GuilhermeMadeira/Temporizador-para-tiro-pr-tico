#define TesteCampainha 7 //Aciona campainha ao apertar o botão de teste
#define Tempo8 4 //Tempo de inicio e fim de 10 segundos
#define StandBy 12 //Aciona o LED verde identificando que não esta contando tempo
#define Campainha 8 //Aciona a campainha no inicio e no fim da contagem de tempo
void ContaTempo();
int AcionaTempo = 0;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(TesteCampainha,INPUT);
  pinMode(Tempo8,INPUT);
  pinMode(StandBy,OUTPUT);
  pinMode(Campainha,OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {


int  botao1 = digitalRead(TesteCampainha);
int  botao2 = digitalRead(Tempo8);

//Aciona campainha ao apertar o botão para demonstrar ao atirador qual é o som a se seguir
  if(botao1 == HIGH){ 
    digitalWrite(StandBy, LOW);
    digitalWrite(Campainha, HIGH); 

  }else{
     
   digitalWrite(StandBy, HIGH);
   digitalWrite(Campainha, LOW);
 }

//Carrega a variável AcionaTempo com o valor desejado para acionar o tempo de 8 segundos
if (botao2==HIGH){
 AcionaTempo = 1;
 ContaTempo();
}
}
//Inicia a contagem, para tiro, tempo conforme botão acionado
void ContaTempo(){
switch(AcionaTempo){
//Prática de tiro com tempo de 8 segundos
  case 1:
    digitalWrite(Campainha, HIGH);
    digitalWrite(StandBy, LOW);
    delay(1000);
    digitalWrite(Campainha, LOW);
    
    delay(7000);
    digitalWrite(Campainha, HIGH);
    delay(1000);
    
    digitalWrite(Campainha, LOW);
    digitalWrite(StandBy, HIGH);
      break;

//Prática de tiro com tempo de 10 segundos
  case 2:  
    digitalWrite(Campainha, HIGH);
    digitalWrite(StandBy, LOW);
    delay(1000);
    digitalWrite(Campainha, LOW);
    
    delay(9000);
    digitalWrite(Campainha, HIGH);
    delay(1000);
    
    digitalWrite(Campainha, LOW);
    digitalWrite(StandBy, HIGH);
      break;

//Prática de tiro com tempo de 30 segundos
  case 3:  
    digitalWrite(Campainha, HIGH);
    digitalWrite(StandBy, LOW);
    delay(1000);
    digitalWrite(Campainha, LOW);
    
    delay(29000);
    digitalWrite(Campainha, HIGH);
    delay(1000);
    
    digitalWrite(Campainha, LOW);
    digitalWrite(StandBy, HIGH);
      break;
}
}


