# Проектная работа по разработке кроссплатформенных программных систем 

Проект выполнен на языке C

# Windows

Чтобы запустить игру в Windows, вам нужно установить MinGW-w64, затем создать файл make.bat в каталоге, где находится ваш исходный код, и записать строки, перечисленные ниже:

- `PATH=path to mingw64/bin`
- `gcc -std=c99 -Wall -Wpedantic Safe.c`

Затем в VS Code откройте терминал и введите:
+ `./make.bat`

Запустится приложение `a.exe`:
