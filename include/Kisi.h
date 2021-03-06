
#ifndef KISI_H //KISI kütüphanesi tanımlanıyor
#define KISI_H

#include "stdio.h"
#include "stdlib.h"
#include "Telefon.h"
#include "KimlikNo.h"

struct KISI //KISI yapısı oluşturuluyor
{
	//Struct alanları tanımlanıyor
	KimlikNo tcno;
	Telefon telefon;
	char* yas;
	char* isim;
	char* soyisim;
	//Fonksiyon göstericisi tanımlanıyor
	void(*Yoket)(struct KISI*);
};

typedef struct KISI* Kisi;
//KISI yapı işaretçisinin ismi Kisi olarak atanıyor

Kisi KisiOlustur(char**, char**,int);	//yapıcı method tanımlanıyor
//Kütüphane fonksiyonu tanımlanıyor
void KisiYoket(Kisi);
#endif
