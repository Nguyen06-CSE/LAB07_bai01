
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, chuoi s, int& n);
int ChayChuongTrinh();


void XuatMenu(){
    cout << "______________MENU_________________\n"
        <<"0. thoat khoi chuong trinh \n"
        <<"1. nhap chuoi \n"
        <<"2. xoa tat ca ky tu X cho truoc khoi chuoi S\n"
        <<"3. noi chuoi T vao sau chuoi S \n"
        <<"4. dao nguoc chuoi ky tu S cho truoc \n"
        <<"5. kiem tra mot chuoi S cho chuoc co phai doi xung\n"
        <<"6. so sanh hai chuoi S va T theo thu tu tu dien \n"
        <<"7. cat ky tu dau cua chuoi S roi ghep vao chuoi S \n"
        <<"8. doi chu HOA thuong xen ke \n";
}

int ChonMenu(int soMenu)
{
    int chon;
    do{
        cout << "nhap chon [0...." << soMenu << "]: ";
        cin >> chon;
        if(chon >= 0 && chon <= soMenu) break;
    } while(true);
    return chon;
}

void XuLyMenu(int chon, chuoi s, int& n)
{
    switch(chon){
        case 0:
            cout << "thoat khoi chuong trinh\n";
            break;
        case 1:
            NhapChuoi(s);
            break;
        case 2:
            XoaKyTu(s);
            break;
        case 3:
            chuoi t;
            cout << "nhap chuoi ban muon noi: ";
            cin >> t;
            NoiTVaoSauS(s, t);
            break;
        case 4:
            DaoChuoiChoTruoc(s);
            break;
        case 5:
            if (KiemTraDoiXung(s)) {
                cout << "Chuoi s la chuoi doi xung." << endl;
            } else {
                cout << "Chuoi s khong phai la chuoi doi xung." << endl;
            }
            break;
        case 6:
            chuoi k;
            cout << "Nhap chuoi t (de so sanh): ";
            cin >> k;
            SoSanhChuoi(s, k);
        break;  
        case 7:
            CatKyTuDau(s);
            break;
        case 8:
            DoiChuXenKe(s);
            break;
    }
    _getch();
}

int ChayChuongTrinh()
{
    int soMenu = 8, chon, n;
    chuoi a;
    do{
        system("cls");
        XuatMenu();
        chon = ChonMenu(soMenu);
        XuLyMenu(chon, a, n);
    }while(chon !=0);

}