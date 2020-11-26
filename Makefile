all:
	echo None


build_assembler_debug:
	$(MAKE) -C assembler build_debug

build_assembler_production:
	$(MAKE) -C assembler build_production

build_runtime_debug:
	$(MAKE) -C runtime build_debug

build_runtime_production:
	$(MAKE) -C runtime build_production
