#include <iostream>
#include <clocale>
using namespace std;
//ATM
class Banka {
public:
    double hesapBakiyesi = 0.0;
    double yatirilanMiktar = 0.0;
    double cekilenMiktar = 0.0;
    double cepTl = 0.0;
    int secim = 0, sayac = 0;
    long int id, password;

    void menu() {//Men�: yapmak istenilen i�lem.
        cout << " L�tfen a�a��daki men�den yapmak istedi�iniz se�ene�i i�aretleyiniz:" << endl;

        cout << " 1-> Giri� yap�n�z" << endl;
        cout << " 2-> Yeni bir Hesap Olu�turunuz" << endl;
        cout << " 3-> ��k��" << endl;

        cout << " Se�iminiz: ";
        cin >> secim;
    }

    bool girisYapma() {     //Hesap olu�turulduktan sonra ki giri�
        long int idKont, passwordKont;
        cout << " L�tfen m��teri numaran�z� girin: ";
        cin >> idKont;
        cout << " �ifrenizi giriniz : ";
        cin >> passwordKont;
        // Giri� kontrol: �ifre ve kullan�c� ad� do�ru olup olmad���
        if (id == idKont && password == passwordKont) {
            cout << " Ho�geldiniz sisteme ba�land�n�z.\n" << endl;
            return true;
        }
        else {
            return false;
        }
    }

    void hesapOlusturma() {  //hesap olu�turma.

        cout << " L�tfen m��teri  numaran�z� girin: ";
        cin >> id;
        cout << " L�tfen �ifrenizi giriniz : ";
        cin >> password;
        cout << " Te�ekk�rler! Banka Hesab�n�z olu�turuldu.!" << endl;
        cout << "\n";
        sayac++;
    }

    void islemYapma() {   //Hesapla yapmak istenilen i�lem. 
        cout << " 4-> Hesaba para yat�rma" << endl;
        cout << " 5-> Hesaptan para �ekme" << endl;
        cout << " 6-> Bakiye g�r�nt�leme" << endl;
        cout << " 7-> Di�er i�lemler" << endl;
        cout << " 8-> Hesab�n�zdan ��k�� yapma" << endl;
        cin >> secim;
    }

    void Faturaodeme() {
        cout << " 9-> Elektrik faturas� yat�rma" << endl;
        cout << " 10-> Su faturas� yat�rma" << endl;
        cout << " 11-> Do�algaz faturas� yat�rma" << endl;
        cout << " 12-> Telefon faturas� yat�rma" << endl;
        cout << " 13-> Tv/Kablo/�nternet faturas� yat�rma" << endl;
        cout << " 14-> Geri" << endl;
        cin >> secim;
    }

    void digerodemeler() {
        cout << " 15-> Cep telefonu TL y�kleme" << endl;
        cout << " 16-> Abonman y�kleme" << endl;
        cout << " 17-> Motorlu ta��tlar vergisi" << endl;
        cout << " 18-> �niversite �demeleri" << endl;
        cout << " 19-> Geri" << endl;
        cin >> secim;
    }

    void basvuru() {
        cout << " 20-> Sigorta ba�vurusu" << endl;
        cout << " 21-> Kredi ba�vurusu" << endl;
        cout << " 22-> Kredi kart� ba�vurusu" << endl;
        cout << " 23-> Geri" << endl;
        cin >> secim;
    }

    void krediKartiodeme() {
        cout << " 24-> Nakit" << endl;
        cout << " 25-> Hesaptan" << endl;
        cout << " 26-> Geri" << endl;
        cin >> secim;
    }

    void sifreIslem() {
        cout << " 27-> Hesap �ifresi yenileme" << endl;
        cout << " 28-> Geri" << endl;
        cin >> secim;
    }

    void digerIslemler() {
        cout << " 29-> Fatura �deme" << endl;
        cout << " 30-> Di�er �demeler" << endl;
        cout << " 31-> Ba�vuru" << endl;
        cout << " 32-> Kredi Kart� �deme" << endl;
        cout << " 33-> �ifre de�i�tirme" << endl;
        cout << " 34-> Geri" << endl;
        cin >> secim;
    }

    void sigortaBasvuruHesap() {  //Sigorta hesap olu�turma.

        cout << " L�tfen m��teri  numaran�z� girin: ";
        cin >> id;
        cout << " L�tfen �ifrenizi giriniz : ";
        cin >> password;
        cout << " Te�ekk�rler! Sigorta Ba�vuru Hesab�n�z olu�turuldu.!" << endl;
        cout << "\n";
    }

    void krediBasvuruHesap() {  //Kredi hesap olu�turma.

        cout << " L�tfen m��teri  numaran�z� girin: ";
        cin >> id;
        cout << " L�tfen �ifrenizi giriniz : ";
        cin >> password;
        cout << " Te�ekk�rler! Kredi Ba�vuru Hesab�n�z olu�turuldu.!" << endl;
        cout << "\n";
    }

    void kKartiHesap() {  //Kredi kart� hesap olu�turma.

        cout << " L�tfen m��teri  numaran�z� girin: ";
        cin >> id;
        cout << " L�tfen �ifrenizi giriniz : ";
        cin >> password;
        cout << " Te�ekk�rler! Kredi Kart� Ba�vuru Hesab�n�z olu�turuldu.!" << endl;
        cout << "\n";
    }

