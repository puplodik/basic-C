# Проектная работа по разработке кроссплатформенных программных систем 

Проект выполнен на языке C

# Windows

Чтобы запустить игру в Windows, вам нужно установить MinGW-w64, затем создать файл make.bat в каталоге, где находится ваш исходный код, и записать строки, перечисленные ниже:

- `PATH=path to mingw64/bin`
- `gcc -std=c99 -Wall -Wpedantic scales.c`

Затем в VS Code откройте терминал и введите:
+ `./make.bat`

Запустится приложение `a.exe`:

![image](https://user-images.githubusercontent.com/78842344/207067657-fd1e286d-818c-4e4b-a7c3-2c5823c7db77.png)

# Linux

Протестировать игру на Linux можно в онлайн компиляторе Linux C :

![image](https://user-images.githubusercontent.com/78842344/207068887-b814b4dd-fdd8-4f65-90e8-72feb53c2975.png)

# WEB

Инструкции по установке с использованием emsdk

Основной драйвер Emscripten SDK (emsdk) представляет собой сценарий Python. Вы можете получить его в первый раз с

#Get the emsdk repo

git clone https://github.com/emscripten-core/emsdk.git

#Enter that directory

`cd emsdk`
Выполните следующие команды emsdk, чтобы получить последние инструменты с GitHub и сделать их активными:

- `git pull`
- `./emsdk install latest`
- `./emsdk activate latest`
- `source ./emsdk_env.sh`
В Windows запустите emsdk вместо `./emsdk` и `emsdk_env.bat` вместо исходного `./emsdk_env.sh.`
