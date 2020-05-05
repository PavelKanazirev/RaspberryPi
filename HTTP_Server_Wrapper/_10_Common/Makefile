export OS_RM := -rm
MAKE_DIR := build

.PHONY: build_all

build_all: clean all

all: $(MAKE_DIR)
	@echo "🚧 Building..."
	$(MAKE) $@ -C $(MAKE_DIR)

clean:
	@echo "🧹 Clearing..."
	$(OS_RM) *.o
	$(MAKE) $@ -C $(MAKE_DIR)

install:
	@echo "🔨 Installing ..."
	$(OS_CP) $(LIBRARYOBJS) $(BINDIR)
