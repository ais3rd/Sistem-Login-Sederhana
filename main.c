#include <stdio.h>
#include <string.h>

char user[50];
char pass[50];

void loginPage() {
    printf("username: ");
    scanf("%s", user);
    printf("password: ");
    scanf("%s", pass);
}

int isitYes() {
    return strcmp(user, "praktikan") == 0 && strcmp(pass, "1234") == 0;
}

int main(){
    while (isitYes() == 0) {
        loginPage();
        if (isitYes() == 1) {
            printf("Login berhasil, selamat datang praktikan!\n");
        } else {
            printf("Login gagal, coba lagi\n");
    }
    }
return 0;
}
