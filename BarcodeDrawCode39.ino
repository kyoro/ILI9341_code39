#include "SPI.h"
#include "Adafruit_ILI9341.h"

#define TFT_DC 2
#define TFT_CS 5

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

void setup() {
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(1);

  tft.fillScreen(ILI9341_BLACK);
  tft.setCursor(20, 20);
  tft.setTextColor(ILI9341_GREEN);  
  tft.setTextSize(2);
  tft.println("Here is Code39 below:");
  
  drawCode39(tft, 0, 80, 320, 60, 2, "hello");
}

void loop(void) {
  
}

