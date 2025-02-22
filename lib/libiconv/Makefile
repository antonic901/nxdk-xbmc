LIBICONV_DIR = $(NXDK_DIR)/lib/libiconv

LIBICONV_SRCS += \
							$(LIBICONV_DIR)/libiconv/libcharset/lib/localcharset.c \
							$(LIBICONV_DIR)/libiconv/lib/iconv.c

LIBICONV_OBJS = $(addsuffix .obj, $(basename $(LIBICONV_SRCS)))

NXDK_CFLAGS += \
							-I$(LIBICONV_DIR) \
							-I$(LIBICONV_DIR)/libiconv \
							-DHAVE_STDDEF_H \
							-DHAVE_STRING_H \
							-DHAVE_STDLIB_H \
							-DHAVE_WCRTOMB \
							-DLIBICONV_PLUG

$(NXDK_DIR)/lib/libiconv.lib: $(LIBICONV_OBJS)

main.exe: $(NXDK_DIR)/lib/libiconv.lib

CLEANRULES += clean-libiconv

.PHONY: clean-libiconv
clean-libiconv:
	$(VE)rm -f $(LIBICONV_OBJS) $(NXDK_DIR)/lib/libiconv.lib
