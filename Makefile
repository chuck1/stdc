

inc_dir = -Iinclude

src = $(shell find src -name "*.c")

obj = $(patsubst %.c,%.o,$(src))

bin = build/libstdc.a

#test = build/test

GCC = gcc

.PHONY: all

all: $(bin)

%.o: %.c
	@$(GCC) -c $^ -o $@ $(inc_dir)

$(bin): $(obj)
	@echo build $@
	@mkdir -p $(dir $@)
	@ar rcs $@ $(obj)
	@ranlib $@

#$(test): $(bin)
#	@mkdir -p $(dir $@)
#	@$(GCC) test/main.c -Lbuild -largparse -o $@ $(inc_dir)

clean:
	@rm -rf build

help:
	@echo $(src)
	@echo $(obj)



