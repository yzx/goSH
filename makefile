-include _.mk
ALL:
	@echo
	$(MAKE) -f prj.mk YIELD="distclean app"           build
	$(MAKE) -f prj.mk YIELD="lib" CPU=PSoC  TOOL=keil build
	$(MAKE) -f prj.mk YIELD="app" CPU=BF548 TOOL=adi  build
	@echo
	@echo "$@ done in $(shell pwd)"

$(MAKECMDGOALS):
	$(MAKE) -f prj.mk CONFIG=Debug $(MAKECMDGOALS)

