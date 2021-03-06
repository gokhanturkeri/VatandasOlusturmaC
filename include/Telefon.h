
#ifndef TELEFON_H //TELEFON kütüphanesi tanımlanıyor
#define TELEFON_H

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "ImeiNo.h"

struct TELEFON //TELEFON yapısı oluşturuluyor
{
	//Struct alanları tanımlanıyor
	ImeiNo imei;
	char* telno ;
	//Fonksiyon göstericisi tanımlanıyor
	void (*Yoket)(struct TELEFON*);
};
typedef struct TELEFON* Telefon;
//TELEFON yapı işaretçisinin ismi Telefon olarak atanıyor

Telefon TelefonOlustur(int);	//yapıcı method tanımlanıyor
//Kütüphane fonksiyonları tanımlanıyor
char* random_telno(int);
void TelefonYoket(Telefon);

#endif
