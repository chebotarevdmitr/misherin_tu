# Минимальная версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта и версия
project(MisherinGame VERSION 1.0 LANGUAGES CXX)

# Устанавливаем стандарт C++ (C++17 — современный и стабильный)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Указываем, что нужно компилировать с предупреждениями
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
# Генерируем compile_commands.json для clangd и IDE
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Добавляем исполняемый файл
# (первый аргумент - имя, второй - исходники)
add_executable(MisherinGame main.cpp)

# Если позже добавим папку include, раскомментировать:
# target_include_directories(MisherinGame PRIVATE include)