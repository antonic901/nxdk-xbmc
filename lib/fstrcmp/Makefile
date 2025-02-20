FSTRCMP_DIR = $(NXDK_DIR)/lib/fstrcmp

FSTRCMP_SRCS += \
							$(FSTRCMP_DIR)/fstrcmp/lib/fstrcmp.c \
							$(FSTRCMP_DIR)/fstrcmp/lib/fmemcmp.c \
							$(FSTRCMP_DIR)/fstrcmp/lib/nmalloc.c

FSTRCMP_OBJS = $(addsuffix .obj, $(basename $(FSTRCMP_SRCS)))

NXDK_CFLAGS += \
							-I$(FSTRCMP_DIR) \
							-I$(FSTRCMP_DIR)/fstrcmp

$(NXDK_DIR)/lib/fstrcmp.lib: $(FSTRCMP_OBJS)

main.exe: $(NXDK_DIR)/lib/fstrcmp.lib

CLEANRULES += clean-fstrcmp

.PHONY: clean-fstrcmp
clean-fstrcmp:
	$(VE)rm -f $(FSTRCMP_OBJS) $(NXDK_DIR)/lib/fstrcmp.lib
