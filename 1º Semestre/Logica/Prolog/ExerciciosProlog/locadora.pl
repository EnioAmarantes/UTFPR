%Enio Amarantes
%Locadora

%Base de Fatos
filme(amnesia,suspense,nolan,2000,113).
filme(babel,drama,inarritu,2006,142).
filme(capote,drama,miller,2005,98).
filme(casablanca,romance,curtiz,1942,102).
filme(matrix,ficção,wachowsk,1999,136).
filme(rebecca,suspense,hitchcock,1940,130).
filme(shrek,aventura,adamson,2001,90).
filme(sinais,ficção,shymalan,2002,106).
filme(spartacus,ação,kubrick,1960,184).
filme(superman,aventura,donner,1978,143).
filme(titanic,romance,cameron,1997,194).
filme(tubarão,suspense,spielberg,1975,124).
filme(volver,drama,almodóvar,2006,121).

%Regras
%i) Quem dirigiu o filme Titanic?
%iii) Quais os filmes diriidos por Donner?
diretor(X,D):-
    filme(X,_,D,_,_),
    format('O filme: ~w foi dirigido por ~w.',[X,D]),nl,fail.

%ii) Quais são os filmes de suspense?
listagenero(X):-
    filme(F,X,_,_,_),
    format('~w é um filme de ~w.',[F,X]),nl,fail.

%iv) Em que ano foi lançado o filme sinais?
anofilme(F,A):-
    filme(F,_,_,_,A,_),
    format('O filme ~w foi produzido em ~w.',[F,A]),nl,fail.

%e) Quais os filmes om duração inferior a 100 min?
duracao(F,T):-
    filme(F,_,_,_T),
    T < 100,
    format('O filme ~w tem ~w min de duração.',[F,T]),nl,fail.

%v) Quais os filmes lançados entre 2000 e 2005?
lancado(F,A):-
    filme(F,_,_,A,_),
    A > 2000,
    A < 2005,
    format('O filme ~w foi lançado em ~w.',[F,A]),nl,fail.

