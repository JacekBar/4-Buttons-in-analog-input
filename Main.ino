int sensor0 = A0;
int s1[] = {314, 327};      //values determined by calculations
int s2[] = {163, 173};      //see Input Values.xlsx
int s3[] = {90, 97};        //for circuit see Circuit.png
int s4[] = {46, 52};        //here
int s12[] = {397, 411};     //R0 = 1 kΩ
int s13[] = {359, 372};     //R1 = 2,2 kΩ
int s14[] = {337, 350};     //R2 = 5,1 kΩ
int s23[] = {229, 240};     //R3 = 10 kΩ
int s24[] = {197, 208};     //R4 = 20 kΩ
int s34[] = {130, 138};     
int s123[] = {432, 446};    
int s124[] = {415, 429};
int s134[] = {379, 393};
int s234[] = {258, 269};
int s1234[] = {448, 462};



void setup()
{
  Serial.begin(9600);                     //Ustawienie prędkości transmisji
  Serial.println("Początek nadawania!"); //Jednorazowe wysłanie tekstu
}


void loop() 
{
  delay(100);
  sensor0 = analogRead(0);
  
  if(sensor0>=s1[0] && sensor0<= s1[1]) Serial.print(String(sensor0) + " Przyciski: 1\n");
  else if(sensor0>=s2[0] && sensor0<= s2[1]) Serial.print(String(sensor0) + " Przyciski: 2\n");
  else if(sensor0>=s3[0] && sensor0<= s3[1]) Serial.print(String(sensor0) + " Przyciski: 3\n");
  else if(sensor0>=s4[0] && sensor0<= s4[1]) Serial.print(String(sensor0) + " Przyciski: 4\n");
  else if(sensor0>=s12[0] && sensor0<= s12[1]) Serial.print(String(sensor0) + " Przyciski: 1, 2\n");
  else if(sensor0>=s13[0] && sensor0<= s13[1]) Serial.print(String(sensor0) + " Przyciski: 1, 3\n");
  else if(sensor0>=s14[0] && sensor0<= s14[1]) Serial.print(String(sensor0) + " Przyciski: 1, 4\n");
  else if(sensor0>=s23[0] && sensor0<= s23[1]) Serial.print(String(sensor0) + " Przyciski: 2, 3\n");
  else if(sensor0>=s24[0] && sensor0<= s24[1]) Serial.print(String(sensor0) + " Przyciski: 2, 4\n");
  else if(sensor0>=s34[0] && sensor0<= s34[1]) Serial.print(String(sensor0) + " Przyciski: 3, 4\n");
  else if(sensor0>=s123[0] && sensor0<= s123[1]) Serial.print(String(sensor0) + " Przyciski: 1, 2, 3\n");
  else if(sensor0>=s124[0] && sensor0<= s124[1]) Serial.print(String(sensor0) + " Przyciski: 1, 2, 4\n");
  else if(sensor0>=s134[0] && sensor0<= s134[1]) Serial.print(String(sensor0) + " Przyciski: 1, 3, 4\n");
  else if(sensor0>=s234[0] && sensor0<= s234[1]) Serial.print(String(sensor0) + " Przyciski: 2, 3, 4\n");
  else if(sensor0>=s1234[0] && sensor0<= s1234[1]) Serial.print(String(sensor0) + " Przyciski: 1, 2, 3, 4\n");
  else if(sensor0>0)  Serial.print(String(sensor0) + " There's something wrong!\n");
  
}
