#define DDRB  (*(volatile unsigned char *) 0x37)
#define PORTB (*(volatile unsigned char *) 0x38)


void delay(volatile long time) {
  while (time > 0) {
    time--;
  }
}

int main() {
  DDRB |= (1 << 1); //set PB1 as output

  while (1) {
    PORTB ^= (1 << 1);
    delay(1000000);
  }
}
