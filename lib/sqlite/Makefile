SQLITE_DIR = $(NXDK_DIR)/lib/sqlite

SQLITE_SRCS += \
							$(SQLITE_DIR)/sqlite3.c \
							$(SQLITE_DIR)/sqlite_win32.c

SQLITE_OBJS = $(addsuffix .obj, $(basename $(SQLITE_SRCS)))

NXDK_CFLAGS += \
							-I$(SQLITE_DIR) \
							-DSQLITE_WITHOUT_MSIZE=1 \
							-DSQLITE_OS_OTHER=1 \
							-DSQLITE_DEFAULT_MEMSTATUS=0 \
							-DSQLITE_OMIT_DEPRECATED \
							-DSQLITE_OMIT_PROGRESS_CALLBACK \
							-DSQLITE_OMIT_SHARED_CACHE \
							-DSQLITE_OMIT_AUTOINIT \
							-DSQLITE_DISABLE_INTRINSIC \
							-DSQLITE_DEFAULT_WAL_SYNCHRONOUS=1 \
							-DSQLITE_OMIT_SEH

$(NXDK_DIR)/lib/sqlite.lib: $(SQLITE_OBJS)

main.exe: $(NXDK_DIR)/lib/sqlite.lib

CLEANRULES += clean-sqlite

.PHONY: clean-sqlite
clean-sqlite:
	$(VE)rm -f $(SQLITE_OBJS) $(NXDK_DIR)/lib/sqlite.lib
