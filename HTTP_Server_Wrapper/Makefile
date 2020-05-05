export OS_LS := ls -ll
export OS_CD := -cd
export OS_RM := -rm
export OS_CP := -cp
export CXX   := g++
export CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb

SUBDIRS = _10_Common _20_Server _30_ServerPlugins \
	_40_ClientLib _50_ClientApps

all:
	@for i in $(SUBDIRS); do \
	@echo "🚧 Building make all in $$i..."; \
	($(MAKE) all -C $$i); done

install:
	@for i in $(SUBDIRS); do \
	@echo "🔨 Installing in $$i..."; \
	($(MAKE) install -C $$i); done

clean:
	@for i in $(SUBDIRS); do \
	@echo "🧹 Clearing in $$i..."; \
	($(MAKE) clean -C $$i); done

