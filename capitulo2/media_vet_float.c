float media_vet_float(float vet[], int tam) {
  int i;
  float soma = 0.0f;
  for(i=0; i<tam; i++) {
    soma += vet[i];
  }
  return soma/tam;
}