fact(0,1).
fact(1,1).
fact(X,Y) :-
    X1 is X - 1,
    fact(X1,Y1),
    Y is (X * Y1), !.

caminhos(a,b,5).
caminhos(a,c,10).
caminhos(a,f,5).
caminhos(a,g,75).
caminhos(b,e,25).
caminhos(b,f,25).
caminhos(c,d,10).
caminhos(d,e,5).
caminhos(e,f,5).
caminhos(g,f,20).

caminho(Origem, Destino, Custo) :- caminhos(Origem, Destino, Custo).
caminho(Origem, Destino, Custo) :-
    caminhos(Origem, Meio, Custo_Meio),
    caminhos(Meio, Destino, Custo_final),
    Custo is (Custo_Meio + Custo_final).

mdc(X, 0, X).
mdc(X, Y, Z) :-
    X1 is (X mod Y),
    mdc(Y, X1, Z).

sum(0,0).
sum(X, Sum) :-
    X1 is (X-1),
    sum(X1, Sum1),
    Sum is X + Sum1, !.

pot(_, 0, 1).
pot(Base, Expoente, Potencia) :-
    Expoente1 is (Expoente - 1),
    pot(Base, Expoente1, Potencia1),
    Potencia is (Potencia1 * Base), !.

deCarro( uberlandia, monteCarmelo).
deCarro( unai, brasilia).
deCarro( goiania, itumbiara).
deCarro( goiania, ituiutaba).
deTrem( ituiutaba, araguari).
deTrem( itumbiara, araguari).
deTrem( ituiutaba, monteAlegre).
deTrem( monteCarmelo, monteAlegre).
deAviao( saoPaulo, recife).
deAviao( saoPaulo, rioJaneiro).
deAviao( monteAlegre, bh).
deAviao( recife, maceio).
deAviao( bh, unai).

existeCaminho(Origem, Destino) :- (deTrem(Origem, Destino));(deCarro(Origem, Destino)); (deAviao(Origem, Destino)).
existeCaminho(Origem, Destino) :- ((deTrem(Origem, Meio));(deCarro(Origem, Meio)); (deAviao(Origem, Meio))), existeCaminho(Meio, Destino).