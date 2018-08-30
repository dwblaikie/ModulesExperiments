#!/bin/bash

clang++-tot -fmodules    -c -std=c++17 -fno-implicit-module-maps -fno-implicit-modules -Xclang -fmodules-codegen -Xclang -emit-module -xc++ -fmodule-name=std std.cppmap -o std.pcm
clang++-tot -fmodules    -c -std=c++17 -fno-implicit-module-maps -fno-implicit-modules std.pcm -o std.pcm.o

# abstractfruit
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile AbstractFruit.cppm
clang++-tot -fmodules-ts -c -std=c++17 AbstractFruit.pcm -o AbstractFruit.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 AbstractFruit.cpp -fmodule-file=AbstractFruit.pcm
ar cq libabstractfruit.a AbstractFruit.{pcm.,}o

# fruitsalad
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile FruitSalad.cppm -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 FruitSalad.pcm -o FruitSalad.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 Grape.cpp -fmodule-file=FruitSalad.pcm
clang++-tot -fmodules-ts -c -std=c++17 Apple.cpp -fmodule-file=FruitSalad.pcm
ar cq libfruitsalad.a FruitSalad.pcm.o Apple.o Grape.o

# notfruitsalad
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile NotFruitSalad.cppm -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 NotFruitSalad.pcm -o NotFruitSalad.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 Tomato.cpp -fmodule-file=NotFruitSalad.pcm
ar cq libnotfruitsalad.a NotFruitSalad.pcm.o Tomato.o

# bowls
clang++-tot -fmodules-ts -c -std=c++17 -Xclang -fmodules-codegen --precompile Bowls.cppm -fmodule-file=std.pcm -fmodule-file=AbstractFruit.pcm
clang++-tot -fmodules-ts -c -std=c++17 Bowls.pcm -o Bowls.pcm.o
clang++-tot -fmodules-ts -c -std=c++17 SaladBowl.cpp -fmodule-file=Bowls.pcm
clang++-tot -fmodules-ts -c -std=c++17 FruitBowl.cpp -fmodule-file=Bowls.pcm -fmodule-file=FruitSalad.pcm
clang++-tot -fmodules-ts -c -std=c++17 AbstractBowl.cpp -fmodule-file=Bowls.pcm
ar cq libbowls.a Bowls.pcm.o {Salad,Fruit,Abstract}Bowl.o

# dinnerparty
clang++-tot -fmodules-ts -c -std=c++17 dinnerparty.cpp -fmodule-file=FruitSalad.pcm -fmodule-file=NotFruitSalad.pcm -fmodule-file=Bowls.pcm

# clang++-tot -o dinnerparty {dinnerparty,AbstractFruit,Grape,Apple,Tomato,{Abstract,Fruit,Salad}Bowl}.o {std,AbstractFruit,{Not,}FruitSalad,Bowls}.pcm.o
clang++-tot -o dinnerparty dinnerparty.o -L. -lbowls -lnotfruitsalad -lfruitsalad -labstractfruit
