#include <stdio.h>

int hitung_lama_bekerja(int jam_masuk, int jam_pulang) {
    int lama_bekerja; 
    
    if (jam_pulang < jam_masuk) {
        lama_bekerja = (12 - jam_masuk) + jam_pulang;
    } else {
        lama_bekerja = jam_pulang - jam_masuk;
    }
    
    return lama_bekerja;
}

int main() {
    int jam_masuk, jam_pulang, lama_bekerja;

    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    
    printf("Masukkan jam pulang (1-12): ");
    scanf("%d", &jam_pulang);

    if ((jam_masuk < 1 || jam_masuk > 12) || (jam_pulang < 1 || jam_pulang > 12)) {
        printf("Jam harus berada dalam rentang 1-12.\n");
        return 1;
    }

    lama_bekerja = hitung_lama_bekerja(jam_masuk, jam_pulang);

    printf("Lama bekerja pegawai adalah %d jam.\n", lama_bekerja);

    return 0;
}

