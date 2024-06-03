#include <stdio.h>

#define N 10


void AzzeraArray(int v[]);
void StampaArray(int v[]);
void CaricaOrdinato(int v[]);
void ShiftDestra(int v[], int scambio, int NumeriInseriti);

int main(){
	int v[5];
    AzzeraArray(v);
	CaricaOrdinato(v);
	StampaArray(v);
}

void AzzeraArray(int v[]) {
    for(int i=0; i<N; i++){
		printf("%d", v[i]);
	}
}

void StampaArray(int v[]){
	for(int i=0; i<N; i++){
		printf("%d", v[i]);
	}
}

void CaricaOrdinato(int v[]){

    int i, num, j, NumeriInseriti=0;
    scanf("%d", &num);
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

void ShiftDestra(int v[], int scambio, int NumeriInseriti){
   // for(int i=)
}