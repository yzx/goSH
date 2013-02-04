-include _.mk
TOP_BASE= ..
BUILD_BASE= $(TOP_BASE)/makeSure
NAME?= goSH
#CONFIG?= Release

include $(BUILD_BASE)/env.mk

# Additional source locations
SDIR= \
#
# C source files
CFILE= \
#
# Additional include locations
IDIR= \
../okAPI \
#
# Additional static library list - location:name
#
SLLIST= \
../okAPI/$(DIRT_PREFIX):okAPI \

include $(BUILD_BASE)/def.mk
include $(BUILD_BASE)/rule.mk
