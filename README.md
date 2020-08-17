- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `[\t]` --> **NOTHING**

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

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `".sum"` --> **SUM**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `".pot"` --> **POT**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `".g"` --> **GET**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `".s"` --> **SET**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `[a-zA-Z][_a-zA-Z0-9]*` --> **IDENTIFIER**

- ![#1589F0](https://placehold.it/15/1589F0/000000?text=+) `[0-9]+` --> **INTEGER**

Logic language of loop statement which allows only one direction.

\<program\> ::= \<loop\>

\<loop> ::= \<loop\> \<integer\> \<direction\> \<integer\> \
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | \<loop\> \<integer\> \<direction\> \<integer\> ["\<exp>\"]

\<direction\> ::= "->"; 

\<exp\> ::= \<term\> \
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | \<term\>;

\<term\> ::= ".pot" \
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; | ".sum";
          
\<integer\> ::= \[0-9]+\
