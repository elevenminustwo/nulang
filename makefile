nulang : nulang.c nulang.h nulang.l loop.h comparison.h temp.h
	lex nulang.l
	gcc -g lex.yy.c nulang.c -o nulang.nu

run : nulang.nu config.in
	./nulang.nu <config.in

clean : 
	rm -rf lex.yy.c nulang.nu
