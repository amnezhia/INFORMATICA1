#include <stdio.h>

#define N 5


void AzzeraArray(int v[]);
void StampaArray(int v[]);
void CaricaOrdinato(int v[]);
void shift(int v[], int pos, int Nnumeri);

int main(){
	int v[5];
    AzzeraArray(v);
	CaricaOrdinato(v);
	StampaArray(v);
}

void AzzeraArray(int v[]) {
    for(int i=0; i<N; i++){
		v[i] = 0;
	}
}

void StampaArray(int v[]){
	for(int i=0; i<N; i++){
		printf("%d\t", v[i]);
	}
}

void CaricaOrdinato(int v[]){
    int num, pos;
    scanf("%d", &v[0]);

    for (int i = 1; i < N; i++){
        scanf("%d", &num);
        
        pos = i;
        
        for (int j = i-1; j>=0; j--){
            if (num < v[j]){
            	pos = j;
            }
        }
        
        if(pos !=i){
        	shift(v, pos, i);
		}
		
		v[pos] = num;
    }
}

void shift(int v[], int pos, int Nnumeri) {
    for (int i = Nnumeri; i > pos; i--) {
        v[i] = v[i - 1];
    }
}