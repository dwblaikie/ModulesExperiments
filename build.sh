#!/bin/bash
clang++-tot -fmodules    -c -std=c++17 -fno-implicit-module-maps -fno-implicit-modules -Xclang -fmodules-codegen -Xclang -emit-module -xc++ -fmodule-name=std std.cppmap -o std.pcm
clang++-tot -fmodules    -c -std=c++17 -fno-implicit-module-maps -fno-implicit-modules std.pcm -o std.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile AbstractFruit.cppm
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile AbstractBowl.cppm -fmodule-file=AbstractFruit.pcm -fmodule-file=std.pcm
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile Apple.cppm -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile FruitBowl.cppm -fmodule-file=AbstractBowl.pcm
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile Grape.cppm -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile SaladBowl.cppm -fmodule-file=AbstractFruit.pcm -fmodule-file=AbstractBowl.pcm
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile Tomato.cppm -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 AbstractFruit.pcm -o AbstractFruit.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 AbstractBowl.pcm -o AbstractBowl.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 AbstractFruit.pcm -o AbstractFruit.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 Apple.pcm -o Apple.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 FruitBowl.pcm -o FruitBowl.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 Grape.pcm -o Grape.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 SaladBowl.pcm -o SaladBowl.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 Tomato.pcm -o Tomato.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 Grape.cpp -fmodule-file=Grape.pcm
clang++-tot -fmodules-ts -c -std=c++17 SaladBowl.cpp -fmodule-file=SaladBowl.pcm -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 Tomato.cpp -fmodule-file=Tomato.pcm
clang++-tot -fmodules-ts -c -std=c++17 FruitBowl.cpp -fmodule-file=FruitBowl.pcm -fmodule-file=Apple.pcm -fmodule-file=Grape.pcm
clang++-tot -fmodules-ts -c -std=c++17 Apple.cpp -fmodule-file=Apple.pcm
clang++-tot -fmodules-ts -c -std=c++17 AbstractFruit.cpp -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 AbstractBowl.cpp -fmodule-file=AbstractBowl.pcm -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 -fmodule-file=Apple.pcm -fmodule-file=Grape.pcm -fmodule-file=Tomato.pcm -fmodule-file=FruitBowl.pcm -fmodule-file=SaladBowl.pcm dinnerparty.cpp
clang++-tot -o dinnerparty {dinnerparty,Abstract{Fruit,Bowl},Apple,Tomato,Grape,{Fruit,Salad}Bowl}.o {Abstract{Fruit,Bowl},Apple,Grape,Tomato,{Fruit,Salad}Bowl}.pcm.o
