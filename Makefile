G++ = g++
RM = rm -rf
OUTPUT = mouse_mover

all:
	$(G++) main.cpp -o $(OUTPUT)

clean:
	$(RM) $(OUTPUT)
