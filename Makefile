MyProject : scales.o scales.c
	gcc scales.o -o scale
	./a.exe
MyProject : scales.c
	gcc -c scales.c -o scales.o
installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc scales.c -s WASM=1 -o pge.html
	npm i http-server -g
runserver:
	  cd ../emrun pge.html