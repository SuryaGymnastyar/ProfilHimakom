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
void biroHima();

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

void profilKeilmuan(){
    cout << "**** Profil Keilmuan ****" << endl << endl;
    cout << "*** Pimpinan Bidang Keilmuan. ***" << endl;
    cout << "1. Ketua Bidang : Rakhmat Herlambang." << endl;
    cout << "2. Sekertaris Bidang : Dela sylviayani." << endl;
    cout << "3. Bendahara bidang : Theresia Tri Oktavia." << endl << endl;
    cout << "*** Apa Itu Keilmuan? ***"<< endl;
    cout << "Bidang Keilmuan merupakan bidang yang bekerja sama dengan jurusan ilmu komputer untuk memfasilitası pengembangan minat, bakat, serta potensi akademik" << endl;
    cout << "maupun non-akademik mahasiswa jurusan ilmu komputer" << endl;
}

void profilKwu(){
    cout << "*** Profil Kwu ***" << endl<<endl;
    cout << "*** Pimpinan ***" << endl;
    cout << "1. Ketua Biro : Ayu. " << endl;
    cout << "2. Sekertaris Biro : Safira. " << endl ;
    cout << "3. Bendahara Biro : Nazwa. " << endl << endl;
    cout << "*** Apa itu Biro Kewirausahaan? ***" << endl;
    cout << "Biro Kewirausahaan adalah unit atau departemen di HIMAKOM yang fokus pada pengembangan dan dukungan bagi aktivitas kewirausahaan bagi mahasiswa ilmu komputer." << endl;
}



int main(){



return 0;
}
