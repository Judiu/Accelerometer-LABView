char val;
String palabra;
String dato_1;
String dato_2;
String dato_3;

int k1;
int k2;
int k3;

void setup()
{
  Serial.begin(9600);
}

void loop() {

if(Serial.available())
  {
    val = Serial.read();  
    palabra = palabra + val; 

if (val == '*') {

      Serial.println(palabra);
      palabra = "";
      /*k1 = palabra.indexOf('|');
      dato_1 = palabra.substring(0, k1);
      k2 = palabra.indexOf('|', k1+1);
      dato_2 = palabra.substring(k1+1, k2);
      k3 = palabra.indexOf('|', k2+1);
      dato_3 = palabra.substring(k2+1, k3);*/

      /*Serial.print("Dato_1 = ");
      Serial.println(dato_1); 
      Serial.print("Dato_2 = ");
      Serial.println(dato_2);
      Serial.print("Dato_3 = ");
      Serial.println(dato_3);
      palabra = ""; */

 }
      }
}
