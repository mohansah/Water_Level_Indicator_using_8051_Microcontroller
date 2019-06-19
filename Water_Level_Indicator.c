// Lcd module connections
sbit LCD_RS at P2_0_bit;     // RS pin connected to port P2^0
sbit LCD_EN at P2_1_bit;
// for output
sbit LCD_D4 at P2_2_bit;
sbit LCD_D5 at P2_3_bit;
sbit LCD_D6 at P2_4_bit;
sbit LCD_D7 at P2_5_bit;

//for inputs
sbit lower at P0_0_bit;
sbit middle at P0_1_bit;
sbit high at P0_2_bit;
char i;

void Move_Delay() {                  // Function used for text moving
  Delay_ms(500);                     // You can change the moving speed here
}

void main(){
     Lcd_Init();                        // Initialize Lcd
     lower = middle = high = 0;
  while(1) {
     while(lower == 0 && middle == 0 && high == 0){
              Lcd_Cmd(_LCD_CLEAR);               // Clear display
              Lcd_Cmd(_LCD_CURSOR_OFF);          // Cursor off
              Lcd_Out(2,1,"TANK IS EMPTY");              // Write text in second row
              Delay_ms(5000);
     }
     while(lower == 1 && middle == 0 && high == 0){

              Lcd_Cmd(_LCD_CLEAR);               // Clear display
              Lcd_Cmd(_LCD_CURSOR_OFF);          // Cursor off
              Lcd_Out(2,1,"TANK is LOW");        // Write text in second row
              Delay_ms(5000);
     }
     while(lower == 1 && middle == 1 && high == 0){
              Lcd_Cmd(_LCD_CLEAR);               // Clear display
              Lcd_Cmd(_LCD_CURSOR_OFF);          // Cursor off
              Lcd_Out(2,1,"TANK is HALF");       // Write text in second row
              Delay_ms(5000);
     }
     while(lower == 1 && middle == 1 && high == 1){
              Lcd_Cmd(_LCD_CLEAR);               // Clear display
              Lcd_Cmd(_LCD_CURSOR_OFF);          // Cursor off
              Lcd_Out(2,1,"TANK IS FULL");       // Write text in second row
              Delay_ms(5000);
     }

              Lcd_Cmd(_LCD_CLEAR);               // Clear display
              Lcd_Cmd(_LCD_CURSOR_OFF);          // Cursor off
              Lcd_Out(2,4,"Oops - ERROR ");   // Write text in second row
              Delay_ms(4000);
              Lcd_Cmd(_LCD_CLEAR);               // Clear display
              Lcd_Cmd(_LCD_CURSOR_OFF);          // Cursor off

  }
}

