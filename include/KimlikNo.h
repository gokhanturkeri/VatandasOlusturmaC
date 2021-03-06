
#ifndef KIMLIKNO_H //KIMLIKNO kütüphanesi tanımlanıyor
#define KIMLIKNO_H

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"
#include "time.h"

struct KIMLIKNO //KIMLIKNO yapısı oluşturuluyor
{
	//Struct alanı tanımlanıyor
	char* tcno;
	//Fonksiyon göstericileri tanımlanıyor
	void(*Yoket)(struct KIMLIKNO*);
	bool(*Kontrol)(char*);
};

typedef struct KIMLIKNO* KimlikNo;
//KIMLIKNO yapı işaretçisinin ismi KimlikNo olarak atanıyor

KimlikNo KimlikOlustur(int);	//yapıcı method tanımlanıyor
//Kütüphane fonksiyonları tanımlanıyor
char* TCIDOlustur(int);
void KimlikNoYoket(KimlikNo);
bool isValidTckn(char*);
#endif
