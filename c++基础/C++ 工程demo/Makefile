# 定义编译器
CXX=g++

# 定义编译选项
CXXFLAGS=-Wall -std=c++11

# 定义目标可执行文件名
TARGET=myProgram

# 定义源文件
SOURCES=main.cpp MyClass.cpp

# 定义头文件目录
INCLUDES=.

# 定义对象文件
OBJECTS=$(SOURCES:.cpp=.o)

# 默认目标
all: $(TARGET)

# 链接目标
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -I$(INCLUDES) -o $@ $^

# 编译源文件为对象文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDES) -c $< -o $@

# 清理编译生成的文件
clean:
	rm -f $(OBJECTS) $(TARGET)

# 伪目标
.PHONY: all clean