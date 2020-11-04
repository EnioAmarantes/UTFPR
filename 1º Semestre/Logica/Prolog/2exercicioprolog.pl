%---------------------Exercicio1---------------------%
%Base de Fatos:

%Homens

homem(pedro).
homem(jose).
homem(abraao).
homem(jesus).
homem(isac).
homem(ismael).
homem(jairo).
homem(everton).

%Mulheres

mulher(sara).
mulher(maria).
mulher(agar).
mulher(talita).
mulher(ulda).
mulher(julia).

%Casais

casal(jose, maria).
casal(abraao,sara).
casal(abraao,agar).
casal(jairo,ulda).
casal(pedro, talita).

%Filhos

filho(jose, maria, jesus).
filho(abraao,sara, isac).
filho(abraao,agar, ismael).
filho(jairo, ulda, talita).
filho(pedro, talita, everton).
filho(pedro, talita, julia).
filho(isac, talita,joaquim).

%ELABOARAR AS PESQUISAS OU REGRAS:
% Dê (as possíveis respostas):
% a) todas as mulheres;
% b) Se existe mulher com nome de maria;
% c) todos os homens;
% d) Se existe homem com nome de joao;
% e) todos os maridos;

marido(X):-
	homem(X),
	casal(X,Y),
	format('\n ~w é um marido!',[X]),nl,fail.

% f) todas esposas;

esposa(Y):-
	mulher(Y),
	casal(X,Y),
	format('\n ~w é uma esposa!',[Y]),nl,fail.

% g) todos os netos (geral);

netos(AvooP,AvoaP,AvooM,AvoaM,Neto):-
	(filho(AvooP,AvoaP,Pai);
	filho(AvooM,AvoaM,Mae)),
	filho(Pai,Mae,Neto),
	format('\nNeto: ~w',[Neto]),nl,fail.

% h) todas as netas (meninas);


netamenina(AvooP,AvoaP,AvooM,AvoaM,Neta):-
	mulher(Neta),
	(filho(AvooP,AvoaP,Pai);filho(AvooM,AvoaM,Mae)),
	filho(Pai,Mae,Neta),
	format('\nNeta: ~w',[Neta]),nl,fail.

% i) todos os netos (meninos);
netomenino(AvooP,AvoaP,AvooM,AvoaM,Neto):-
	homem(Neto),
	(filho(AvooP,AvoaP,Pai);filho(AvooM,AvoaM,Mae)),
	filho(Pai,Mae,Neto),
	format('\nNeto: ~w',[Neto]),nl,fail.

% j) todos os avos (geral);

achavei(Avo,Avoa):-
	(filho(Avo,Avoa,Pai);filho(Avo,Avoa,Mae)),
	filho(Pai,Mae,Neto),
	format('\nAvo: ~w - Avoa: ~w',[Avo,Avoa]),nl,fail.

% k) todos os avôs (homens);
achaveihomem(Avo,Neto):-
	homem(Avo),
	(filho(Avo,Avoa,Pai);filho(Avo,Avoa,Mae)),
	filho(Pai,Mae,Neto),
	format('\nAvo: ~w',[Avo]),nl,fail.

% l) todas as avós (mulheres);
achaveimuie(Avo,Avoa):-
	mulher(Avoa),
	(filho(Avo,Avoa,Pai);filho(Avo,Avoa,Mae)),
	filho(Pai,Mae,Neto),
	format('\nAvoa: ~w',[Avoa]),nl,fail.


%---------------------Exercicio2------------------%
%Base de Fatos

%Professores

prof(jose).
prof(maria).
prof(lucas).

%Alunos

aluno(vivi).
aluno(rui).
aluno(julia).
aluno(carlos).
aluno(celso).
aluno(jose).

%Masculino

masculino(jose).
masculino(lucas).
masculino(rui).
masculino(carlos).
masculino(celso).

%Feminino

feminino(maria).
feminino(vivi).
feminino(julia).

%Ministração

ministra(jose,logica).
ministra(jose,java).
ministra(maria,calculo).
ministra(lucas,banco).

%Estuda

estuda(vivi,logica).
estuda(vivi,banco).
estuda(rui,calculo).
estuda(julia,banco).
estuda(jose,calculo).

%Regras

adp(A,D,P):-
    feminino(A),
    estuda(A,D),
    ministra(P,D),
    format('Aluna: ~w Disc: ~w Prof: ~w',[A,D,P]),nl,fail.

mne(M):-
    masculino(M),
    \+estuda(M,X),
    format('Aluno: ~w',[M]), nl, fail.

dpj(P):-
    ministra(P,D),
    format('Disc: ~w',[D]),nl,fail.

pqa(P):-
    ministra(P,D),
    estuda(P,D),
    format('Prof-Aluno: ~w Disc: ~w',[P,D]),nl,fail.
