int hitungTotalPengeluaran(int uangHabis, int bulan){
    int totalPengeluaran;
    if (bulan == 0){
        return totalPengeluaran;
    } else {
        totalPengeluaran = hitungTotalPengeluaran(uangHabis, bulan - 1) + uangHabis;
    }
    return totalPengeluaran;
}