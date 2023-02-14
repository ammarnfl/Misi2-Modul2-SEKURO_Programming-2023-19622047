#include <iostream>
#include <fstream>

using namespace std;

int opsi(string nama) // poin 3
{
    int pilih;
    
    cout << "Halo " << nama << "!" << endl;
    cout << "1. Menu" << endl;
    cout << "2. Pesan" << endl;
    cout << "3. Keluar" << endl;
    cout << "Silahkan pilih opsi: ";
    cin >> pilih;

    return pilih;
}

int main()
{
    string status, nama;
    int pilihan, id, jumlah, idx, hargatotal;
    string menu[10] = {"Ayam Geprek", "Ayam Goreng", "Ayam Penyet", "Nasi Goreng", "Soto Betawi", "Mie Aceh", "Es Teh", "Teh Tarik", "Jus Jeruk", "Jus Alpukat"};
    int harga[10] = {15000, 20000, 25000, 15000, 20000, 25000, 5000, 10000, 10000, 10000};

    string namalist[10000];
    string menulist[10000];
    int jumlahlist[10000];
    int totallist[10000];

    cout << "Apakah warung buka/tutup? "; // poin 1
    cin >> status;

    int parameter = 0;

    while (status != "tutup")
    {
        cout << "Selamat Datang di Warung Kang Roger!" << endl; // poin 2
        cout << "Masukkan nama anda: ";
        cin >> nama;

        pilihan = opsi(nama);

        while (pilihan != 3)
        {
            int totalharga = 0;
            if (pilihan == 1) // poin 4
            {
                cout << "\nMakanan :\n";
                for (int i = 0; i < 6; i++)
                {
                    cout << "ID: " << i + 1 << ", " << menu[i] << ", Rp" << harga[i] << endl;
                }                
                cout << "\nMinuman :\n";
                for (int i = 6; i < 10; i++)
                {
                    cout << "ID: " << i + 1 << ", " << menu[i] << ", Rp" << harga[i] << endl;
                }
                cout << endl;
            }
            else if (pilihan == 2) // poin 5
            {
                cout << "Masukkan ID menu: ";
                cin >> id;
                cout << "Masukkan jumlah barang: ";
                cin >> jumlah;  
                cout << endl;

                totalharga += jumlah * harga[id-1];
                
                namalist[parameter] = nama;
                menulist[parameter] = menu[id-1];
                jumlahlist[parameter] = jumlah;
                totallist[parameter] = totalharga;
                parameter += 1;
            }

            pilihan = opsi(nama);
        }

    cout << "Apakah warung buka/tutup? "; // poin 6
    cin >> status;
                        
    }

    cout << "Daftar Riwayat Penjualan" << endl; // poin 7
    if (parameter == 0)
    {
        cout << "Tidak Ada Penjualan";
    }
    else{
        for (int i = 0; i < parameter; i++) 
        {
            cout << "Nama pelanggan : " << namalist[i] << endl;
            cout << "Nama menu : " << menulist[i] << endl;
            cout << "Jumlah barang : " << jumlahlist[i] << endl;
            cout << "Total harga : Rp" << totallist[i] << endl;
            cout << endl;
        }
    }

    ofstream file("transaksi.txt");
    // Bonus poin, tulis data transaksi ke file teks
    file << "Daftar Riwayat Penjualan Hari Ini" << endl;
    for (int i = 0; i < parameter; i++)
    {
        file << "Nama pelanggan : " << namalist[i] << endl;
        file << "Nama menu : " << menulist[i] << endl;
        file << "Jumlah barang : " << jumlahlist[i] << endl;
        file << "Total harga : Rp" << totallist[i] << endl;
        file << endl;
    } #include <iostream>
#include <fstream>

using namespace std;

int opsi(string nama) // poin 3
{
    int pilih;
    
    cout << "Halo " << nama << "!" << endl;
    cout << "1. Menu" << endl;
    cout << "2. Pesan" << endl;
    cout << "3. Keluar" << endl;
    cout << "Silahkan pilih opsi: ";
    cin >> pilih;

    return pilih;
}

int main()
{
    string status, nama;
    int pilihan, id, jumlah, idx, hargatotal;
    string menu[10] = {"Ayam Geprek", "Ayam Goreng", "Ayam Penyet", "Nasi Goreng", "Soto Betawi", "Mie Aceh", "Es Teh", "Teh Tarik", "Jus Jeruk", "Jus Alpukat"};
    int harga[10] = {15000, 20000, 25000, 15000, 20000, 25000, 5000, 10000, 10000, 10000};

    string namalist[10000];
    string menulist[10000];
    int jumlahlist[10000];
    int totallist[10000];

    cout << "Apakah warung buka/tutup? "; // poin 1
    cin >> status;

    int parameter = 0;

    while (status != "tutup")
    {
        cout << "Selamat Datang di Warung Kang Roger!" << endl; // poin 2
        cout << "Masukkan nama anda: ";
        cin >> nama;

        pilihan = opsi(nama);

        while (pilihan != 3)
        {
            int totalharga = 0;
            if (pilihan == 1) // poin 4
            {
                cout << "\nMakanan :\n";
                for (int i = 0; i < 6; i++)
                {
                    cout << "ID: " << i + 1 << ", " << menu[i] << ", Rp" << harga[i] << endl;
                }                
                cout << "\nMinuman :\n";
                for (int i = 6; i < 10; i++)
                {
                    cout << "ID: " << i + 1 << ", " << menu[i] << ", Rp" << harga[i] << endl;
                }
                cout << endl;
            }
            else if (pilihan == 2) // poin 5
            {
                cout << "Masukkan ID menu: ";
                cin >> id;
                cout << "Masukkan jumlah barang: ";
                cin >> jumlah;  
                cout << endl;

                totalharga += jumlah * harga[id-1];
                
                namalist[parameter] = nama;
                menulist[parameter] = menu[id-1];
                jumlahlist[parameter] = jumlah;
                totallist[parameter] = totalharga;
                parameter += 1;
            }

            pilihan = opsi(nama);
        }

    cout << "Apakah warung buka/tutup? "; // poin 6
    cin >> status;
                        
    }

    cout << "Daftar Riwayat Penjualan" << endl; // poin 7
    if (parameter == 0)
    {
        cout << "Tidak Ada Penjualan";
    }
    else{
        for (int i = 0; i < parameter; i++) 
        {
            cout << "Nama pelanggan : " << namalist[i] << endl;
            cout << "Nama menu : " << menulist[i] << endl;
            cout << "Jumlah barang : " << jumlahlist[i] << endl;
            cout << "Total harga : Rp" << totallist[i] << endl;
            cout << endl;
        }
    }

    ofstream file("transaksi.txt");
    // Bonus poin, menyalin data transaksi ke file txt
    file << "Daftar Riwayat Penjualan Hari Ini" << endl;
    for (int i = 0; i < parameter; i++)
    {
        file << "Nama pelanggan : " << namalist[i] << endl;
        file << "Nama menu : " << menulist[i] << endl;
        file << "Jumlah barang : " << jumlahlist[i] << endl;
        file << "Total harga : Rp" << totallist[i] << endl;
        file << endl;
    } 
}
}