FMT_DIR = $(NXDK_DIR)/lib/fmt

FMT_SRCS += \
						$(FMT_DIR)/fmt/src/format.cpp

FMT_OBJS = $(addsuffix .obj, $(basename $(FMT_SRCS)))

NXDK_CXXFLAGS += \
								-I$(FMT_DIR) \
								-I$(FMT_DIR)/fmt/include \
								-DFMT_USE_WRITE_CONSOLE

$(NXDK_DIR)/lib/fmt.lib: $(FMT_OBJS)

main.exe: $(NXDK_DIR)/lib/fmt.lib

CLEANRULES += clean-fmt

.PHONY: clean-fmt
clean-fmt:
	$(VE)rm -f $(FMT_OBJS) $(NXDK_DIR)/lib/fmt.lib
