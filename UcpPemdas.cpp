#include <iostream>
using namespace std;
/**
 * @brief 
 * 
 */
class MataKuliah
{
private: // isi dengan access modifier yang dibutuhkan
 float presensi;
 // tambahkan dengan variabel lain yang dibutuhkan dibawah ini
 float activity;
 float exercise;
 float tugasAkhir;
public:
    MataKuliah()
    {
        presensi = 0.0;
        // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
        
    }
    virtual void namaMataKuliah() { return; }
    // tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
    
    virtual void inputNilai() { return; }
    virtual void hitungNilaiAkhir() { return; }
    virtual void cekKelulusan() { return; } 

    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }
// tambahkan setter dan getter lain yang dibutuhkan dibawah ini
    void setActivity(float nilai)
    {
        this->activity = nilai;
    }
    float getActivity()
    {
        return activity;
    }
    void setExercise(float nilai)
    {
        this->exercise = nilai;
    }
    float getExercise()
    {
        return exercise;
    }
    void setTugasAkhir(float tugasAkhir)
    {
        this->tugasAkhir = nilai;
    }
    float getTugasAkhir()
    {
        return tugasAkhir;
    }
};

class Pemrograman : public MataKuliah
{
 // isi disini untuk mengisi kelas pemrograman
    public:
    Pemrograman() {
        cout << "Memilih Pemrograman" << endl;
        cout << "-------------------" << endl;
    }
    void input() {
        cout << "Masukkan Nilai Presensi = ";
        cin >> presensi;
        setPresensi(float nilai);

        cout << "Masukkan Nilai activity = ";
        cin >> activity;
        setActivity(int )
    }
    
};

class Jaringan : public MataKuliah
{
 // isi disini untuk mengisi kelas jaringan
 public:
 Jaringan() {}
};

int main()
{
 char pilih;
 MataKuliah *mataKuliah;
 Pemrograman pemrograman;
 Jaringan jaringan;
 // isi disini untuk menentukan mata kuliah yang dipilih

}