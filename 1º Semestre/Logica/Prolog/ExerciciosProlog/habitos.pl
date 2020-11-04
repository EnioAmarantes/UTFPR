%Enio Amarantes - Hábitos
%Base de Fatos

%Gostam
gosta(bruno,peru).
gosta(bruno,frango).
gosta(ana,milho_verde).
gosta(ana,peru).

%Casados
casado(ana,bruno).
casado(barbara,antonio).

%Combinam
combina(peru,cerveja).
combina(peru,vinho_maduro).
combina(salmao,cerveja).
combina(salmao,peru).
combina(frango,cerveja).
combina(peru,vinho_verde).
combina(vinho_verde, salmao).

%Bebidas
bebida(vinho_verde).
bebida(vinho_maduro).
bebida(cerveja).

%Comidas
comida(salmao).
comida(peru).


%Regras
quemgosta(X,Y,Z):-
	casado(X,Y),
	gosta(X,J),
	combina(J,Z),
	format('Eles são casados e gostam de ~w',[Z]),nl,fail.

qualbebida(X):-
	comida(X),
	combina(X,Y),
	format('O seu ~w combina com ~w',[X,Y]),nl,fail.

qualcomida(X):-
	bebida(X),
	(   combina(Y,X);combina(X,Y)),
	comida(Y),
	format('Sua ~w combina com ~w',[X,Y]),nl,fail.
