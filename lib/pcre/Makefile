PCRE_DIR = $(NXDK_DIR)/lib/pcre

PCRE_SRCS += \
								$(PCRE_DIR)/pcre_chartables.c \
								$(PCRE_DIR)/pcre/pcre_fullinfo.c \
								$(PCRE_DIR)/pcre/pcre_compile.c \
								$(PCRE_DIR)/pcre/pcre_newline.c \
								$(PCRE_DIR)/pcre/pcre_globals.c \
								$(PCRE_DIR)/pcre/pcre_study.c \
								$(PCRE_DIR)/pcre/pcre_tables.c \
								$(PCRE_DIR)/pcre/pcre_ucd.c \
								$(PCRE_DIR)/pcre/pcre_exec.c \
								$(PCRE_DIR)/pcre/pcre_get.c \
								$(PCRE_DIR)/pcre/pcre_version.c \
								$(PCRE_DIR)/pcre/pcre_config.c \
								$(PCRE_DIR)/pcre/pcre_jit_compile.c \
								$(PCRE_DIR)/pcre/pcre_valid_utf8.c \
								$(PCRE_DIR)/pcre/pcre_ord2utf8.c \
								$(PCRE_DIR)/pcre/pcre_xclass.c

PCRE_OBJS = $(addsuffix .obj, $(basename $(PCRE_SRCS)))

NXDK_CFLAGS += \
							-I$(PCRE_DIR) \
							-I$(PCRE_DIR)/pcre \
							-DLINK_SIZE=2 \
							-DMAX_NAME_COUNT=10000 \
							-DMAX_NAME_SIZE=32 \
							-DNEWLINE=10 \
							-DPARENS_NEST_LIMIT=250 \
							-DMATCH_LIMIT=10000000 \
							-DMATCH_LIMIT_RECURSION=10000000 \
							-DPOSIX_MALLOC_THRESHOLD=10 \
							-DSUPPORT_UTF

$(NXDK_DIR)/lib/pcre.lib: $(PCRE_OBJS)

main.exe: $(NXDK_DIR)/lib/pcre.lib

CLEANRULES += clean-pcre

.PHONY: clean-pcre
clean-pcre:
	$(VE)rm -f $(PCRE_OBJS) $(NXDK_DIR)/lib/pcre.lib
