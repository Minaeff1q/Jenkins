# Компилятор
CC=g++

# Флаги компиляции
CFLAGS=-c -Wall

# Отладочные флаги
DEBUGFLAGS=-g

# Имя исполняемого файла
EXECUTABLE=rectangle

# Исходные файлы
SOURCES=rectangle.cpp
OBJECTS=$(SOURCES:.cpp=.o)

# Правило для сборки исполняемого файла
$(EXECUTABLE): $(OBJECTS)
    $(CC) $(OBJECTS) -o $@

# Правило для сборки объектных файлов из исходных файлов
.cpp.o:
    $(CC) $(CFLAGS) $(DEBUGFLAGS) $< -o $@

# Правило для отладочной сборки
debug: DEBUGFLAGS += -DDEBUG
debug: $(EXECUTABLE)

# Правило для очистки
clean:
    rm -rf $(OBJECTS) $(EXECUTABLE)
