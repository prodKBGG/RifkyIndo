
#include <IniPunyaRifkii.h> /////// HEADER LIBRARY 

angka pinLED = 13; //////////////// VARIABEL

fungsi sekali() { ///////////////// VOID SETUP 
  mulaiSerial(9600);   //////////// SERIAL.BEGIN   
  aturSebagai(pinLED, KELUARAN); // PIN MODE 
}

fungsi abadi() { ///////////////// VOID LOOP
  kendalikan(pinLED, MENYALA);
  cetakkebawah("LED Menyala"); // PRINTLN
  tunggu(1000);  //////////////// DELAY

  kendalikan(pinLED, MATI);
  cetakkebawah("LED Mati");
  tunggu(1000);
}
