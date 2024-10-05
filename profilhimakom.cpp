#include <iostream>
using namespace std;

void menu();
void sejarahHima();
void visiMisiHima();
void strukturHima();
void profilPresidium();
void profilBansus();
void bidangHima();
void profilKader();
void profilEkster();
void profilInter();
void profilKeilmuan();
void profilMedin();
void biroHima();
void profilKsr();
void profilKwu();
void exitMenu();

void menu() {
    cout << endl << " ** PROFIL HIMAKOM UNILA ** " << endl;
    cout << "1. Sejarah Singkat Himakom" << endl;
    cout << "2. Visi Misi Himakom" << endl;
    cout << "3. Struktur Organisasi Himakom" << endl;
    cout << "4. Exit" << endl; 
}

void sejarahHima() {
    cout << endl << " ** Sejarah Singkat Himakom ** " << endl;
    cout << "Himakom terbentuk pada tahun 2012. Awalnya di Ilmu Komputer sendiri memiliki nama KOMIK (Komunitas Ilmu Komputer)" << endl;
    cout << "dan saat itu masih di bawah naungan Himatika (Himpunan Mahasiswa Matematika). Awalnya di himakom terdapat" << endl;
    cout << "4 bidang dan 2 biro. Sekarang kepengurusan himakom menjadi presidium, 1 badan khusus, 5 bidang, dan 2 biro." << endl;
}

void visiMisiHima() {
    cout << endl << " ** Visi Misi Himakom ** " << endl;
    cout << "** Visi Himakom **" << endl;
    cout << "Menciptakan sebuah himpunan yang inklusif, inovatif, dan kompetitif" << endl;
    cout << "dengan memperjuangkan perubahan positif dalam kepemimpinan, serta memberikan kesempatan" << endl;
    cout << "bagi anggota untuk berkembang secara holistik dan membangun identitas yang kuat." << endl;
    cout << "** Misi Himakom **" << endl;
    cout << "1. Mendorong inovasi dalam kepemimpinan untuk menciptakan perubahan yang signifikan" << endl;
    cout << "dan memberikan manfaat maksimal bagi anggota himpunan." << endl;
    cout << "2. Menjunjung tinggi nilai-nilai transparansi dan akuntabilitas dalam setiap keputusan dan tindakan." << endl;
    cout << "3. Menjadi himpunan yang aktif dan positif dalam memecahkan masalah dan mendukung kegiatan akademik" << endl;
    cout << "dan non-akademik di lingkungan jurusan maupun di luar jurusan." << endl;
}

