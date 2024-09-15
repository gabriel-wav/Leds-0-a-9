int LEDs[] = {12,13,14,15,17,18,19}; // vetor
int zero[] = {1, 1, 1, 1, 1, 1, 0}; // SEGMENTOS NÚMERO ZERO
int um[] = {0, 1, 1, 0, 0, 0, 0}; // SEGMENTOS NÚMERO UM
int dois[] = {1, 1, 0, 1, 1, 0, 1}; // SEGMENTOS NÚMERO DOIS
int tres [] = {1, 1, 1, 1, 0, 0, 1}; // SEGMENTOS NÚMERO TRÊS
int quatro[] = {0, 1, 1, 0, 0, 1, 1}; // SEGMENTOS NÚMERO QUATRO
int cinco[] = {1, 0, 1, 1, 0, 1, 1}; // SEGMENTOS NÚMERO CINCO
int seis[] = {1, 0, 1, 1, 1, 1, 1}; // SEGMENTOS NÚMERO SEIS
int sete[] = {1, 1, 1, 0, 0, 0, 0}; // SEGMENTOS NÚMERO SETE
int oito[] = {1, 1, 1, 1, 1, 1, 1}; // SEGMENTOS NÚMERO OITO
int nove[] = {1, 1, 1, 1, 0, 1, 1}; // SEGMENTOS NÚMERO NOVE

void setup() {
for (int i = 0; i<8; i++) {
pinMode(LEDs[i], OUTPUT);
  }
}

void loop() {
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], zero[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], um[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], dois[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], tres[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], quatro[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], cinco[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], seis[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], sete[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], oito[i]);
}
delay(1000);
for (int i = 0; i<8; i++) {
digitalWrite(LEDs[i], nove[i]);
}
delay(1000);
}