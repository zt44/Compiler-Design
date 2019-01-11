GPP      = g++ -g -O0 -Wall -Wextra -std=gnu++14
GRIND    = valgrind --leak-check=full --show-reachable=yes

LSOURCES = scanner.l
YSOURCES = parser.y
CLGEN    = yylex.cpp
HYGEN    = yyparse.h
CYGEN    = yyparse.cpp
LREPORT  = yylex.output
YREPORT  = yyparse.output

all : oc

oc : main.o string_set.o auxlib.o lyutils.o astree.o yyparse.o yylex.o
	${GPP} main.o string_set.o auxlib.o lyutils.o astree.o \
	yyparse.o yylex.o -o oc

%.o : %.cpp
	${GPP} -c $<

ci :
	cid + Makefile parser.y astree.h astree.cpp lyutils.h \
			 lyutils.cpp yyparse.h auxlib.h auxlib.cpp \
			 string_set.h string_set.cpp main.cpp

spotless : clean
	- rm *.err *.str *.tok *.oc *.out *.lexyacctrace *.oh 

clean :
	- rm *.o yyparse.cpp yyparse.h *.log *.output yylex.cpp oc

${CLGEN} : ${LSOURCES}
	flex --outfile=${CLGEN} ${LSOURCES} 2>${LREPORT}

${CYGEN} ${HYGEN} : ${YSOURCES}
	bison --defines=${HYGEN} --output=${CYGEN} ${YSOURCES}

astree.o: astree.cpp astree.h auxlib.h string_set.h lyutils.h yyparse.h
lyutils.o: lyutils.cpp auxlib.h lyutils.h astree.h yyparse.h
stringset.o: string_set.cpp string_set.h auxlib.h
auxlib.o: auxlib.cpp auxlib.h
main.o: main.cpp astree.h auxlib.h string_set.h lyutils.h \
 yyparse.h
yylex.o: yylex.cpp lyutils.h astree.h auxlib.h yyparse.h
yyparse.o: yyparse.cpp astree.h auxlib.h lyutils.h yyparse.h
