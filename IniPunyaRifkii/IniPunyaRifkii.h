#ifndef IniPunyaRifkii_h
#define IniPunyaRifkii_h

#include <Arduino.h>

// Definisi Makro untuk Status Pin
#define KELUARAN OUTPUT
#define MASUKAN INPUT
#define MENYALA HIGH
#define MATI LOW

// Definisi Makro untuk Fungsi Pin
#define aturSebagai(pin, mode) pinMode(pin, mode)
#define kendalikan(pin, status) digitalWrite(pin, status)
#define tunggu(ms) delay(ms)

// Tipe Data dan Fungsi Utama
#define angka int
#define karakter char
#define desimal float
#define ganda double
#define logika bool
#define fungsi void
#define sekali setup
#define abadi loop

// Fungsi Serial
#define mulaiSerial(baud) Serial.begin(baud)
#define cetak(data) Serial.print(data)
#define cetakkebawah(data) Serial.println(data)

#endif
