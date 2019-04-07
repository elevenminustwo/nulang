# ============NULANG SYNTAX==============

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `[\t\n]` --> **NOTHING**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `:` --> **COLON**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `=` --> **EQUALS**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `true` --> **TRUE**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `false` --> **FALSE**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `"*"` --> **MULTIPLY**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `"/"` --> **DIVIDE**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `"+"` --> **PLUS**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `"-"` --> **MINUS**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `loop` --> **LOOP**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `"?"` --> **IF**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `"->"` --> **GOES**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `[a-zA-Z][_a-zA-Z0-9]*` --> **IDENTIFIER**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `[0-9]+` --> **INTEGER**

# ===============BNF======================
Logic language of loop.

\<program\> ::= \<loop\>

\<loop> ::= \<loop\> \<integer\> \<rotation\> \<integer\> \
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;| \<loop\> \<integer\> \<rotation\> \<integer\> ["\<exp>\"]

\<rotation\> ::= "->"; 

\<exp\> ::= \<term\>
          | \<term\>;

\<term\> ::= ".pot"
          | ".sum";
          
\<integer\> ::= \[0-9]+\
