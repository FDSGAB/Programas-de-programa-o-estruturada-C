void ordena(int *a, int *b, int *c) {
    int vetor_abc[3] = {*a, *b, *c};
    int percorre_vetor = 1, max = *a, min = *a;

    for (percorre_vetor = 1; percorre_vetor <=2; percorre_vetor++) {
        if (max < vetor_abc[percorre_vetor]) {
            max = vetor_abc[percorre_vetor];
        }
        if (min > vetor_abc[percorre_vetor]) {
            min = vetor_abc[percorre_vetor];
        }
    } 
    percorre_vetor = 0;
    for (percorre_vetor = 0; percorre_vetor <=2; percorre_vetor++) {
        if (vetor_abc[percorre_vetor] != max && vetor_abc[percorre_vetor] != min) {
            *b = vetor_abc[percorre_vetor];
        }
    }
    *a = min;
    *c = max;
}