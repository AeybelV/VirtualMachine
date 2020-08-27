all:
	echo None


build_compiler_debug:
	$(MAKE) -C compiler build_debug

build_compiler_production:
	$(MAKE) -C compiler build_production
