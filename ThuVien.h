#define MAX 1000

typedef char chuoi[MAX];

void NhapChuoi(chuoi s);
void XoaKyTu(chuoi s);
void NoiTVaoSauS(chuoi s, chuoi t);
void DaoChuoiChoTruoc(chuoi s);
bool KiemTraDoiXung(chuoi s);
int SoSanhChuoi(chuoi s, chuoi t);
void CatKyTuDau(chuoi s);
void DoiChuXenKe(chuoi s);


void NhapChuoi(chuoi s){
    cin >> s;
}

void XoaKyTu(chuoi s)
{
    char x;
    cout << "nhap ky tu ban muon xoa trong chuoi S: ";
    cin >> x;
    chuoi tmp;
    int i = 0, dem = 0;
    while(s[i] != '\0'){
        if(s[i] != x){
            tmp[dem] = s[i];
            ++dem;
        }
        ++i;
    }
    tmp[dem] = '\0';
    if(i > dem){
        cout << "chuoi sau khi xoa ky tu " << x << " la: " << tmp << endl;
        
        }
    else cout << "ky tu " << x << " ko co trong chuoi "; 
}

void NoiTVaoSauS(chuoi s, chuoi t)
{
    chuoi noi;
    int i = 0, j = 0;
    while(s[i] != '\0'){
        noi[i] = s[i];
        ++i;
    }
    int k = i;
    while(t[j] != '\0'){
        noi[k] = t[j];
        ++j;
        ++k;
    }
    noi[k] = '\0';
    cout << "chuoi sau khi duoc noi la: " << noi << endl;
}

void DaoChuoiChoTruoc(chuoi s) {
    chuoi tmp;
    int n = 0;   
    while (s[n] != '\0') {
        ++n;
    }

    for (int i = 0; i < n; ++i) {
        tmp[i] = s[n - i - 1];
    }
    tmp[n] = '\0';
    cout << "Chuoi dao nguoc la: " << tmp << endl;
}

bool KiemTraDoiXung(chuoi s) {
    int n = 0;  
    while (s[n] != '\0') {
        ++n;
    }

    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int SoSanhChuoi(chuoi s, chuoi t) {
    int i = 0;
    while (s[i] != '\0' && t[i] != '\0') {
        if (s[i] != t[i]) {
            if (s[i] < t[i])
                return -1;  
            else
                return 1;    
        }
        ++i;
    }

    if (s[i] == '\0' && t[i] == '\0') {
        return 0;   
    } else if (s[i] == '\0') {
        return -1;   
    } else {
        return 1;    
    }
}

void CatKyTuDau(chuoi s) {
    int n = 0;
    while (s[n] != '\0') {
        ++n;
    }

    if (n > 1) {
        char firstChar = s[0];
        for (int i = 0; i < n - 1; ++i) {
            s[i] = s[i + 1];
        }
        s[n - 1] = firstChar;
        s[n] = '\0';  
    }
    cout << "Chuoi sau khi cat ky tu dau va dua vao cuoi: " << s << endl;
}

void DoiChuXenKe(chuoi s) {
    int i = 0;
    while (s[i] != '\0') {
        if (i % 2 == 0) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
        ++i;
    }
    cout << "Chuoi sau khi doi chu HOA-thuong xen ke: " << s << endl;
}