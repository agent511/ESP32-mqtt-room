//#include "Settings_kitchen.h"
//#include "Settings_living_room.h"
//#include "Settings_loft.h"
//#include "Settings_master.h"
//#include "Settings_office.h"
#include "Settings_marks_office.h"

//Replace with your Wifi SSID; example: #define ssid "MyWifi"
#define ssid "Transwarp"

//Replace with your Wifi password; example: #define password "12345678"
#define password "slipstream"

//Replace with your MQTT Broker address; example: #define mqttHost IPAddress(192, 168, 1, 195)
#define mqttHost IPAddress(192, 168, 1, 223)

//Replace with your MQTT Broker port; example: #define mqttPort 1883
#define mqttPort 1883

//Replace with your MQTT Broker user; example: #define mqttUser "homeassistant"
#define mqttUser "homeassistant"

//Replace with your MQTT Broker password; example: #define mqttPassword "12345678"
#define mqttPassword "sheeVipohgee1Aef9iuz2eeT9quaaDaiLashie9oocae7OK1Uh0aereew1Eemahh"

//Specify the LED pin. For most dev boards, this is GPIO2
#define LED_BUILTIN 2

// Logic level for turning the led on. Most boards use active low, meaning LED_ON should be set to 0
#define LED_ON 0

//Define the base topic for room detection. Usually "room_presence"
#define channel "room_presence"

//Define the topic for publishing availability
#define availabilityTopic "presence_nodes/" room

//Define the topic for publishing JSON attributes
#define telemetryTopic "presence_nodes/" hostname "/tele"

// Define bluetooth scan parameters
#define scanInterval 1 // Define the interval in seconds between scans
#define singleScanTime 1 // Define the duration of a single scan in seconds
#define activeScan true // Active scan uses more power, but get results faster
#define bleScanInterval 0x80 // Used to determine antenna sharing between Bluetooth and WiFi. Do not modify unless you are confident you know what you're doing
#define bleScanWindow 0x10 // Used to determine antenna sharing between Bluetooth and WiFi. Do not modify unless you are confident you know what you're doing

// MQTT topic for sensor values from HTU21D temperature and humidity sensor
//#define htuSensorTopic "presence_nodes/" hostname "/sensor"

//List of allowed MAC Addresses for MQTT Publish. All others will be ignored.
//Feature is disabled by default.
#define allowedListCheck true
String allowedList[] = {"e98f5747c69f4031a292c4f15f660004", "2f234454cf6d4a0fadf2f4911ba9ffa6", "441808d8acc74de3b9919e825c24c804", "43270e08acc74de3b9919e825c24c804"};
uint32_t allowedListNumberOfItems = 4;

/*
mark    e98f5747c69f4031a292c4f15f660004-0-0
stacey  2f234454cf6d4a0fadf2f4911ba9ffa6-1-1
jack    441808d8acc74de3b9919e825c24c804-128-0
pepper  43270e08acc74de3b9919e825c24c804-128-0
*/
