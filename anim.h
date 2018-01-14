// Animation data for Trinket/Gemma + LED matrix backpack jewelry.
// Edit this file to change the animation; it's unlikely you'll need
// to edit the source code.

#define REPS 100 // Number of times to repeat the animation loop (1-255)

const uint8_t PROGMEM anim[] = {

  B00000000,  B00000000, // Yellow Smile Frame 1
  B01000010,  B01000010,
  B01000010,  B01000010,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B10000001,  B10000001,
  B11100111,  B11100111,
  B00111100,  B00111100,
  120,
  B00000000,  B00000000, // Yellow Smile Frame 2
  B01000010,  B01000010,
  B01000010,  B01000010,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B10000001,  B10000001,
  B11000011,  B11000011,
  B01111110,  B01111110,
  120,
  B00000000,  B00000000, // Yellow Smile Frame 1
  B01000010,  B01000010,
  B01000010,  B01000010,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B10000001,  B10000001,
  B11100111,  B11100111,
  B00111100,  B00111100,
  120,
  B00000000,  B00000000, // Yellow Smile Frame 2
  B01000010,  B01000010,
  B01000010,  B01000010,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B10000001,  B10000001,
  B11000011,  B11000011,
  B01111110,  B01111110,
  120,
  B00000000,  B00000000,  // Happy Frame 1
  B01000010,  B00000000,
  B10100101,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B11111111,  B00000000,
  B11000011,  B00000000,
  B01111110,  B00000000,
  200,
  B00000000,  B00000000,  // Blank Frame 1
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  120,
  B11111111,  B00000000,  //Skull Frame 1
  B11111111,  B00000000,
  B10011001,  B01100110,
  B10011001,  B01100110,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B01011010,  B00000000,
  B01011010,  B00000000,
  120,
  B11111111,  B00000000,  //Skull Frame 2
  B11111111,  B00000000,
  B11111111,  B01100110,
  B11111111,  B01100110,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B01011010,  B00000000,
  B10011001,  B00000000,
  120,
  B11111111,  B00000000,  //Skull Frame 3
  B11111111,  B00000000,
  B10011001,  B01100110,
  B10011001,  B01100110,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B01011010,  B00000000,
  B01011010,  B00000000,
  120,
  B11111111,  B00000000,  //Skull Frame 4
  B11111111,  B00000000,
  B11111111,  B01100110,
  B11111111,  B01100110,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B01011010,  B00000000,
  B10011001,  B00000000,
  120,
  B00000000,  B00000000,  //blank
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  30,
  B11111111,  B00000000,  // HI Frame 1
  B00000000,  B00000000,
  B00000000,  B00000000,
  B11101001,  B00000000,
  B01001001,  B00000000,
  B01001111,  B00000000,
  B01001001,  B00000000,
  B11101001,  B00000000,
  120,
  B00000000,  B11101001,  // HI Frame 2
  B00000000,  B01001001,
  B00000000,  B01001111,
  B00000000,  B01001001,
  B00000000,  B11101001,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B11111111,
  120,
  B00000000,  B00000000,  //blank
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  30,
  B00111100,  B00000000,  // Alien 4 Green Frame 1
  B01111110,  B00000000,
  B00110011,  B00000000,
  B01111110,  B00000000,
  B00111100,  B00000000,
  B00000000,  B00000000,
  B00001000,  B00000000,
  B00000000,  B00000000,
  12,
  B00111100,  B00000000,  // Alien 4 Green Frame 2
  B01111110,  B00000000,
  B10011001,  B00000000,
  B01111110,  B00000000,
  B00111100,  B00000000,
  B00000000,  B00000000,
  B00001000,  B00000000,
  B00001000,  B00000000,
  12,
  B00111100,  B00000000,  // Alien 4 Green Frame 3
  B01111110,  B00000000,
  B11001100,  B00000000,
  B01111110,  B00000000,
  B00111100,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00001000,  B00000000,
  12,
  B00111100,  B00000000,  // Alien 4 Green Frame 4
  B01111110,  B00000000,
  B01100110,  B00000000,
  B01111110,  B00000000,
  B00111100,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,    B00111100,  // Alien 4 Red Frame 1
  B00000000,    B01111110,
  B00000000,    B00110011,
  B00000000,    B01111110,
  B00000000,    B00111100,
  B00000000,    B00000000,
  B00000000,    B00001000,
  B00000000,    B00000000,
  12,
  B00000000,    B00111100,  // Alien 4 Red Frame 2
  B00000000,    B01111110,
  B00000000,    B10011001,
  B00000000,    B01111110,
  B00000000,    B00111100,
  B00000000,    B00000000,
  B00000000,    B00001000,
  B00000000,    B00001000,
  12,
  B00000000,    B00111100,  // Alien 4 Red Frame 3
  B00000000,    B01111110,
  B00000000,    B11001100,
  B00000000,    B01111110,
  B00000000,    B00111100,
  B00000000,    B00000000,
  B00000000,    B00000000,
  B00000000,    B00001000,
  12,
  B00000000,    B00111100,  // Alien 4 Red Frame 4
  B00000000,    B01111110,
  B00000000,    B01100110,
  B00000000,    B01111110,
  B00000000,    B00111100,
  B00000000,    B00000000,
  B00000000,    B00000000,
  B00000000,    B00000000,
  12,
  B00111100,    B00111100,  // Alien 4 Yellow Frame 1
  B00110011,    B00110011,
  B01111110,    B01111110,
  B00111100,    B00111100,
  B00000000,    B00000000,
  B00001000,    B00001000,
  B00000000,    B00000000,
  12,
  B00111100,    B00111100,  // Alien 4 Yellow Frame 2
  B01111110,    B01111110,
  B10011001,    B10011001,
  B01111110,    B01111110,
  B00111100,    B00111100,
  B00000000,    B00000000,
  B00001000,    B00001000,
  B00001000,    B00001000,
  12,
  B00111100,    B00111100,  // Alien 4 Yellow Frame 3
  B01111110,    B01111110,
  B11001100,    B11001100,
  B01111110,    B01111110,
  B00111100,    B00111100,
  B00000000,    B00000000,
  B00000000,    B00000000,
  B00001000,    B00001000,
  12,
  B00111100,    B00111100,  // Alien 4 Yellow Frame 4
  B01111110,    B01111110,
  B01100110,    B01100110,
  B01111110,    B01111110,
  B00111100,    B00111100,
  B00000000,    B00000000,
  B00000000,    B00000000,
  B00000000,    B00000000,
  12,
  // Heart
  B00000000,  B01100110,  // Heart Frame 1
  B00000000,  B10011001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B01000010,
  B00000000,  B00100100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 2
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B01111110,
  B00000000,  B00111100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 3
  B00000000,  B10011001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B01000010,
  B00000000,  B00100100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 4
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B01111110,
  B00000000,  B00111100,
  B00000000,  B00011000,
  60,
  // Heart
  B00000000,  B01100110,  // Heart Frame 1
  B00000000,  B10011001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B01000010,
  B00000000,  B00100100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 2
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B01111110,
  B00000000,  B00111100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 3
  B00000000,  B10011001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B01000010,
  B00000000,  B00100100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 4
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B01111110,
  B00000000,  B00111100,
  B00000000,  B00011000,
  60,
  // Heart
  B00000000,  B01100110,  // Heart Frame 1
  B00000000,  B10011001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B01000010,
  B00000000,  B00100100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 2
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B01111110,
  B00000000,  B00111100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 3
  B00000000,  B10011001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B10000001,
  B00000000,  B01000010,
  B00000000,  B00100100,
  B00000000,  B00011000,
  60,
  B00000000,  B01100110,  //Heart Frame 4
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B01111110,
  B00000000,  B00111100,
  B00000000,  B00011000,
  60,
  B00000000,  B00000000,  //blank
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  60,
  B11000000,  B00000000,  // Loading Green Frame 1
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B11110000,  B00000000,  // Loading Green Frame 4
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B11111100,  B00000000,  // Loading Green Frame 3
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 4
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 5
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 6
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 7
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000000,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 8
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000011,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 9
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00001111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 10
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 11
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 12
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B00000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 13
  B00000001,  B00000000,
  B00000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 14
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 15
  B11100001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 16
  B11111001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 17
  B11111111,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 18
  B11111111,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B10000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 19
  B11111111,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000001,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 20
  B11111111,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 21
  B11111111,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10011111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 22
  B11111111,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 23
  B11111111,  B00000000,
  B10000011,  B00000000,
  B10000011,  B00000000,
  B11000011,  B00000000,
  B11000011,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 24
  B11111111,  B00000000,
  B11000011,  B00000000,
  B11000011,  B00000000,
  B11000011,  B00000000,
  B11000011,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 25
  B11111111,  B00000000,
  B11110011,  B00000000,
  B11000011,  B00000000,
  B11000011,  B00000000,
  B11000011,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 26
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11000011,  B00000000,
  B11000011,  B00000000,
  B11000011,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 27
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11000111,  B00000000,
  B11000111,  B00000000,
  B11000011,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 28
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11000111,  B00000000,
  B11000111,  B00000000,
  B11001111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 29
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11000111,  B00000000,
  B11000111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 30
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11100111,  B00000000,
  B11100111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 31
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11100111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B11111111,  B00000000,  // Loading Green Frame 32
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  B11111111,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 1
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00011000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 2
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00011000,
  B00000000,  B00011000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 3
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00111000,
  B00000000,  B00111000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 4
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00111000,
  B00000000,  B00111000,
  B00000000,  B00110000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 5
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00111000,
  B00000000,  B00111000,
  B00000000,  B00111100,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 6
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00111100,
  B00000000,  B00111100,
  B00000000,  B00111100,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 7
  B00000000,  B00000000,
  B00000000,  B00001100,
  B00000000,  B00111100,
  B00000000,  B00111100,
  B00000000,  B00111100,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 8
  B00000000,  B00000000,
  B00000000,  B00111100,
  B00000000,  B00111100,
  B00000000,  B00111100,
  B00000000,  B00111100,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 9
  B00000000,  B00000000,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B00111100,
  B00000000,  B00111100,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 10
  B00000000,  B00000000,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B00000000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 11
  B00000000,  B00000000,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01100000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 12
  B00000000,  B00000000,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111000,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000, // Loading Red Frame 13
  B00000000,  B00000000,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 14
  B00000000,  B00000000,
  B00000000,  B01111100,
  B00000000,  B01111100,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 15
  B00000000,  B00000000,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 16
  B00000000,  B00000110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 17
  B00000000,  B00011110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 18
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 19
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 20
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B01111110,
  B00000000,  B01111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 21
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B00000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 22
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11000000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 23
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11110000,
  12,
  B00000000,  B00000000,  // Loading Red Frame 24
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111100,
  12,
  B00000000,  B00000000,  // Loading Red Frame 25
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111111,
  12,
  B00000000,  B00000000,  // Loading Red Frame 26
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  12,
  B00000000,  B00000000,  // Loading Red Frame 27
  B00000000,  B11111110,
  B00000000,  B11111110,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  12,
  B00000000,  B00000000,  // Loading Red Frame 28
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  12,
  B00000000,  B00000011,  // Loading Red Frame 29
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  12,
  B00000000,  B00001111,  // Loading Red Frame 30
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  12,
  B00000000,  B00111111,  // Loading Red Frame 31
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  12,
  B00000000,  B11111111,  // Loading Red Frame 32
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  B00000000,  B11111111,
  12,
  B00000000,  B00000000,  //blank
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  255,
  B00000000,  B00000000,  //blank
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  B00000000,  B00000000,
  255,
  };
