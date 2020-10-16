all:
	echo None


build_compiler_debug:
	$(MAKE) -C compiler build_debug

build_compiler_production:
	$(MAKE) -C compiler build_production

build_runtime_debug:
	$(MAKE) -C runtime build_debug

build_runtime_production:
	$(MAKE) -C runtime build_production
