#include <stdio.h>
#include <string.h>

void rearrange_string(char *order, char *str, char *new_str) {

  // ตรวจสอบความยาวของ order และ str
  int order_length = strlen(order);
  int str_length = strlen(str);

  // สร้างตัวแปรเก็บจำนวนตัวอักษรแต่ละตัวใน str
  int count[256] = {0};

  // นับจำนวนตัวอักษรใน str
  for (int i = 0; i < str_length; i++) {
    count[(unsigned char)str[i]]++;
  }

  // สร้างสตริงใหม่ตามลำดับของ order
  int index = 0;
  for (int i = 0; i < order_length; i++) {
    for (int j = 0; j < count[(unsigned char)order[i]]; j++) {
      new_str[index++] = order[i];
    }
  }

  // เพิ่มตัวอักษรที่ยังไม่อยู่ในสตริงใหม่
  for (int i = 0; i < str_length; i++) {
    if (strchr(new_str, str[i]) == NULL) {
      new_str[index++] = str[i];
    }
  }

  // ปิดสตริงด้วย '\0'
  new_str[index] = '\0';
}


int main() {
  // ตัวอย่างการใช้งาน
  char order[] = "cba";
  char str[] = "abbcd";
  char new_str[strlen(str) + 1];

  rearrange_string(order, str, new_str);

  printf("Original String: %s\n", str);
  printf("Reordered String: %s\n", new_str);

  return 0;
}
