G++ = g++
RM = rm -rf
MKDIR = mkdir -p

SRC_DIR = Source
OUT_DIR = Output

OUTPUT = mouse_mover

all:
	$(MKDIR) $(OUT_DIR)
	$(G++) $(SRC_DIR)/main.cpp -o $(OUT_DIR)/$(OUTPUT)

clean:
	$(RM) $(OUT_DIR)
