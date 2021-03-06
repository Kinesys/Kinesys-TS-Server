//Kinesys FMS Attack 
/* FMS Attack : RC4 키 스케줄링 알고리즘의 약점을 이용한 WEP공격*/

#include <stdio.h>

/* RC4 스트링 암호 */
int RC4(int *IV, int *key) {
    int K[256];
    int S[256];
    int seed[16];
    int i, j, k, t;

    //시드 = IV + Key

    for(k=0; k<3; k++) 

        seed[k] = IV[k];

    for(k=0; k<13; k++) 

        seed[k + 3] = key[k];

// -= 키 스케줄링 알고리즘 (KSA) =-

// 배열 초기화

for(k=0; k<256; k++) {

    S[k] = k;
    K[k] = seed[k%16];

}

j = 0;
for(i=0; i<256; i++) {

    j = (j + S[i] + K[i]) %256;
    t = S[i]; S[i] = S[j] = t; //S[i]와 S[j] 바꿈.

}

// 첫 번째 키스트림 바이트를 얻어내기 위한 PRGA의 첫 단계

i = 0;
j = 0;

i = i + 1;
j = j + S[i];

t = S[i]; S[i] = S[j]; S[j] = t; //S[i]와 s[j] 바꿈.

k = (S[i] + S[j]) %256;

return S[k];

}

int main(int argc, char *argv[]) {

    int K[256];
    int S[256];

    int IV[3];
    int key[13] = {1, 2, 3, 4, 5, 66, 75, 123, 99, 100, 123, 43, 213};
    int seed[16];

    int N = 256;
    int i, j, k, t, x, A;
    int keystream, keybyte;

    int max_result, max_count;

    int results[256];

    

}
