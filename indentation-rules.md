# Rules of Indentation

* newline

    * same level
        ```haskell
        do >>
            1 2 \n
            3 4 \n
        ```
    * indent
        ```haskell
        do >>
            1 2
                3 4 \n
        ```
    * dedent
        ```haskell
        do >>
            1 2 <<
        3 4 \n
        ```

* no newline
    * next line
        ```haskell
        do >>
            1 2 3 4 \n
        ```
    * same line
        ```haskell
        do >> 1 2 3 4 \n
        ```
