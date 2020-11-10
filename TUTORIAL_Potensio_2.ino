/*
 * TUTORIAL POTENSIOMETER PADA ARDUINO DENGAN MAPPING NILAI
 * 
 * Pinout (dari kiri ke kanan potensiometer) :
 * GND,A0,VCC
 * 
 * Untuk membaca nilai dari pin analog (nilai 0 - 1023)
 * dan mapping ke nilai tertentu
 */

void setup() {
  pinMode(A0,INPUT); //set A0 menjadi input
  Serial.begin(115200); //memulai komunikasi serial pada baud rate 115200
  Serial.println("Mencoba mapping nilai potensiometer pada Arduino");
}

void loop() {
  int hasil = analogRead(A0); //ambil data nilai A0 dan simpan ke variabel hasil 
  int hasilMap = map(hasil,0,1023,1,4); //mapping nilai 0 s/d 1023 ke 1 s/d 4
  Serial.println("Nilai dari potensio : " + String(hasil)); //tampilkan pada serial monitor
  Serial.println("Nilai hasil mapping : " + String(hasilMap)); //tampilkan pada serial monitor
  delay(500);  //jeda waktu 500 uS
}
