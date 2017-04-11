cmake_minimum_required(VERSION 3.7)
project(C)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        adivinhacao.c
        desafio.c
        dowhile.c
        especificadorvariavel.c
        estruturaderepeticao.c
        ponteiro2.c
        ponteiro3.c
        ponteiroex.c
        registro.c
        registro2.c
        scanf.c
        switch.c
        testechar.c
        testevetor.c
        varbool.c
        verifica.c
        while.c
        while2.c)

add_executable(C ${SOURCE_FILES})