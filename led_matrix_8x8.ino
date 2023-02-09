#include <FastLED.h>

#define LED_PIN 4
#define NUM_LEDS 64
#define COLOR_ORDER GRB
#define CHIPSET WS2812B
#define BRIGHTNESS 3

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(100);
    leds[i] = CRGB::Black;
  }
}