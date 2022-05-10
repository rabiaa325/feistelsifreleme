#include <stdio.h>
#include <string.h>

int swap(int x,int y){

    int result = (y << 4) | x;

	return result;


}

int sifrele(char karakter) {
    int test[5],i=1,j;
	//Anahtarlar:
	unsigned int k1=0b0000;
	unsigned int k2=0b0001;//veya 1 de yazilabilir
	unsigned int k3=0b0010;//veya 2 de yazilabilir
	unsigned int k4=0b0011;//veya 3 de yazilabilir
	unsigned int k5=0b0100;//veya 4 de yazilabilir
	unsigned int k6=0b0101;//veya 5 de yazilabilir
	unsigned int k7=0b0110;//veya 6 de yazilabilir
	unsigned int k8=0b0111;//veya 7 de yazilabilir
	unsigned int k9=0b1000;//veya 8 de yazilabilir
	unsigned int k10=0b1001;//veya 9 de yazilabilir
	unsigned int k11=0b1010;//veya 10 de yazilabilir
	unsigned int k12=0b1011;//veya 11 de yazilabilir
	unsigned int k13=0b1100;//veya 12 de yazilabilir
	unsigned int k14=0b1101;//veya 13 de yazilabilir
	unsigned int k15=0b1110;//veya 14 de yazilabilir
	unsigned int k16=0b1111;//veya 15 de yazilabilir
	test[0] = karakter;

	unsigned int l1[i],l0[i],r0[i],veya[i],r1[i];
	//round 1
	for(j=0;j<i;j++){
		r0[j]=test[j]%16;
		l0[j]=test[j]/16;
		veya[j]=r0[j]|k1;
		r1[j]=l0[j]^veya[j];
		l1[j]=r0[j];

	}
	//round2
	unsigned int l2[i],l3[i],r2[i];
	for(j=0;j<i;j++){
		veya[j]=r1[j]|k2;
		r2[j]=l1[j]^veya[j];
		l2[j]=r1[j];

	}
	//round3
	unsigned int r3[i];
	for(j=0;j<i;j++){
		veya[j]=r2[j]|k3;
		r3[j]=l2[j]^veya[j];
		l3[j]=r2[j];
	}
	//round4
	unsigned int r4[i],l4[i];
	for(j=0;j<i;j++){
		veya[j]=r3[j]|k4;
		r4[j]=l3[j]^veya[j];
		l4[j]=r3[j];
	}
	//round5
	unsigned int r5[i],l5[i];
	for(j=0;j<i;j++){
		veya[j]=r4[j]|k5;
		r5[j]=l4[j]^veya[j];
		l5[j]=r4[j];
	}
	//round6
	unsigned int r6[i],l6[i];
	for(j=0;j<i;j++){
		veya[j]=r5[j]|k6;
		r6[j]=l5[j]^veya[j];
		l6[j]=r5[j];
	}
	//round7
	unsigned int r7[i],l7[i];
	for(j=0;j<i;j++){
		veya[j]=r6[j]|k7;
		r7[j]=l6[j]^veya[j];
		l7[j]=r6[j];
	}
	//round8
	unsigned int r8[i],l8[i];
	for(j=0;j<i;j++){
		veya[j]=r7[j]|k8;
		r8[j]=l7[j]^veya[j];
		l8[j]=r7[j];
	}
	//round9
	unsigned int r9[i],l9[i];
	for(j=0;j<i;j++){
		veya[j]=r8[j]|k9;
		r9[j]=l8[j]^veya[j];
		l9[j]=r8[j];
	}
	//round10
	unsigned int r10[i],l10[i];
	for(j=0;j<i;j++){
		veya[j]=r9[j]|k10;
		r10[j]=l9[j]^veya[j];
		l10[j]=r9[j];
	}
	//round11
	unsigned int r11[i],l11[i];
	for(j=0;j<i;j++){
		veya[j]=r10[j]|k11;
		r11[j]=l10[j]^veya[j];
		l11[j]=r10[j];
	}
	//round12
	unsigned int r12[i],l12[i];
	for(j=0;j<i;j++){
		veya[j]=r11[j]|k12;
		r12[j]=l11[j]^veya[j];
		l12[j]=r11[j];
	}
	//round13
	unsigned int r13[i],l13[i];
	for(j=0;j<i;j++){
		veya[j]=r12[j]|k13;
		r13[j]=l12[j]^veya[j];
		l13[j]=r12[j];
	}
	//round14
	unsigned int r14[i],l14[i];
	for(j=0;j<i;j++){
		veya[j]=r13[j]|k14;
		r14[j]=l13[j]^veya[j];
		l14[j]=r13[j];
	}
	//round15
	int sonuc;
	unsigned int r15[i],l15[i];
	for(j=0;j<i;j++){
		veya[j]=r14[j]|k15;
		r15[j]=l14[j]^veya[j];
		l15[j]=r14[j];
	
	}
	
	//round15
	
	unsigned int r16[i],l16[i];
	for(j=0;j<i;j++){
		veya[j]=r15[j]|k16;
		r16[j]=l15[j]^veya[j];
		l16[j]=r15[j];
		sonuc=swap(l16[j],r16[j]);
	}
	return sonuc;
}

