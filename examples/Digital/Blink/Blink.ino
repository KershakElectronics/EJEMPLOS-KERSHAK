//BLINK KERSHAK



// EN EL SETUP SE CONFIGURAN LOS PINES, EN ESTE CASO PC13 ES UNA SALIDA QUE CUENTA CON UN LED INTEGRADO EN LA PLACA KERSHAK V-06
void setup() {

  pinMode(PC13, OUTPUT);// PC13 LO DECLARAMOS COMO SALIDA CON LA FUNCION pinMode(nombre_de_pin,OUTPUT/INPUT);
}


 
void loop() {
  digitalWrite(PC13, HIGH);  // ACTIVAMOS LA SALIDA PC13
  delay(500);              //DAMOS UN ESPACIO DE TIEMPO DE 2 SEGUNDOS
  digitalWrite(PC13, LOW);    // DESACTIVAMOS LA SALIDA PC13
  delay(500);            //DAMOS UN ESPACIO DE TIEMPO DE 0.5 SEGUNDOS
}
  //FIN