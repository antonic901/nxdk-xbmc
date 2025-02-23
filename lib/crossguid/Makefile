CROSSGUID_DIR = $(NXDK_DIR)/lib/crossguid

CROSSGUID_SRCS += \
							$(CROSSGUID_DIR)/crossguid/src/guid.cpp

CROSSGUID_OBJS = $(addsuffix .obj, $(basename $(CROSSGUID_SRCS)))

NXDK_CXXFLAGS += \
								-I$(CROSSGUID_DIR)

$(NXDK_DIR)/lib/crossguid.lib: $(CROSSGUID_OBJS)

main.exe: $(NXDK_DIR)/lib/crossguid.lib

CLEANRULES += clean-crossguid

.PHONY: clean-crossguid
clean-crossguid:
	$(VE)rm -f $(CROSSGUID_OBJS) $(NXDK_DIR)/lib/crossguid.lib
