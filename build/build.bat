rm -i ./!(build.bat)
java -jar ../deps/antlr-4.13.1-complete.jar -Dlanguage=Cpp ~/cact/grammar/CACT.g4 -visitor -no-listener
cmake -S ~/cact -B ~/cact/build
make -j