char coz(int karakter) {
    int test[10],i=0,j;
	unsigned int k1=0b0000;
	unsigned int k2=0b0001;//veya 1 de yazilabilir
	unsigned int k3=0b0010;//veya 2 de yazilabilir
	unsigned int k4=0b0011;//veya 3 de yazilabilir
	unsigned int k5=0b0100;//veya 4 de yazilabilir
	unsigned int k6=0b0101;//veya 5 de yazilabilir
	unsigned int k7=0b0110;//veya 6 de yazilabilir
	unsigned int k8=0b0111;//veya 7 de yazilabilir
	unsigned int k9=0b1000;//veya 8 de yazilabilir
	unsigned int k10=0b1001;//veya 9 de yazilabilir
	unsigned int k11=0b1010;//veya 10 de yazilabilir
	unsigned int k12=0b1011;//veya 11 de yazilabilir
	unsigned int k13=0b1100;//veya 12 de yazilabilir
	unsigned int k14=0b1101;//veya 13 de yazilabilir
	unsigned int k15=0b1110;//veya 14 de yazilabilir
	unsigned int k16=0b1111;//veya 15 de yazilabilir
	test[0] = karakter;
	unsigned int r16[i],l16[i],r15
	[i],l15[i],r14[i],l14[i],r13[i],l13[i],r12[i],l12[i],r11[i],l11[i],r10[i],l10[i],r9[i],l9[i],r8[i],l8[i],r7[i],l7[i],r6[i],l6[i],r5[i],l5[i],r4[i],l4[i],r3[i],l2[i],l3[i],r2[i],l1[i],l0[i],r0[i],veya[i],r1[i];
	//round 1
	for(j=0;j<1;j++){
		r16[j]=test[j]%16;//girdinin sai kismi
		l16[j]=test[j]/16;//girdinin sol kismi
		veya[j]=r16[j]|k16;
		r15[j]=veya[j]^l16[j];
		l15[j]=r16[j];

	}
	//round2
	for(j=0;j<1;j++){
		veya[j]=r15[j]|k15;
		r14[j]=veya[j]^l15[j];
		l14[j]=r15[j];
	}
	//round3
	for(j=0;j<1;j++){
		veya[j]=r14[j]|k14;
		r13[j]=veya[j]^l14[j];
		l13[j]=r14[j];
	}
	//round4
	for(j=0;j<1;j++){
		veya[j]=r13[j]|k13;
		r12[j]=veya[j]^l13[j];
		l12[j]=r13[j];
	}
	//round5
	for(j=0;j<1;j++){
		veya[j]=r12[j]|k12;
		r11[j]=veya[j]^l12[j];
		l11[j]=r12[j];
	}
	//round6
	for(j=0;j<1;j++){
		veya[j]=r11[j]|k11;
		r10[j]=veya[j]^l11[j];
		l10[j]=r11[j];
	}
	//round7
	for(j=0;j<1;j++){
		veya[j]=r10[j]|k10;
		r9[j]=veya[j]^l10[j];
		l9[j]=r10[j];
	}
	//round8
	for(j=0;j<1;j++){
		veya[j]=r9[j]|k9;
		r8[j]=veya[j]^l9[j];
		l8[j]=r9[j];
	}
	//round9
	for(j=0;j<1;j++){
		veya[j]=r8[j]|k8;
		r7[j]=veya[j]^l8[j];
		l7[j]=r8[j];
	}
	//round10
	for(j=0;j<1;j++){
		veya[j]=r7[j]|k7;
		r6[j]=veya[j]^l7[j];
		l6[j]=r7[j];
	}
	//round11
	for(j=0;j<1;j++){
		veya[j]=r6[j]|k6;
		r5[j]=veya[j]^l6[j];
		l5[j]=r6[j];
	}
	//round12 
	for(j=0;j<1;j++){
		veya[j]=r5[j]|k5;
		r4[j]=veya[j]^l5[j];
		l4[j]=r5[j];
	}
	//round13
	for(j=0;j<1;j++){
		veya[j]=r4[j]|k4;
		r3[j]=veya[j]^l4[j];
		l3[j]=r4[j];
	}
	//round14
	for(j=0;j<1;j++){
		veya[j]=r3[j]|k3;
		r2[j]=veya[j]^l3[j];
		l2[j]=r3[j];
	}
	//round15
	for(j=0;j<1;j++){
		veya[j]=r2[j]|k2;
		r1[j]=veya[j]^l2[j];
		l1[j]=r2[j];
	}
	//round16
	for(j=0;j<1;j++){
		veya[j]=r1[j]|k1;
		r0[j]=veya[j]^l1[j];
		l0[j]=r1[j];
	}
	
    return swap(l0[j-1],r0[j-1]);
}

int main() {
    char metin[1000], secim[5];
    int i = 0, sayi[1000];
    printf("Sifrelemek icin 's', cozmek icin 'c' giriniz: ");
    fgets(secim, 5, stdin);
    if (secim[0] == 's') {
        printf("Metini giriniz: ");
        fgets(metin, 1000, stdin);
        while (metin[i] != '\n' && metin[i]) {
            printf("%d ", sifrele(metin[i]));
            i++;
        }
        printf("\n");
    } else {
        printf("Sifreli sayilari sirayla giriniz. Sayilar bittiginde '0' girniz:\n");
        do {
            printf("[%d. sayi]: ", i+1);
            scanf(" %d", &sayi[i]);
            i++;
        } while(sayi[i-1]);
        //while (sayi != 0)
        i=0;
        while (sayi[i]) {
            printf("%c", coz(sayi[i]));
            i++;
        }
        printf("\n");
    }
    return 0;
}
