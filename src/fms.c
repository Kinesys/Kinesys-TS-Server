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

for

}
