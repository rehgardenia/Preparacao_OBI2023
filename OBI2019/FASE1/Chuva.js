// Feito por Luiz Henrique Kiehn

// Função recursiva de definição dos pontos de gotejamento
function gota(lin, col) {
   if (lin >= 0 && lin < N && col >= 0 && col < M) {
      var atual = parede[lin][col];
      if (atual === ".") {

         if (lin>0 && parede[lin-1][col] === 'o') {
            parede[lin][col] = 'o';
            gota(lin,col-1);
         }
         else if (lin < N-1 && col > 0 && parede[lin][col-1] === "o" && parede[lin+1][col-1] === "#") {
            parede[lin][col] = 'o';
            gota(lin,col-1);
         }
         else if (lin < N-1 && col < M-1 && parede[lin][col+1] === "o" && parede[lin+1][col+1] === "#") {
            parede[lin][col] = 'o';
            gota(lin,col-1);
         }
      }
   }
   return '';
}

// Leitura Entrada (linha 1)
var N = 0;
var M = 0;
scanf("%d %d", "N", "M");

// Leitura Entrada (demais linhas: matriz parede)
var parede = [N];
var leitura = '';
for (i=0; i<N; i++) {
   scanf("%s", "leitura");
   parede[i] = leitura.split('');
  
}

// Processamento com chamadas recursivas
for (i=0; i<N; i++) {
   for (j=0; j<M; j++) {
      gota(i, j);
   }
}

// Apresentação da Saída
for (i=0; i<N; i++) {
   for (j=0; j<M; j++) {
      printf("%s", parede[i][j]);
   }
   printf("\n");
}
