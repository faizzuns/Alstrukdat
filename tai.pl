sum(0,A,A).

sum(Ai,B,Ci) :- succ(A,Ai), succ(C,Ci), sum(A,B,C).

sum2(0,A,A).
sum2(Ai,B,Ci) :- succ(Aj,Ai), succ(B,Bj), sum2(Aj, Bj, Ci),!.

sumlist([],0).
sumlist([Head|Tail],X) :- 
	sumlist(Tail,X2),
	X is X2 + Head.