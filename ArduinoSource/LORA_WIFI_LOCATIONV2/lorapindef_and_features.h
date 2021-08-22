


// Pinning

#ifdef geraet8 //ESP32 Lora Bike Light V1
//Check here your Version and Pinnings
  #define TTGOT5 1 //neded to indicate the E-INK Library a different pinning
  #define E_INK_PIN_SPI_BUSY 4
  #define E_INK_PIN_SPI_RST  16
  #define E_INK_PIN_SPI_DC   17
  #define E_INK_PIN_SPI_CS   13
  #define E_INK_PIN_SPI_DIN  23
  #define E_INK_PIN_SPI_SCK  18 
  #define E_INK_PIN_SPI_MISO 24//n/A

//Lora Pinning for SP32 Lora Bike Light V1
  #define LORA_PIN_SPI_MOSI 23
  #define LORA_PIN_SPI_MISO 19//n/A
  #define LORA_PIN_SPI_SCK  18
  #define LORA_PIN_SPI_NSS  05  
  #define LORA_PIN_SPI_RST  04//27   
  #define LORA_PIN_SPI_DIO1 27
  #define LORA_PIN_SPI_DIO0 27

  #define APP_EUI_LORA 0xaddme
  #define DEV_EUI_LORA 0xaddme
  #define APP_KEY_LORA 0xaddme
#endif

//EEPROM HASH für Joins OTAA gegen die geprüft wird


#ifdef geraet8
  #define DATAVALID 0xACF2AFCC                     // Pattern for data valid in EEPROM/RTC memory
#endif

// Features


#ifdef geraet7 //limit uplinks on testboard
  const unsigned TX_INTERVAL = 40; //180
  /*#define BME280_CONNECTED
  #define BME_ADRESS 0x77
  #define CCS811_CONNECTED
  #define CCS811_ADRESS 0x5A*/
  #define ANZAHL_LEDS 6//36
  #define RGB_LED_DATA_PIN 25
  
  #define OBEN_LED_DATA_PIN 26
  #define OBEN_LEDS 1
  #define SK6812_LEDS
  
#endif

#ifdef geraet8 //limit uplinks on testboard
  const unsigned TX_INTERVAL = 40; //180
  /*#define BME280_CONNECTED
  #define BME_ADRESS 0x77
  #define CCS811_CONNECTED
  #define CCS811_ADRESS 0x5A*/
  #define ANZAHL_LEDS 1//36
  #define RGB_LED_DATA_PIN 32
  
  #define OBEN_LED_DATA_PIN 26
  #define OBEN_LEDS 1
  #define SK6812_LEDS
  
#endif