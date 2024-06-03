#include <stdio.h>

int main(){
	int v[5];
    AzzeraArray(v);
	CaricaOrdinato(v);
	StampaArray(v);
}

AzzeraArray(int v[]){
    for(int i=0; i<N; i++){
		printf("%d", v[i]);
	}
}

StampaArray(int v[]){
	for(int i=0; i<N; i++){
		printf("%d", v[i]);
	}
}

CaricaOrdinato(int v[]){

    int i, num, j, NumeriInseriti=0;
    scnaf("%d", &num)
    v[0] = num;

    for(i=1; i<N; i++){
        scanf("%d", &num);
        NumeriInseriti++;
        for(j=0; j<N; j++){
            if(num<v[j]){
                ShiftDestra(v, j, NumeriInseriti);
            }else{
                v[j+1] = num;
            }
        }
    }
}

ShiftDestra(int v, int scambio, int NumeriInseriti ){
    for(int i=)
}