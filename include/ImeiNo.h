
#ifndef IMEINO_H //IMEINO kütüphanesi tanımlanıyor
#define IMEINO_H

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "time.h"
#include "stdbool.h"

struct IMEINO //IMEINO yapısı oluşturuluyor
{
	//Struct alanı tanımlanıyor
	char* imei;
	//Fonksiyon göstericileri tanımlanıyor
	void(*Yoket)(struct IMEINO*);
	bool(*Kontrol)(char*);

};

typedef struct IMEINO* ImeiNo;
//IMEINO yapı işaretçisinin ismi ImeiNo olarak atanıyor

ImeiNo imeiOlustur(int);	//yapıcı method tanımlanıyor
//Kütüphane fonksiyonları tanımlanıyor
char* generateValidImeiNumber(int);
int getCheckDigit(char*);
int sumUpDigits(int);
int sumDig(int);
void ImeiNoYoket(ImeiNo);
bool isValidIMEI(char*);
#endif
