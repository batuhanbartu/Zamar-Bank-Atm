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

    void menu() {//Menü: yapmak istenilen iþlem.
        cout << " Lütfen aþaðýdaki menüden yapmak istediðiniz seçeneði iþaretleyiniz:" << endl;

        cout << " 1-> Giriþ yapýnýz" << endl;
        cout << " 2-> Yeni bir Hesap Oluþturunuz" << endl;
        cout << " 3-> Çýkýþ" << endl;

        cout << " Seçiminiz: ";
        cin >> secim;
    }

    bool girisYapma() {     //Hesap oluþturulduktan sonra ki giriþ
        long int idKont, passwordKont;
        cout << " Lütfen müþteri numaranýzý girin: ";
        cin >> idKont;
        cout << " Þifrenizi giriniz : ";
        cin >> passwordKont;
        // Giriþ kontrol: þifre ve kullanýcý adý doðru olup olmadýðý
        if (id == idKont && password == passwordKont) {
            cout << " Hoþgeldiniz sisteme baðlandýnýz.\n" << endl;
            return true;
        }
        else {
            return false;
        }
    }

    void hesapOlusturma() {  //hesap oluþturma.

        cout << " Lütfen müþteri  numaranýzý girin: ";
        cin >> id;
        cout << " Lütfen þifrenizi giriniz : ";
        cin >> password;
        cout << " Teþekkürler! Banka Hesabýnýz oluþturuldu.!" << endl;
        cout << "\n";
        sayac++;
    }

    void islemYapma() {   //Hesapla yapmak istenilen iþlem. 
        cout << " 4-> Hesaba para yatýrma" << endl;
        cout << " 5-> Hesaptan para çekme" << endl;
        cout << " 6-> Bakiye görüntüleme" << endl;
        cout << " 7-> Diðer iþlemler" << endl;
        cout << " 8-> Hesabýnýzdan çýkýþ yapma" << endl;
        cin >> secim;
    }

    void Faturaodeme() {
        cout << " 9-> Elektrik faturasý yatýrma" << endl;
        cout << " 10-> Su faturasý yatýrma" << endl;
        cout << " 11-> Doðalgaz faturasý yatýrma" << endl;
        cout << " 12-> Telefon faturasý yatýrma" << endl;
        cout << " 13-> Tv/Kablo/Ýnternet faturasý yatýrma" << endl;
        cout << " 14-> Geri" << endl;
        cin >> secim;
    }

    void digerodemeler() {
        cout << " 15-> Cep telefonu TL yükleme" << endl;
        cout << " 16-> Abonman yükleme" << endl;
        cout << " 17-> Motorlu taþýtlar vergisi" << endl;
        cout << " 18-> Üniversite ödemeleri" << endl;
        cout << " 19-> Geri" << endl;
        cin >> secim;
    }

    void basvuru() {
        cout << " 20-> Sigorta baþvurusu" << endl;
        cout << " 21-> Kredi baþvurusu" << endl;
        cout << " 22-> Kredi kartý baþvurusu" << endl;
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
        cout << " 27-> Hesap þifresi yenileme" << endl;
        cout << " 28-> Geri" << endl;
        cin >> secim;
    }

    void digerIslemler() {
        cout << " 29-> Fatura Ödeme" << endl;
        cout << " 30-> Diðer ödemeler" << endl;
        cout << " 31-> Baþvuru" << endl;
        cout << " 32-> Kredi Kartý Ödeme" << endl;
        cout << " 33-> Þifre deðiþtirme" << endl;
        cout << " 34-> Geri" << endl;
        cin >> secim;
    }

    void sigortaBasvuruHesap() {  //Sigorta hesap oluþturma.

        cout << " Lütfen müþteri  numaranýzý girin: ";
        cin >> id;
        cout << " Lütfen þifrenizi giriniz : ";
        cin >> password;
        cout << " Teþekkürler! Sigorta Baþvuru Hesabýnýz oluþturuldu.!" << endl;
        cout << "\n";
    }

    void krediBasvuruHesap() {  //Kredi hesap oluþturma.

        cout << " Lütfen müþteri  numaranýzý girin: ";
        cin >> id;
        cout << " Lütfen þifrenizi giriniz : ";
        cin >> password;
        cout << " Teþekkürler! Kredi Baþvuru Hesabýnýz oluþturuldu.!" << endl;
        cout << "\n";
    }

    void kKartiHesap() {  //Kredi kartý hesap oluþturma.

        cout << " Lütfen müþteri  numaranýzý girin: ";
        cin >> id;
        cout << " Lütfen þifrenizi giriniz : ";
        cin >> password;
        cout << " Teþekkürler! Kredi Kartý Baþvuru Hesabýnýz oluþturuldu.!" << endl;
        cout << "\n";
    }

    void sifreYenileme() {
        cout << " Yeni oluþturmak istediðiniz þifrenizi giriniz : ";
        cin >> password;
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");   //Program dilini Türkçe yapýyoruz.//

    Banka ATM;

    cout << " Merhaba! Zamar Bankasýnýn ATM Makinesine Hoþ Geldiniz...\n" << endl;

    while (1) {       //Menü ekraný sürekli gözükmesi için döngü koydum.
        ATM.menu();

        if (ATM.secim == 1) {
            if (ATM.girisYapma() == true) {
                while (1) {
                    ATM.islemYapma();
                    if (ATM.secim == 4) {
                        cout << " Yatýrýlan miktar: $";
                        cin >> ATM.yatirilanMiktar;
                        ATM.hesapBakiyesi = ATM.hesapBakiyesi + ATM.yatirilanMiktar;
                        cout << endl;
                    }
                    else if (ATM.secim == 5) {
                        cout << " Çekilen miktar: $";
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
                                        cout << " Elektrik faturasý yatýrýldý..\n" << endl;
                                    }
                                    else if (ATM.secim == 10) {
                                        cout << " Su faturasý yatýrýldý..\n" << endl;
                                    }
                                    else if (ATM.secim == 11) {
                                        cout << " Doðalgaz faturasý yatýrýldý..\n" << endl;
                                    }
                                    else if (ATM.secim == 12) {
                                        cout << " Telefon faturasý yatýrýldý..\n" << endl;
                                    }
                                    else if (ATM.secim == 13) {
                                        cout << " Tv/Kablo/Ýnternet faturasý yatýrýldý..\n" << endl;
                                    }
                                    else if (ATM.secim == 14) {
                                        while (1) {
                                            ATM.digerIslemler();
                                            if (ATM.secim == 30) {
                                                while (1) {
                                                    ATM.digerodemeler();
                                                    if (ATM.secim == 15) {
                                                        cout << " Cep telefonuna yüklenmek istenen miktar: $";
                                                        cin >> ATM.cepTl;
                                                        cout << " Cep telefonuna yükelenen miktar: $" << ATM.cepTl << endl;
                                                    }
                                                    else if (ATM.secim == 16) {
                                                        cout << " Abonman fiyatý 110TL dir." << endl;
                                                        cout << " yatýrýldý.." << endl;
                                                    }
                                                    else if (ATM.secim == 17) {
                                                        cout << " Vergi borcunuz bulunmamaktadýr.." << endl;
                                                    }
                                                    else if (ATM.secim == 18) {
                                                        cout << " Ayvansaray Üniversitesi -> 16.000TL" << endl;
                                                    }
                                                    else if (ATM.secim == 19) {
                                                        while (1) {
                                                            ATM.digerIslemler();
                                                            if (ATM.secim == 31) {
                                                                while (1) {
                                                                    ATM.basvuru();
                                                                    if (ATM.secim == 20) {
                                                                        cout << " Sigorta baþvurusu yapmak için hesap oluþturmalýsýnýz." << endl;
                                                                        ATM.sigortaBasvuruHesap();
                                                                    }
                                                                    else if (ATM.secim == 21) {
                                                                        cout << " Kredi baþvurusu yapmak için hesap oluþturmalýsýnýz." << endl;
                                                                        ATM.krediBasvuruHesap();
                                                                    }
                                                                    else if (ATM.secim == 22) {
                                                                        cout << " Kredi Kartý baþvurusu yapmak için hesap oluþturmalýsýnýz." << endl;
                                                                        ATM.kKartiHesap();
                                                                    }
                                                                    else if (ATM.secim == 23) {
                                                                        ATM.digerIslemler();
                                                                        if (ATM.secim == 32) {
                                                                            ATM.krediKartiodeme();
                                                                            if (ATM.secim == 24) {
                                                                                cout << " Kaðýt paralarýnýzý sað alt kýsýma koyunuz.." << endl;
                                                                                cout << " Kredi kartý borcunuz ödenmiþtir." << endl;
                                                                            }
                                                                            else if (ATM.secim == 25) {
                                                                                cout << " Hesabýnýzda para bulunmamaktadýr.." << endl;
                                                                                cout << " Lütfen yükledikten sonra tekrar deneyiniz.." << endl;
                                                                            }
                                                                            else if (ATM.secim == 26) {
                                                                                ATM.digerIslemler();
                                                                                if (ATM.secim == 33) {
                                                                                    ATM.sifreIslem();
                                                                                    if (ATM.secim == 27) {
                                                                                        ATM.sifreYenileme();
                                                                                        cout << " Yeni þifreniz oluþturulmuþtur.." << endl;
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
                cout << "\n * GÝRÝÞ BAÞARISIZ OLDU! *" << endl;
                cout << "          Önce hesap oluþturunuz!" << endl;
            }

            else {
                cout << " Müþteri numaranýz veya þifreniz yanlýþ." << endl;
            }
        }

        else if (ATM.secim == 2) {
            ATM.hesapOlusturma();
        }

        else if (ATM.secim == 3) {
            cout << " Çýkýþ yapýldý..";
            break;
        }
    }
    return 0;
}