    void sifreYenileme() {
        cout << " Yeni olu�turmak istedi�iniz �ifrenizi giriniz : ";
        cin >> password;
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");   //Program dilini T�rk�e yap�yoruz.//

    Banka ATM;

    cout << " Merhaba! Zamar Bankas�n�n ATM Makinesine Ho� Geldiniz...\n" << endl;

    while (1) {       //Men� ekran� s�rekli g�z�kmesi i�in d�ng� koydum.
        ATM.menu();

        if (ATM.secim == 1) {
            if (ATM.girisYapma() == true) {
                while (1) {
                    ATM.islemYapma();
                    if (ATM.secim == 4) {
                        cout << " Yat�r�lan miktar: $";
                        cin >> ATM.yatirilanMiktar;
                        ATM.hesapBakiyesi = ATM.hesapBakiyesi + ATM.yatirilanMiktar;
                        cout << endl;
                    }
                    else if (ATM.secim == 5) {
                        cout << " �ekilen miktar: $";
                        cin >> ATM.cekilenMiktar;
                        ATM.hesapBakiyesi = ATM.hesapBakiyesi - ATM.cekilenMiktar;
                        cout << endl;
                    }
                    else if (ATM.secim == 6) {
                        cout << " Hesap bakiyeniz: $" << ATM.hesapBakiyesi << endl;
                        cout << endl;
                    }
                    else if (ATM.secim == 7) {
                        while (1) {
                            ATM.digerIslemler();
                            if (ATM.secim == 29) {
                                while (1) {
                                    ATM.Faturaodeme();
                                    if (ATM.secim == 9) {
                                        cout << " Elektrik faturas� yat�r�ld�..\n" << endl;
                                    }
                                    else if (ATM.secim == 10) {
                                        cout << " Su faturas� yat�r�ld�..\n" << endl;
                                    }
                                    else if (ATM.secim == 11) {
                                        cout << " Do�algaz faturas� yat�r�ld�..\n" << endl;
                                    }
                                    else if (ATM.secim == 12) {
                                        cout << " Telefon faturas� yat�r�ld�..\n" << endl;
                                    }
                                    else if (ATM.secim == 13) {
                                        cout << " Tv/Kablo/�nternet faturas� yat�r�ld�..\n" << endl;
                                    }
                                    else if (ATM.secim == 14) {
                                        while (1) {
                                            ATM.digerIslemler();
                                            if (ATM.secim == 30) {
                                                while (1) {
                                                    ATM.digerodemeler();
                                                    if (ATM.secim == 15) {
                                                        cout << " Cep telefonuna y�klenmek istenen miktar: $";
                                                        cin >> ATM.cepTl;
                                                        cout << " Cep telefonuna y�kelenen miktar: $" << ATM.cepTl << endl;
                                                    }
                                                    else if (ATM.secim == 16) {
                                                        cout << " Abonman fiyat� 110TL dir." << endl;
                                                        cout << " yat�r�ld�.." << endl;
                                                    }
                                                    else if (ATM.secim == 17) {
                                                        cout << " Vergi borcunuz bulunmamaktad�r.." << endl;
                                                    }
                                                    else if (ATM.secim == 18) {
                                                        cout << " Ayvansaray �niversitesi -> 16.000TL" << endl;
                                                    }
                                                    else if (ATM.secim == 19) {
                                                        while (1) {
                                                            ATM.digerIslemler();
                                                            if (ATM.secim == 31) {
                                                                while (1) {
                                                                    ATM.basvuru();
                                                                    if (ATM.secim == 20) {
                                                                        cout << " Sigorta ba�vurusu yapmak i�in hesap olu�turmal�s�n�z." << endl;
                                                                        ATM.sigortaBasvuruHesap();
                                                                    }
                                                                    else if (ATM.secim == 21) {
                                                                        cout << " Kredi ba�vurusu yapmak i�in hesap olu�turmal�s�n�z." << endl;
                                                                        ATM.krediBasvuruHesap();
                                                                    }
                                                                    else if (ATM.secim == 22) {
                                                                        cout << " Kredi Kart� ba�vurusu yapmak i�in hesap olu�turmal�s�n�z." << endl;
                                                                        ATM.kKartiHesap();
                                                                    }
                                                                    else if (ATM.secim == 23) {
                                                                        ATM.digerIslemler();
                                                                        if (ATM.secim == 32) {
                                                                            ATM.krediKartiodeme();
                                                                            if (ATM.secim == 24) {
                                                                                cout << " Ka��t paralar�n�z� sa� alt k�s�ma koyunuz.." << endl;
                                                                                cout << " Kredi kart� borcunuz �denmi�tir." << endl;
                                                                            }
                                                                            else if (ATM.secim == 25) {
                                                                                cout << " Hesab�n�zda para bulunmamaktad�r.." << endl;
                                                                                cout << " L�tfen y�kledikten sonra tekrar deneyiniz.." << endl;
                                                                            }
                                                                            else if (ATM.secim == 26) {
                                                                                ATM.digerIslemler();
                                                                                if (ATM.secim == 33) {
                                                                                    ATM.sifreIslem();
                                                                                    if (ATM.secim == 27) {
                                                                                        ATM.sifreYenileme();
                                                                                        cout << " Yeni �ifreniz olu�turulmu�tur.." << endl;
                                                                                    }
                                                                                    else if (ATM.secim == 28) {
                                                                                        ATM.digerIslemler();
                                                                                        if (ATM.secim == 34) {
                                                                                            ATM.islemYapma();
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if (ATM.secim == 8) {
                        break;
                    }
                }
            }
            else if (ATM.sayac == 0) {
                cout << "\n * G�R�� BA�ARISIZ OLDU! *" << endl;
                cout << "          �nce hesap olu�turunuz!" << endl;
            }

            else {
                cout << " M��teri numaran�z veya �ifreniz yanl��." << endl;
            }
        }

        else if (ATM.secim == 2) {
            ATM.hesapOlusturma();
        }

        else if (ATM.secim == 3) {
            cout << " ��k�� yap�ld�..";
            break;
        }
    }
    return 0;
}
