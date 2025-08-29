/************************ Adafruit IO Config *******************************/

//Configuración de ID de adafruit
#define IO_USERNAME  "mi_userr"
#define IO_KEY       "mi_key"

//Parte de configuración de wifi
#define WIFI_SSID "nombre_dispositivo"
#define WIFI_PASS "mi_clave"


// comment out the following lines if you are using fona or ethernet
#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
