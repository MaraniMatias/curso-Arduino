void mensaje(String str, float value) {
  Serial.print(str);
  Serial.print(" ");
  Serial.println(value);
}
void mensaje(String str, char value, String str1, int value1) {
  Serial.print(str);
  Serial.print(" ");
  Serial.print(value1);
  Serial.print(" ");
  Serial.print(str1);
  Serial.print(" ");
  Serial.println(value1);
}
void mensaje(String str) {
  Serial.println(str);
}
