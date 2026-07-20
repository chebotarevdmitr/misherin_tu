# Минимальная версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта и версия
project(MisherinGame VERSION 1.0 LANGUAGES CXX)

# Устанавливаем стандарт C++ (C++17 — современный и стабильный)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Генерируем compile_commands.json для clangd и IDE
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Добавляем исполняемый файл
add_executable(MisherinGame main.cpp)

# Предупреждения компилятора (более современный способ)
target_compile_options(MisherinGame PRIVATE -Wall -Wextra -Wpedantic)

# Если позже добавим папку include, раскомментировать:
# target_include_directories(MisherinGame PRIVATE include