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

Для запуска игры на Linux вам необходимо скачать компилятор gcc:

- `sudo apt update`
- `sudo apt install build-essential`
Затем скомпилируйте файл с исходным кодом:

- `gcc RabbitChase.c -o game` где game это имя скомпилированного файла
Затем запустите:

- `./game` для запуска игры.

