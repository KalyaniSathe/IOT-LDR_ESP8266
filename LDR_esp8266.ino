#include <cogcloudesp8266.h>

String ssid = "akconnect";
String pass = "Ramnagarnashik";

String apikey = "20a7c4e9f79f9f47cac02685db11a0f1";

void setup ()
{
  pinMode(A0,INPUT);
  
  Serial.begin(9600);
  cogInitCloud (ssid,pass,apikey);
  //cogBindPin (A0,"LDR");
}

void loop ()
{

  cogAppLoop();
  int x = analogRead(A0);
  cogStoreCloudVariable("LDR",String(x));
  

  
  
}
