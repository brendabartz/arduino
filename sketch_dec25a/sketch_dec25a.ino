int tempo; //criando variavel tempo
int botao = 0; // criando a variavel para receber o valor do sinal que está lendo no botão
void setup() {
  pinMode(1, OUTPUT); // definindo porta 1 como saida
  pinMode (8, INPUT); // definindo porta 8 como entrada
  tempo = 30; // definindo valor da variável tempo
}
void loop() {
  botao = digitalRead(8); // Lê o valor da porta de entra 8 e grava na variavel botao
  if (botao == HIGH){ // se variavel botão receber valor "Alto"/"HIGH"
  digitalWrite(1, HIGH); // porta 1 libera 5v/HIGH/1
  } else {   // senão botao recebe valor "Baixo"/"LOW"
  digitalWrite(1, LOW); /// porta 1 libera 0v/LOW/O/GND
}
  delay(tempo); // aguarda o valor que está definido na variável tempo em ms (1000ms = 1s)                    
}
// mudando algo para fazer um segundo commit