FRIBIDI_DIR = $(NXDK_DIR)/lib/fribidi

FRIBIDI_SRCS += \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-bidi-types.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-brackets.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-bidi.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-run.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-joining-types.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-joining.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-shape.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-arabic.c \
							$(FRIBIDI_DIR)/fribidi/lib/fribidi-mirroring.c

FRIBIDI_OBJS = $(addsuffix .obj, $(basename $(FRIBIDI_SRCS)))

NXDK_CFLAGS += \
							-I$(FRIBIDI_DIR) \
							-I$(FRIBIDI_DIR)/fribidi \
							-DDONT_HAVE_FRIBIDI_CONFIG_H \
							-DFRIBIDI_LIB_STATIC \
							-DHAVE_STDLIB_H \
							-DHAVE_STRING_H \
							-DHAVE_STRINGS_H \
							-DHAVE_STRINGIZE

$(NXDK_DIR)/lib/fribidi.lib: $(FRIBIDI_OBJS)

main.exe: $(NXDK_DIR)/lib/fribidi.lib

CLEANRULES += clean-fribidi

.PHONY: clean-fribidi
clean-fribidi:
	$(VE)rm -f $(FRIBIDI_OBJS) $(NXDK_DIR)/lib/fribidi.lib
