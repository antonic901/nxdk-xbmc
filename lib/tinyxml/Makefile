TINYXML_DIR = $(NXDK_DIR)/lib/tinyxml

TINYXML_SRCS += \
					$(TINYXML_DIR)/tinyxml.cpp \
					$(TINYXML_DIR)/tinyxmlparser.cpp \
					$(TINYXML_DIR)/tinyxmlerror.cpp

TINYXML_OBJS = $(addsuffix .obj, $(basename $(TINYXML_SRCS)))

NXDK_CXXFLAGS += \
					-I$(TINYXML_DIR)

$(NXDK_DIR)/lib/tinyxml.lib: $(TINYXML_OBJS)

main.exe: $(NXDK_DIR)/lib/tinyxml.lib

CLEANRULES += clean-tinyxml

.PHONY: clean-tinyxml
clean-tinyxml:
	$(VE)rm -f $(TINYXML_OBJS) $(NXDK_DIR)/lib/tinyxml.lib