void strukturHima() {
    int pilihanStruktur;

    do {
        cout << endl << " ** STRUKTUR ORGANISASI HIMAKOM ** " << endl;
        cout << "1. Presidium" << endl;
        cout << "2. Badan Khusus" << endl;
        cout << "3. Bidang HIMAKOM" << endl;
        cout << "4. Biro Hima" << endl;
        cout << "5. Kembali ke Menu Utama" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanStruktur;

        switch (pilihanStruktur) {
            case 1:
                profilPresidium();
                break;
            case 2:
                profilBansus();
                break;
            case 3:
                bidangHima();
                break;
            case 4:
                biroHima();
                break;
            case 5:
                cout << "Kembali ke Menu Utama." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (pilihanStruktur != 5); 
}

void profilPresidium() {
    cout << "*** PROFIL PRESIDIUM HIMAKOM ***" << endl;
    cout << endl << " Ketua Umum Himakom : Robby Hidayat " << endl;
    cout << " Wakil Ketua Umum Himakom : M. Raihan Al Hayya " << endl;
    cout << " Sekertaris Umum Himakom : Kezia Natalia Wongkar " << endl;
    cout << " Wakil Sekertaris Umum Himakom : Nugraha Aji Saputra " << endl;
    cout << " Bendahara Umum Himakom : Anindya Salsabila " << endl;
    cout << " Wakil Bendahara Umum Himakom : Risfi Anggraeni " << endl;
    cout << endl << "Presidium memiliki tugas yaitu pengkoordinasian kegiatan organisasi, memiliki wewenang dalam pembuatan keputusan bersama" << endl;
    cout << "serta mewakili himpunan dalam berbagai forum. Presidium juga memiliki peran strategis menjaga stabilitas dan keberlanjutan organisasi." << endl;  
    cout << "Presidium juga mempunyai fungsi yaitu mengembangkan program kerja, memfasilitasi komunikasi antar anggota, dan memimpin rapat organisasi." << endl;
}

void profilBansus() {
    int pilihanBansus;

    do {
        cout << "*** PROFIL BADAN KHUSUS (BANSUS) ***" << endl;
    cout << "Bansus, Badan Khusus yang berperan sebagai garda terdepan dalam:" << endl;
    cout << "- Menaungi asisten dosen," << endl;
    cout << "- Mengelola kebutuhan laboratorium," << endl;
    cout << "- Menjaga komponen, dan" << endl;
    cout << "- Berkoordinasi dengan dosen terkait." << endl;
    cout << endl;
    cout << "Fokus utama Bansus adalah mempersiapkan asisten dosen yang cerdas" << endl;
    cout << "dan komunikatif untuk mencetak mahasiswa ilmu komputer yang berpengaruh." << endl;
    cout << endl;
    cout << "Dengan motto \"Empowering Learning, Cultivating Excellence\"," << endl;
    cout << "BANSUS menjadi motor penggerak dalam menjaga dan mengoptimalkan laboratorium komputer." << endl;
        cout << "1. Kepengurusan dan Anggota" << endl;
        cout << "2. Program Kerja" << endl;
        cout << "3. Kembali ke Menu Struktur" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanBansus;

        switch (pilihanBansus) {
            case 1:
                cout << "*** KEPENGURUSAN BANSUS ***" << endl;
                cout << "Kepala Badan         : Ridho Fernando" << endl;
                cout << "Sekretaris Badan     : Anisa Citra Pratiwi" << endl;
                cout << "Bendahara Badan      : Rhalasya Eleina Putri" << endl;
                cout << "Anggota Badan Khusus :" << endl;
                cout << "1. Akmal Adnan Djayasinga" << endl;
                cout << "2. Luthfi Aditya" << endl;
                cout << "3. Muhammad Zhafir Al Kamil" << endl;
                cout << "4. Imran Sukron Hamid" << endl;
                cout << "5. Zidan Ahmad At-thoriq" << endl;
                cout << "6. Yusuf Herlian Ananta Ril" << endl;
                cout << "7. M. Riski P." << endl;
                cout << "8. Maura Hellena" << endl;
                cout << "9. Citra Fardiani" << endl;
                cout << "10. Elena Oktaviani" << endl;
                cout << "11. Dea Delvinata Riyan" << endl;
                cout << "12. Cahya Nerissa" << endl;
                cout << "13. Adrianne Julian Claresta" << endl;
                cout << "14. Bram Ahimsa Lafayet Simbolon" << endl;
                cout << endl;
                break;
            case 2:
                cout << "\n=== Program Kerja ===\n";
                cout << "1. FOSI ASISTEN DOSEN\n";
                cout << "2. PEER GROUP\n";
                cout << "3. PELATIHAN ASISTEN DOSEN\n";
                cout << "4. PEREKRUTAN ASISTEN DOSEN\n";
                break;
            case 3:
                cout << "Kembali ke Menu Struktur." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (pilihanBansus != 3);
}

void bidangHima() {
    int pilihanBidang;

    do {
        cout << endl << " ***** BIDANG HIMAKOM ***** " << endl;
        cout << "1. Bidang Kaderisasi" << endl;
        cout << "2. Bidang Eksternal" << endl;
        cout << "3. Bidang Internal" << endl;
        cout << "4. Bidang Medinfo" << endl;
        cout << "5. Bidang Keilmuan" << endl;
        cout << "6. Kembali ke Menu Stuktur" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanBidang;

        switch (pilihanBidang) {
            case 1:
                profilKader();
                break;
            case 2:
                profilEkster();
                break;
            case 3:
                profilInter();
                break;
            case 4:
                profilMedinfo(); 
                break;
            case 5 : 
                 profilKeilmuan();
                 break;
            case 6 :
                cout << "Kembali ke Menu Utama." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (pilihanBidang != 6);
}


void profilKader() {
    int pilihanKader;

    do {
        cout << endl << " ===== PROFIL BIDANG KADERISASI ===== " << endl;
        cout << "Bidang ini merupakan bidang yang bergerak untuk mempersiapkan generasi penerus HIMAKOM." << endl;
        cout << "Fokus bidang kaderisasi adalah mengarahkan dan membimbing potensi-potensi individu mahasiswa baru agar berkembang secara optimal." << endl;
        cout << "Kaderisasi bukan sekadar proses pelatihan, tetapi juga perjalanan yang membentuk karakter" << endl;
        cout << "dan mempersiapkan individu untuk menghadapi tantangan sebagai pemimpin yang berpengaruh" << endl;
        cout << "dalam lingkungan himpunan dan jurusan." << endl;
        cout << "1. Kepengurusan dan Anggota" << endl;
        cout << "2. Program Kerja" << endl;
        cout << "3. Kembali ke Menu Bidang Hima" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanKader;

        switch (pilihanKader) {
            case 1:
                cout << "\n=== Kepengurusan dan Anggota ===\n";
                cout << "Kepala Bidang         : Muhammad Nadhif Nanditama" << endl;
                cout << "Sekretaris Bidang     : Putri Wulandari" << endl;
                cout << "Bendahara Bidang      : Fitria Az Zahra" << endl;
                cout << "Anggota Bidang Kaderisasi :" << endl;
                cout << "1. Rizki Mahesa" << endl;
                cout << "2. Muhammad Ferdiansyah" << endl;
                cout << "3. Rimba Jati Dwi Djatmiko" << endl;
                cout << "4. Farid Sidhiq Saputra" << endl;
                cout << "5. Refky Pirnando" << endl;
                cout << "6. Sigit Yudhanto Ramadan" << endl;
                cout << "7. Lekok Indah Lia" << endl;
                cout << "8. Febrina Aulia Azahra" << endl;
                cout << "9. Nadya Arsa" << endl;
                cout << "10. Renaldy Fahmi Abdillah" << endl;
                cout << "11. Putra" << endl;
                cout << "12. Clara Monica" << endl;
                cout << "13. Aathifah Dihyan Calysta" << endl;
                cout << "14. Mira Sepira" << endl;
                cout << endl;
                break;
            case 2:
                cout << "\n=== Program Kerja ===\n";
                cout << "1. LKMMIK-TD\n";
                cout << "2. LKMMIK-PD\n";
                cout << "3. PRINTER\n";
                cout << "4. ADAPTER\n";
                break;
            case 3:
                cout << "Kembali ke Menu Bidang Hima." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (pilihanKader != 3);
}

void profilEkster() {
    int pilihanEkster;

    do {
        cout << endl << " ===== PROFIL BIDANG EKSTERNAL ===== " << endl;
          cout << "Bidang Eksternal adalah bidang yang bertanggung jawab atas hubungan dengan komunitas atau himpunan lainnya di luar Himakom." << endl;
        cout << "Di bidang ini, kita lebih banyak membangun relasi atau hubungan kerja sama dengan pihak luar yang tentunya menguntungkan." << endl;
        cout << "Keuntungannya adalah kita dapat mengasah soft skill, antara lain:" << endl;
        cout << "- Public Speaking" << endl;
        cout << "- Berinteraksi dengan orang" << endl;
        cout << "- Menambah pengetahuan" << endl;
        cout << "1. Kepengurusan dan Anggota" << endl;
        cout << "2. Program Kerja" << endl;
        cout << "3. Kembali ke Menu Bidang Hima" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanEkster;

        switch (pilihanEkster) {
            case 1:
                cout << "\n=== Kepengurusan dan Anggota ===\n";
                cout << "Kepala Bidang : David Mel Gibson Sianturi" << endl;
                cout << "Sekretaris Bidang : Gustika Dwi Mardini" << endl;
                cout << "Bendahara Bidang : Devina Citra Felisha" << endl;
                cout << "Anggota Bidang Eksternal :" << endl;
                cout << "1. Philip Ebenhaezer Karundeng" << endl;
                cout << "2. Muhammad Fakhri Wilova" << endl;
                cout << "3. Zelvin Vewi Saputra" << endl;
                cout << "4. Ibnu Muhtar" << endl;
                cout << "5. Wendika Ismail" << endl;
                cout << "6. Swasita Tri Widhya Anggita Cahayani" << endl;
                cout << "7. Lifia Anasywa" << endl;
                cout << "8. Azmii Haniifah" << endl;
                cout << "9. Alfi Rahma Amalia" << endl;
                cout << "10. Malsya Cantika Putri" << endl;
                cout << "11. Syauqi Rahmat" << endl;
                cout << "12. Hermawan Yogi Wibisono" << endl;
                cout << "13. Chelsea Yetri" << endl;
                cout << "14. Lutfi Harya Ferdian" << endl;
                cout << "15. Nafisya Yagtias" << endl;
                cout << "16. Faras Raditia Maulana" << endl;
                cout << "17. Shabil Ramadhan" << endl;
                cout << endl;
                break;
            case 2:
                cout << "\n=== Program Kerja ===\n";
                cout << "1. INSTITUTION CAMPUS EXPEDITION\n";
                cout << "2. COLLABORATION SOCIAL WORKS\n";
                cout << "3. COMPUTER SCIENCE SHOWDOWN\n";
                break;
            case 3:
                cout << "Kembali ke Menu Bidang Hima." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (pilihanEkster != 3);
}

void profilInter() {
    int pilihanInter;

    do {
        cout << endl << " ===== PROFIL BIDANG INTERNAL ===== " << endl;
        cout << "Bidang Internal adalah bidang yang bertugas untuk membina hubungan di dalam lingkungan ilmu komputer." << endl;
      cout << "Program kerja bidang internal identik dengan event atau perayaan yang pastinya asyik dan seru." << endl;
      cout << "Salah satu kegiatan internal yaitu kompetisi yang menjadi ajang untuk meraih prestasi serta meningkatkan solidaritas dan kebersamaan antar anggota jurusan ilmu komputer." << endl;
        cout << "1. Kepengurusan dan Anggota" << endl;
        cout << "2. Program Kerja" << endl;
        cout << "3. Kembali ke Menu Bidang Hima" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanInter;

        switch (pilihanInter) {
            case 1:
                 cout << "Kepala Bidang : Bimo Laksono" << endl;
                  cout << "Sekretaris Bidang : Ulfa Anida" << endl;
                  cout << "Bendahara Bidang : Lira Septiyani" << endl;
                  cout << "Anggota Bidang Internal :" << endl;
                  cout << "1. Adilla Aulia Desriyanti" << endl;
                  cout << "2. Awalinda Pangestuti" << endl;
                  cout << "3. Imam Ahdy Sabilla" << endl;
                  cout << "4. Firman Bintang Partogi Situmorang" << endl;
                  cout << "5. Jhon Valentino Nababan" << endl;
                  cout << "6. Devrinatasyah" << endl;
                  cout << "7. Amala Ratri Nugraheni" << endl;
                  cout << "8. Achmad Ghalib Hafizh" << endl;
                  cout << "9. Zaky Taufiqurrahman" << endl;
                  cout << "10. Sofia' Azahra" << endl;
                  cout << "11. Husnul Khotami" << endl;
                  cout << "12. Sulthon Abdul Hakim" << endl;
                  cout << "13. Muhammad Hafizh Abyan" << endl;
                  cout << "14. M. Zidane Dako" << endl;
                  cout << "15. M. Fajri Ramadhani" << endl;
                  cout << "16. Monica Febri Dwi Cahyani" << endl;
                  cout << "17. Ananta Dhua Heryanty" << endl;
                  cout << endl;
                break;
            case 2:
                cout << "\n=== Program Kerja ===\n";
                cout << "1. FORUM WISUDA\n";
                cout << "2. HUT HIMAKOM\n";
                cout << "3. KOKOM\n";
                cout << "4. FUN GATHERING\n";
                break;
            case 3:
                cout << "Kembali ke Menu Bidang Hima." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (pilihanInter != 3);

}



void profilMedinfo(){
    int pilihanMedin;
    
 do{
     
     cout << "*** Profil Medinfo ***" << endl << endl;
     cout << "Bidang Media Informasi adalah salah satu bidang di HIMAKOM yang mengurus tentang ke mediaan." << endl << endl;
     cout << "1. Pimpinan."<< endl;
     cout << "2. Program Kerja." << endl;
     cout << "3. Kembali Ke Menu Bidang Hima." << endl;
     cout << "Masukkan Pilihan Anda : " << endl;
     cin >> pilihanMedin;
     
     switch (pilihanMedin){
         case 1 :
              cout << "*** Pimpinan ***" << endl << endl;
              cout << "1. Ketua Bidang : Mukti Prabowo. " << endl;
              cout << "2. Sekertaris Bidang : Enggal Bima sakti. " << endl;
              cout << "3. Bendahara Bidang : Rica Lizania." << endl;
            break;
        case 2 :
              cout << "*** Program Kerja ***" << endl << endl;
              cout << "1. Matriks" << endl;
              cout << "   a. publikasi informasi" << endl;
              cout << "   b. Youtube" << endl;
              cout << "   c. Dokumentasi Acara" << endl;
              cout << "   d. Pengembangan Website" << endl << endl;
              cout << "2. Non Matriks" << endl;
              cout << "   a. Pelatihan Desain" << endl;
              cout << "   b. Pelatihan Editing Video" << endl;
            break;
        case 3 :
              cout << "Kembali Ke Menu Bidang Hima." << endl;
            break;
        default :
            cout << "Pilihan tidak valid Silakan coba lagi." << endl;
        
       }     
    } while (pilihanMedin ! = 3);
     
     
}



void profilKeilmuan(){
    int pilihanKeilmuan;
    
do {
    cout << "**** Profil Keilmuan ****" << endl << endl;
    cout << "Bidang Keilmuan merupakan bidang yang bekerja sama dengan jurusan ilmu komputer untuk memfasilitası pengembangan\nminat, bakat, serta potensi akademik maupun non-akademik mahasiswa jurusan ilmu komputer" << endl << endl;
    cout << "1. Kepengurusan" << endl;
    cout << "2. Program Kerja" << endl;
    cout << "3. Kembali Ke Menu Bidang Hima" << endl;
    cout << "Masukan Pilihan Anda: ";
    cin >> pilihanKeilmuan;
    
    switch (pilihanKeilmuan){
        case 1 :
             cout << "*** Pimpinan Bidang Keilmuan. ***" << endl << endl;
             cout << "1. Ketua Bidang : Rakhmat Herlambang." << endl;
             cout << "2. Sekertaris Bidang : Dela sylviayani." << endl;
             cout << "3. Bendahara bidang : Theresia Tri Oktavia." << endl << endl;
            break;
        case 2 :
             cout << "*** Program Kerja Keilmuan ***" << endl << endl;
             cout << "1. Pengarsipan Materi dan Media Informasi." << endl;
             cout << "2. Hincar TIK." << endl;
             cout << "3. Project Showcase." << endl;
             cout << "4. Sosialisasi Kampus Merdeka." << endl;
            break;
        case 3 :
             cout << "Kembali ke Menu Bidang Hima." << endl;
            break;
        default :
             cout << "Pilihan tidak valid! Silahkan Coba Lagi." << endl;   
    }
} while (pilihanKeilmuan != 3);
}

void biroHima() {
    int pilihanBiro;

    do {
        cout << endl << " ***** BIRO HIMAKOM ***** " << endl;
        cout << "1. Biro Kesekretariatan" << endl;
        cout << "2. Biro Kewirausahaan" << endl;
        cout << "3. Kembali ke Menu Stuktur" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanBiro;

        switch (pilihanBiro) {
            case 1:
                profilKesekretariatan();
                break;
            case 2:
                profilKwu();
                break;
            case 3:
                cout << "Kembali ke Menu Struktur." << endl;
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
        }
    } while (pilihanBiro ! = 3);
}



void profilKesekretariatan(){
    int pilihanKsr;
    
 do{
     
     cout << "*** Profil Kesekretariatan ***" << endl << endl;
     cout << "Biro Kesekretariatan adalah biro yang bertanggung jawab terhadap kegiatan\nadministrasi, pengelolaan inventaris, pengadaan,dan pemeliharaan sarana-prasarana\ndengan optimal untuk kelancaraan progja HIMAKOM." << endl << endl;
     cout << "1. Kepengurusan."<< endl;
     cout << "2. Program Kerja." << endl;
     cout << "3. Kembali Ke Menu Biro Hima." << endl;
     cout << "Masukkan Pilihan Anda : " << endl;
     cin >> pilihanKsr;
     
     switch (pilihanKsr){
         case 1 :
              cout << "*** Kepengurusan ***" << endl << endl;
              cout << "1. Kepala Biro : " << endl;
              cout << "2. Sekertaris Biro : " << endl;
              cout << "3. Bendahara Biro : " << endl;
            break;
        case 2 :
              cout << "*** Program Kerja ***" << endl << endl;
              cout << "1. Pelatihan SPJ & LPJ" << endl;
              cout << "2. Mading Himakom" << endl;
              cout << "3. inventaris Himakom" << endl;
              cout << "4. Arsip Himakom" << endl
              cout << "5. Administrasi Sekret Himakom" << endl;
            break;
        case 3 :
              cout << "Kembali Ke Menu Biro Hima." << endl;
            break;
        default :
            cout << "Pilihan tidak valid Silakan coba lagi." << endl;
        
     }     
 } while (pilihanKsr ! = 3);
     
     
}



void profilKwu(){
    int pilihanKwu;
    
 do {
    cout << "*** Profil Kewirausahaan ***" << endl<<endl;
    cout << "Biro Kewirausahaan adalah unit atau departemen di HIMAKOM yang fokus pada pengembangan\ndan dukungan bagi aktivitas kewirausahaan bagi mahasiswa ilmu komputer." << endl << endl;
    cout << "1. Kepengurusan." << endl;
    cout << "2. Program Kerja." << endl;
    cout << "3. Kembali Ke Menu Biro Hima." << endl;
    cin >> pilihanKwu;
    
    switch (pilihanKwu){
        case 1 :
             cout << "*** Pimpinan ***" << endl;
             cout << "1. Ketua Biro : Ayu. " << endl;
             cout << "2. Sekertaris Biro : Safira. " << endl ;
             cout << "3. Bendahara Biro : Nazwa. " << endl << endl;
            break;
        case 2 :
             cout << "*** Program Kerja ***" << endl;
             cout << "1. Hipro." << endl;
             cout << "2. Himakom Koperasi." << endl;
             cout << "3. Program Bisnis kewirausahaan." << endl;
             cout << "4. Pelatihan kewirausahaan." << endl;
            break;
        case 3 :
             cout << "Kembali ke Menu Biro Hima." << endl;
            break;
        default :
            cout << "Pilihan Tidak Valid Silakan Coba Lagi." << endl;  
    }
} while (pilihanKwu ! = 3);
}

int main(){
menu();
return 0;
}
