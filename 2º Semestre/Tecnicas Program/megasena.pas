program megasena;

const
  tam = 10000;
 
var
  s: array[1..6] of integer;
  acertos: array[1..tam] of integer;
  j: array[1..tam,1..6] of integer;
  q: array[1..60] of integer;
  valor, v4, v5, v6: real;
  fim, x, i, k, z, achou, n, linha, coluna: integer;

begin
  randomize;
  for i := 1 to 6 do
    s[i] := 0;  
  i := 1;
  achou := 0;
//preenche o vetor do sorteio  
  while i <= 6 do
    begin
      x := random(61);
      if ((i = 1) and (x <> 0)) then
        begin
          s[i] := x;
          i := i + 1;
        end;  
      if ((i > 1) and (x <> 0)) then
        begin
          achou := 0;
          for k := 1 to i do
            begin
              if (s[k] = x) then
                achou := 1;
            end;
        end;
      if ((achou = 0) and (i > 1))then
        begin
          s[i] := x;
          i := i + 1;
        end;
    end;
    writeln;
    writeln('números sorteados:');
    for i := 1 to 6 do
      write(s[i],' ');
//preenche a matriz de jogos  
    i := 1; //linha da matriz                            
    while i <= tam do
      begin
        k := 1; //coluna matriz
        while k <= 6 do
		begin
            x := random(61);   
            if ((k = 1) and (x <> 0)) then
                j[i,k] := x;
            if ((k > 1) and (x <> 0)) then   
              begin
                achou := 0;
                for z := 1 to k do //z é utilizado para percorrer a linha da matriz e procurar numeros repetidos
                  begin
                    if (j[i,k] = x) then
                      achou := 1;
                  end;                             
              end;
            if ((achou = 0) and (k > 1)) then
              begin
	  	      j[i,k] := x;
                k := k + 1;
              end;  
            if k = 1 then
              k := k + 1;
		end;      
        i := i + 1;
      end;
//    j[tam,1] := -1;	     
    writeln;
    
   writeln('números jogados:');
    for i := 1 to tam do
      begin
        write(i, ' - ');
        for k := 1 to 6 do
          write(j[i,k],' ');
        writeln;
	 end;    

{d)Verificar e mostrar quantas vezes cada número (de 01 a 60) foi repetido na totalidade dos jogos realizados, 
gravando estes dados num vetor Q de sessenta (60) posições onde a posição 1 representa o número 01, 
a posição 2 representa o número 02 e assim sucessivamente;     }
    for n := 1 to 60 do
      for i := 1 to tam do
        for k := 1 to 6 do
           if j[i,k] = n then
		    q[n] := q[n] + 1;
    writeln;
    writeln('letra d - quantidade de vezes em cada número foi jogado: ');
    for n := 1 to 60 do
      begin
        writeln(n, ' -> ', q[n]);
	 //  if n mod 10 = 0 then
	   //  readkey;
	 end;

//e)Verificar e mostrar qual foi o número que mais foi jogado;
   n := q[1]; //inicializao N com o primeiro valor do vetor
   k := 1;    //armazena a posição do valor N no vetor
   for i := 2 to 60 do
     if n < q[i] then
	  begin
	    n := q[i];  //se N for menor do que o valor na posição atual do vetor
	    k := i;     //então N recebe este valor e K armazena sua posição
	  end;  
   writeln;
   writeln('O número ',k,' foi jogado ',n, ' vezes');	      
  // readkey;
//f)Verificar e mostrar qual foi o número que menos foi jogado;
   n := 1001; //inicializao N com um valor para comparação
   for i := 1 to 60 do
     if ((n > q[i]) and (q[i] > 0)) then
       begin
	    n := q[i];  //se N for maior do que o valor na posição atual do vetor
	    k := i;     //então N recebe este valor e K armazena sua posição
       end;  
   writeln;
   writeln('O número ',k,' foi jogado ',n, ' vezes');	      
  // readkey;
{g)Verificar e mostrar qual ou quais os números que não foram jogados. 
Caso negativo, informar que todos os números, de 01 a 60, foram jogados; (1,5)}
   writeln;
   n := 0;
   for i := 1 to 60 do
     begin
  	  if q[i] = 0 then
         begin
           writeln('o número ',i,' não foi jogado');
           n := 1;
         end;  
     end;  
     if n = 0 then
       begin
         writeln;
         writeln('todos o números de 01 a 60 foram jogados');
       end;  
  //  readkey;
{a)Verificar e mostrar quantos jogos acertaram seis (06) dezenas;
b)Verificar e mostrar quantos jogos acertaram cinco (05) dezenas;
c)Verificar e mostrar quantos jogos acertaram quatro (04) dezenas;}
    for i := 1 to tam do //i percorre todas as linhas da matriz de jogos
      begin
        x := 0;
	   for n := 1 to 6 do //n percorre o vetor sorteio
          begin
		  for k := 1 to 6 do //k percorre as colunas de cada linha da matriz de jogos
              if j[i,k] = s[n] then
                 x := x + 1;
            acertos[i] := x;
	     end;	  
	 end;     
   writeln;
   for i := 1 to tam do
     writeln('o jogo ',i,' acertou ',acertos[i], ' no sorteio');
  //  readkey;
{h)	Verificar e mostrar quanto cada acertador irá receber, considerando a seguinte proporção 
(informar caso não existam ganhadores para algum dos casos - isto é, se o prêmio foi acumulado para a próxima extração):
85% do valor do prêmio: dividido entre os jogadores que acertaram seis (06) dezenas;
10% do valor do prêmio: dividido entre os jogadores que acertaram cinco (05) dezenas;
5% do valor do prêmio: dividido entre os jogadores que acertaram quatro (04) dezenas;}
   writeln;
   writeln('informe o valor total do prêmio: ');
   readln(valor);
   v4 := valor * 0.05;
   v5 := valor * 0.10;
   v6 := valor * 0.85;
   x := 0; //contador para quantidade de 04 acertos;
   k := 0;//contador para quantidade de 05 acertos;
   z := 0;//contador para quantidade de 06 acertos;
   for i := 1 to tam do
     begin
       if acertos[i] = 4 then
          x := x + 1;
       if acertos[i] = 5 then
          k := k + 1;
       if acertos[i] = 6 then
          z := z + 1;
     end;     
   writeln;
   if z = 0 then
     writeln(' não houve ganhadores para 06 dezenas')
	else
	  begin
   	    writeln(' houve ',z,' ganhadores para 06 dezenas,');
	    writeln(' e cada um receberá como premio o valor de ',v6/z:2);
   	    for i := 1 to tam do 
           if acertos[i] = 6 then
             for coluna := 1 to 6 do
               write(j[i,coluna],'  ');
             writeln;  
       end;        
   if k = 0 then
     writeln(' não houve ganhadores para 05 dezenas')
	else
       begin
  	    writeln(' houve ',k,' ganhadores para 05 dezenas,');
	    writeln(' e cada um receberá como premio o valor de ',v5/k:2);
   	    for i := 1 to tam do 
           if acertos[i] = 5 then
             for coluna := 1 to 6 do
               write(j[i,coluna],'  ');
           writeln;
       end; 
   if x = 0 then
     writeln(' não houve ganhadores para 04 dezenas')
	else
	  begin
  	    writeln(' houve ',x,' ganhadores para 04 dezenas,');
	    writeln(' e cada um receberá como premio o valor de ',v4/x:2);
   	    for i := 1 to tam do 
           if acertos[i] = 4 then
             for coluna := 1 to 6 do
               write(j[i,coluna],'  ');
           writeln;
       end; 
   readln(fim);
end.
