#include <iostream>
using namespace std;

int arr[20];   // Membuat array  dengan panjang data 20
int n;         // Membuat variable inputan n

void input()
{   // Procedure Input
    while (true)
    {
        cout << "Masukkan Jhumlah data pada array : ";   // Membuat inputan Jumlah element Array
        cin >> n;                                        // Memanggil variabel inputan n

        if (n <= 20)
        {  // Membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 elemen. \n";   // Menampilkan pesan jika lebih dari dua puluh
        }
    }
    cout << endl;                                       // Membuat jarak per baris program
    cout << "======================" << endl;           // Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl; 

    for (int i = o; i < n; i++)                         // Menggunakan perulangan for untuk menyimpan data pada array
    {



int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
