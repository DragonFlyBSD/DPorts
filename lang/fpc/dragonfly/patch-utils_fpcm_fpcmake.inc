--- utils/fpcm/fpcmake.inc.orig	2012-09-03 14:34:14.000000000 +0000
+++ utils/fpcm/fpcmake.inc
@@ -14,12 +14,12 @@ const fpcmakeini : array[0..216,1..240] 
   '#'#010+
   #010+
   '# OS categories'#010+
-  'BSDs = freebsd netbsd openbsd darwin'#010+
+  'BSDs = freebsd netbsd openbsd darwin dragonfly'#010+
   'UNIXs = linux $(BSDs) solaris qnx haiku'#010+
   'LIMIT83fs = go32v2 os2 emx watcom'#010+
   'OSNeedsComspecToRunBatch = go32v2 watcom'#010+
   #010+
-  '#Empty target for rules that always should run. Need','ed if'#010+
+  '#Empty target for rules that always should',' run. Needed if'#010+
   '#the target is non-phoney, and there is non-phony prereqisites.'#010+
   '#Then add FORCE as an prerequisite'#010+
   '#See gnu make manual: 4.7 Rules without Commands or Prerequisites'#010+
@@ -27,18 +27,18 @@ const fpcmakeini : array[0..216,1..240] 
   '.PHONY: FORCE'#010+
   #010+
   '[osdetect]'#010+
-  '####################################','################################'+
+  '##########################','##########################################'+
   '#'#010+
   '# Autodetect source OS (Linux or Dos or Windows NT or OS/2 or other)'#010+
   '# define inUnix when running under Unix like environment'#010+
   '#               (Linux,FreeBSD,NetBSD,OpenBSD,Darwin,Cygwin)'#010+
-  '# define inWinNT wh','en running under WinNT'#010+
+  '# define ','inWinNT when running under WinNT'#010+
   '# define inOS2 when running under OS/2'#010+
   '# define inCygwin when running under Cygwin32'#010+
   '#####################################################################'#010+
   #010+
-  '# We need only / in the path also remove the current dir,'#010+
-  '# a','lso remove trailing /'#039's'#010+
+  '# We need only / in the path also remove the curren','t dir,'#010+
+  '# also remove trailing /'#039's'#010+
   'override PATH:=$(patsubst %/,%,$(subst \,/,$(PATH)))'#010+
   #010+
   '# Detect unix'#010+
@@ -46,16 +46,16 @@ const fpcmakeini : array[0..216,1..240] 
   'ifneq ($(findstring darwin,$(OSTYPE)),)'#010+
   'inUnix=1 #darwin'#010+
   'SEARCHPATH:=$(filter-out .,$(subst :, ,$(PATH)))'#010+
-  'else'#010+
-  '# Deter','mine if we'#039've a unix searchpath by looking for a ;'#010+
+  'el','se'#010+
+  '# Determine if we'#039've a unix searchpath by looking for a ;'#010+
   '# that normally doesn'#039't exists in the unix PATH var.'#010+
   'ifeq ($(findstring ;,$(PATH)),)'#010+
   'inUnix=1'#010+
   'SEARCHPATH:=$(filter-out .,$(subst :, ,$(PATH)))'#010+
   'else'#010+
-  'SEARCHPATH:=$(subst ;, ,$(PATH))'#010+
+  'SEARCHPATH:=$(subst ;, ,$(PATH)',')'#010+
+  'endif'#010+
   'endif'#010+
-  'en','dif'#010+
   #010+
   '# Add path were make is located'#010+
   'SEARCHPATH+=$(patsubst %/,%,$(subst \,/,$(dir $(MAKE))))'#010+
@@ -63,7 +63,7 @@ const fpcmakeini : array[0..216,1..240] 
   '# Search for PWD'#010+
   'PWD:=$(strip $(wildcard $(addsuffix /pwd.exe,$(SEARCHPATH))))'#010+
   'ifeq ($(PWD),)'#010+
-  'PWD:=$(strip $(wildcard $(addsuffix /pwd,$(SEARCHPA','TH))))'#010+
+  'PWD:=$(strip $(wildcard $(addsuffix /pwd,','$(SEARCHPATH))))'#010+
   'ifeq ($(PWD),)'#010+
   '$(error You need the GNU utils package to use this Makefile)'#010+
   'else'#010+
@@ -76,7 +76,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# Detect NT - NT sets OS to Windows_NT'#010+
-  '# Detect OS/2 - OS/','2 has OS2_SHELL defined'#010+
+  '# Detect ','OS/2 - OS/2 has OS2_SHELL defined'#010+
   'ifndef inUnix'#010+
   'ifeq ($(OS),Windows_NT)'#010+
   'inWinNT=1'#010+
@@ -92,8 +92,8 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# The extension of batch files / scripts'#010+
-  'ifdef inUnix'#010+
-  'SRCB','ATCHEXT=.sh'#010+
+  'ifdef i','nUnix'#010+
+  'SRCBATCHEXT=.sh'#010+
   'else'#010+
   'ifdef inOS2'#010+
   'SRCBATCHEXT=.cmd'#010+
@@ -110,7 +110,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   #010+
-  '# Path Separator, the s','ubst trick is necessary for the \ that can'#039+
+  '# Path Separa','tor, the subst trick is necessary for the \ that can'#039+
   't exists'#010+
   '# at the end of a line'#010+
   'ifdef inUnix'#010+
@@ -124,13 +124,13 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# Base dir'#010+
-  'ifdef PWD'#010+
-  'BASEDIR:','=$(subst \,/,$(shell $(PWD)))'#010+
+  'ifdef PW','D'#010+
+  'BASEDIR:=$(subst \,/,$(shell $(PWD)))'#010+
   '# For Cygwin we need to replace /cygdrive/c/ with c:/'#010+
   'ifdef inCygWin'#010+
   'ifneq ($(findstring /cygdrive/,$(BASEDIR)),)'#010+
   'BASENODIR:=$(patsubst /cygdrive%,%,$(BASEDIR))'#010+
-  'BASEDRIVE:=$(firstword $(subst /, ,$(BASENODIR)))',#010+
+  'BASEDRIVE:=$(firstword $(subst /, ,$(BA','SENODIR)))'#010+
   'BASEDIR:=$(subst /cygdrive/$(BASEDRIVE)/,$(BASEDRIVE):/,$(BASEDIR))'#010+
   'endif'#010+
   'endif'#010+
@@ -142,7 +142,7 @@ const fpcmakeini : array[0..216,1..240] 
   'ays found'#010+
   'ifdef inOS2'#010+
   'ifndef ECHO'#010+
-  'ECHO:=$(strip $(wildcard $(addsuffix ','/gecho$(SRCEXEEXT),$(SEARCHPATH'+
+  'ECHO:=$(strip $(wildcard $(','addsuffix /gecho$(SRCEXEEXT),$(SEARCHPATH'+
   '))))'#010+
   'ifeq ($(ECHO),)'#010+
   'ECHO:=$(strip $(wildcard $(addsuffix /echo$(SRCEXEEXT),$(SEARCHPATH)))'+
@@ -155,8 +155,8 @@ const fpcmakeini : array[0..216,1..240] 
   'else'#010+
   'ECHO:=$(firstword $(ECHO))'#010+
   'endif'#010+
-  'endif'#010+
-  'export E','CHO'#010+
+  'endi','f'#010+
+  'export ECHO'#010+
   'endif'#010+
   #010+
   '[fpcdetect]'#010+
@@ -164,8 +164,8 @@ const fpcmakeini : array[0..216,1..240] 
   '# FPC Binary and Version Detection'#010+
   '#####################################################################'#010+
   #010+
-  '# Compatibility with old makefiles'#010+
-  'ifndef',' FPC'#010+
+  '# Compatibility with old makefi','les'#010+
+  'ifndef FPC'#010+
   'ifdef PP'#010+
   'FPC=$(PP)'#010+
   'endif'#010+
@@ -173,8 +173,8 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Try to detect the ppcXXX file to use by using "fpc -PB" option'#010+
   '# to query for the default ppcXXX the fpc executable tries. When'#010+
-  '# fpc is not found use ppc386 by default. Also when fpc -PB gives'#010+
-  '# an er','ror ppc386 will be used.'#010+
+  '# fpc is not found use ppc386 by default. Also when fpc -PB giv','es'#010+
+  '# an error ppc386 will be used.'#010+
   'ifndef FPC'#010+
   '# check if fpc exists'#010+
   'FPCPROG:=$(strip $(wildcard $(addsuffix /fpc$(SRCEXEEXT),$(SEARCHPATH)'+
@@ -182,14 +182,14 @@ const fpcmakeini : array[0..216,1..240] 
   'ifneq ($(FPCPROG),)'#010+
   'FPCPROG:=$(firstword $(FPCPROG))'#010+
   'ifneq ($(CPU_TARGET),)'#010+
-  'FPC:=$(shell $(FPCPROG) -P$(CPU_','TARGET) -PB)'#010+
+  'FPC:=$(shell $(FPCPROG',') -P$(CPU_TARGET) -PB)'#010+
   'else'#010+
   'FPC:=$(shell $(FPCPROG) -PB)'#010+
   'endif'#010+
   '# Older fpc executables didn'#039't support it and return'#010+
   '# Error: Illegal processor... If found then fallback to ppc386'#010+
   'ifneq ($(findstring Error,$(FPC)),)'#010+
-  'override FPC=$(firstword $(strip $(','wildcard $(addsuffix /ppc386$(SRC'+
+  'override FPC=$(firstword ','$(strip $(wildcard $(addsuffix /ppc386$(SRC'+
   'EXEEXT),$(SEARCHPATH)))))'#010+
   'else'#010+
   '# if the cross compiler is not found, fall back to fpc'#010+
@@ -198,7 +198,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   'else'#010+
-  '# fpc binary not found, fallback to ppc','386'#010+
+  '# fpc binary not found, fallb','ack to ppc386'#010+
   'override FPC=$(firstword $(strip $(wildcard $(addsuffix /ppc386$(SRCEX'+
   'EEXT),$(SEARCHPATH)))))'#010+
   'endif'#010+
@@ -206,15 +206,15 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Get a clean executable name'#010+
   'override FPC:=$(subst $(SRCEXEEXT),,$(FPC))'#010+
-  'override FPC:=$(subst \,/,$(FPC))$(SRCEXEEXT)'#010+
+  'override FPC:=$(subst \,/,$(FPC))$(SRCEXEEXT)',#010+
   #010+
-  '# Try to',' find the binary direct first, otherwise in the path,'#010+
+  '# Try to find the binary direct first, otherwise in the path,'#010+
   '# if not found give an error'#010+
   'FOUNDFPC:=$(strip $(wildcard $(FPC)))'#010+
   'ifeq ($(FOUNDFPC),)'#010+
   'FOUNDFPC=$(strip $(wildcard $(addsuffix /$(FPC),$(SEARCHPATH))))'#010+
   'ifeq ($(FOUNDFPC),)'#010+
-  '$(error Compil','er $(FPC) not found)'#010+
+  '$(er','ror Compiler $(FPC) not found)'#010+
   'endif'#010+
   'endif'#010+
   #010+
@@ -225,8 +225,8 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# FPC version'#010+
-  'ifndef FPC_VERSION'#010+
-  'FPC_VERS','ION:=$(word 1,$(FPC_COMPILERINFO))'#010+
+  'ifndef FPC_VERSIO','N'#010+
+  'FPC_VERSION:=$(word 1,$(FPC_COMPILERINFO))'#010+
   'endif'#010+
   #010+
   'export FPC FPC_VERSION FPC_COMPILERINFO'#010+
@@ -234,7 +234,7 @@ const fpcmakeini : array[0..216,1..240] 
   '# This should limit multiple checks'#010+
   'unexport CHECKDEPEND ALLDEPENDENCIES'#010+
   #010+
-  '###############################################','#####################'+
+  '#####################################','###############################'+
   '#'#010+
   '# FPC Target Detection'#010+
   '#####################################################################'#010+
@@ -242,9 +242,9 @@ const fpcmakeini : array[0..216,1..240] 
   '# Fall back to default values if needed'#010+
   'ifndef CPU_TARGET'#010+
   'ifdef CPU_TARGET_DEFAULT'#010+
-  'CPU_TARGET=$(CPU_TARGET_DEFAULT)'#010+
+  'CPU_TARGET=$(CPU_TARGET_DEFAUL','T)'#010+
+  'endif'#010+
   'endif'#010+
-  'e','ndif'#010+
   'ifndef OS_TARGET'#010+
   'ifdef OS_TARGET_DEFAULT'#010+
   'OS_TARGET=$(OS_TARGET_DEFAULT)'#010+
@@ -256,7 +256,7 @@ const fpcmakeini : array[0..216,1..240] 
   'CPU_SOURCE:=$(word 2,$(FPC_COMPILERINFO))'#010+
   'endif'#010+
   'ifndef CPU_TARGET'#010+
-  'CPU_TARGET:=$(wo','rd 3,$(FPC_COMPILERINFO))'#010+
+  'CPU_TA','RGET:=$(word 3,$(FPC_COMPILERINFO))'#010+
   'endif'#010+
   'ifndef OS_SOURCE'#010+
   'OS_SOURCE:=$(word 4,$(FPC_COMPILERINFO))'#010+
@@ -265,9 +265,9 @@ const fpcmakeini : array[0..216,1..240] 
   'OS_TARGET:=$(word 5,$(FPC_COMPILERINFO))'#010+
   'endif'#010+
   'FULL_TARGET=$(CPU_TARGET)-$(OS_TARGET)'#010+
-  'FULL_SOURCE=$(CPU_SOURCE)-$(OS_SOURCE)'#010+
+  'FULL_SOURCE=$(CPU_SOURCE)-$(OS_','SOURCE)'#010+
   #010+
-  'i','feq ($(CPU_TARGET),armeb)'#010+
+  'ifeq ($(CPU_TARGET),armeb)'#010+
   'ARCH=arm'#010+
   'override FPCOPT+=-Cb'#010+
   'else'#010+
@@ -280,7 +280,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# Full name of the target, including CPU and OS. For OSs limited'#010+
-  '# to 8.3 we only',' use the target OS'#010+
+  '# to 8','.3 we only use the target OS'#010+
   'ifneq ($(findstring $(OS_SOURCE),$(LIMIT83fs)),)'#010+
   'TARGETSUFFIX=$(OS_TARGET)'#010+
   'SOURCESUFFIX=$(OS_SOURCE)'#010+
@@ -288,9 +288,9 @@ const fpcmakeini : array[0..216,1..240] 
   'ifneq ($(findstring $(OS_TARGET),$(LIMIT83fs)),)'#010+
   'TARGETSUFFIX=$(OS_TARGET)'#010+
   'else'#010+
-  'TARGETSUFFIX=$(FULL_TARGET)'#010+
+  'TARGETSUFFIX=$(FULL_TARGE','T)'#010+
   'endif'#010+
-  'S','OURCESUFFIX=$(FULL_SOURCE)'#010+
+  'SOURCESUFFIX=$(FULL_SOURCE)'#010+
   'endif'#010+
   #010+
   '# Cross compile flag'#010+
@@ -300,7 +300,7 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Check if the Makefile supports this target, but not'#010+
   '# when the make target is to rebuild the makefile'#010+
-  'ifeq ($(findstring ma','kefile,$(MAKECMDGOALS)),)'#010+
+  'ifeq ($(fin','dstring makefile,$(MAKECMDGOALS)),)'#010+
   'ifeq ($(findstring $(FULL_TARGET),$(MAKEFILETARGETS)),)'#010+
   '$(error The Makefile doesn'#039't support target $(FULL_TARGET), please'+
   ' run fpcmake first)'#010+
@@ -308,7 +308,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   #010+
-  '# Detect BSD, since BSD uses a slightly different director','y hierarch'+
+  '# Detect BSD, since BSD uses a slightly differen','t directory hierarch'+
   'y.'#010+
   'ifneq ($(findstring $(OS_TARGET),$(BSDs)),)'#010+
   'BSDhier=1'#010+
@@ -319,13 +319,13 @@ const fpcmakeini : array[0..216,1..240] 
   'linuxHier=1'#010+
   'endif'#010+
   #010+
-  'export OS_TARGET OS_SOURCE ARCH CPU_TARGET CPU_SOURCE FULL_TAR','GET FU'+
+  'export OS_TARGET OS_SOURCE ARCH CPU_TARGET CPU_SOURC','E FULL_TARGET FU'+
   'LL_SOURCE TARGETSUFFIX SOURCESUFFIX CROSSCOMPILE'#010+
   #010+
   '[fpmakefpcdetect]'#010+
   '#####################################################################'#010+
   '# FPC Binary and Version Detection'#010+
-  '#############################################################','#######'+
+  '###################################################','#################'+
   '#'#010+
   '# If FPCFPMAKE is not set and we'#039're cross-compiling, try to find a'+
   #010+
@@ -337,35 +337,35 @@ const fpcmakeini : array[0..216,1..240] 
   'build'#010+
   '# of the native rtl'#010+
   #010+
-  'ifeq ($(str','ip $(wildcard $(addsuffix /compiler/ppc$(SRCEXEEXT),$(FPC'+
+  'i','feq ($(strip $(wildcard $(addsuffix /compiler/ppc$(SRCEXEEXT),$(FPC'+
   'DIR)))),)'#010+
   '# If that compiler is not found, use the common, installed native comp'+
   'iler'#010+
   '# Note that in this case FPCFPMAKE is not exported, because it could b'+
   'e that'#010+
-  '# a more suitable com','piler is compiled later on'#010+
+  '# a more su','itable compiler is compiled later on'#010+
   '# check if fpc exists'#010+
   'FPCPROG:=$(strip $(wildcard $(addsuffix /fpc$(SRCEXEEXT),$(SEARCHPATH)'+
   ')))'#010+
   'ifneq ($(FPCPROG),)'#010+
   'FPCPROG:=$(firstword $(FPCPROG))'#010+
   'FPCFPMAKE:=$(shell $(FPCPROG) -PB)'#010+
-  '# if a native compiler is not',' found, fall back to fpc'#010+
+  '# if a native compi','ler is not found, fall back to fpc'#010+
   'ifeq ($(strip $(wildcard $(FPCFPMAKE))),)'#010+
   'FPCFPMAKE:=$(firstword $(FPCPROG))'#010+
   'endif'#010+
   'else'#010+
   '# fpc binary not found, fallback to ppc386'#010+
   'override FPCFPMAKE=$(firstword $(strip $(wildcard $(addsuffix /ppc386$'+
-  '(SRCEXEEXT),$(','SEARCHPATH)))))'#010+
+  '(SRC','EXEEXT),$(SEARCHPATH)))))'#010+
   'endif'#010+
   'else'#010+
   '# Use the ppc compiler. Because the path to the compiler is relative, '+
   'do not'#010+
   '# evaluate the variable here, but do that on the fly.'#010+
   'FPCFPMAKE=$(strip $(wildcard $(addsuffix /compiler/ppc$(SRCEXEEXT),$(F'+
-  'PCDIR))))'#010+
-  'FP','MAKE_SKIP_CONFIG=-n'#010+
+  'PC','DIR))))'#010+
+  'FPMAKE_SKIP_CONFIG=-n'#010+
   'export FPCFPMAKE'#010+
   'export FPMAKE_SKIP_CONFIG'#010+
   'endif'#010+
@@ -380,16 +380,15 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '[fpcdircheckenv]'#010+
   '#####################################################################'#010+
-  '# FPCDIR Setting'#010+
-  '#######','#############################################################'+
-  '#'#010+
+  '# FPCDIR Setti','ng'#010+
+  '#####################################################################'#010+
   #010+
   '# Test FPCDIR to look if the RTL dir exists'#010+
   'ifdef FPCDIR'#010+
   'override FPCDIR:=$(subst \,/,$(FPCDIR))'#010+
   'ifeq ($(wildcard $(addprefix $(FPCDIR)/,rtl units)),)'#010+
-  'override FPCDIR=wrong'#010+
-  'end','if'#010+
+  'override FPCDIR','=wrong'#010+
+  'endif'#010+
   'else'#010+
   'override FPCDIR=wrong'#010+
   'endif'#010+
@@ -399,7 +398,7 @@ const fpcmakeini : array[0..216,1..240] 
   'ifeq ($(FPCDIR),wrong)'#010+
   'override FPCDIR:=$(subst \,/,$(DEFAULT_FPCDIR))'#010+
   'ifeq ($(wildcard $(addprefix $(FPCDIR)/,rtl units)),)'#010+
-  'override FPCDIR=wrong'#010,
+  'override FPC','DIR=wrong'#010+
   'endif'#010+
   'endif'#010+
   'endif'#010+
@@ -413,12 +412,12 @@ const fpcmakeini : array[0..216,1..240] 
   'override FPCDIR=/usr/lib/fpc/$(FPC_VERSION)'#010+
   'endif'#010+
   'else'#010+
-  'override FPCD','IR:=$(subst /$(FPC),,$(firstword $(strip $(wildcard $(a'+
+  'ove','rride FPCDIR:=$(subst /$(FPC),,$(firstword $(strip $(wildcard $(a'+
   'ddsuffix /$(FPC),$(SEARCHPATH))))))'#010+
   'override FPCDIR:=$(FPCDIR)/..'#010+
   'ifeq ($(wildcard $(addprefix $(FPCDIR)/,rtl units)),)'#010+
   'override FPCDIR:=$(FPCDIR)/..'#010+
-  'ifeq ($(wildcard $(addprefix $(FPCD','IR)/,rtl units)),)'#010+
+  'ifeq ($(wildcard $(addpre','fix $(FPCDIR)/,rtl units)),)'#010+
   'override FPCDIR:=$(BASEDIR)'#010+
   'ifeq ($(wildcard $(addprefix $(FPCDIR)/,rtl units)),)'#010+
   'override FPCDIR=c:/pp'#010+
@@ -430,7 +429,7 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Cross binaries dir'#010+
   'ifndef CROSSBINDIR'#010+
-  'CROSSBINDIR:=$(wildcard $(FPCDIR)/bin/$(TARGET','SUFFIX))'#010+
+  'CROSSBINDIR:=$(wildcard $(FPCDIR)/bi','n/$(TARGETSUFFIX))'#010+
   'endif'#010+
   #010+
   '# Default binutils prefix for cross compile when the'#010+
@@ -441,7 +440,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   #010+
-  'ifndef BINUTILSPR','EFIX'#010+
+  'ifndef ','BINUTILSPREFIX'#010+
   'ifndef CROSSBINDIR'#010+
   'ifdef CROSSCOMPILE'#010+
   'ifndef DARWIN2DARWIN'#010+
@@ -453,23 +452,23 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Try first the full target name, otherwise try only'#010+
   '# the OS for backwards compatibility'#010+
-  'UNITSDIR:=$(wildca','rd $(FPCDIR)/units/$(TARGETSUFFIX))'#010+
+  'UNITSDIR',':=$(wildcard $(FPCDIR)/units/$(TARGETSUFFIX))'#010+
   'ifeq ($(UNITSDIR),)'#010+
   'UNITSDIR:=$(wildcard $(FPCDIR)/units/$(OS_TARGET))'#010+
   'endif'#010+
   #010+
   '# Packages dir'#010+
   'PACKAGESDIR:=$(wildcard $(FPCDIR) $(FPCDIR)/packages $(FPCDIR)/package'+
-  's/base $(FPCDIR)/packages/extra)'#010+
+  's/base $(FPCDIR)/packages/extra',')'#010+
   #010+
   #010+
-  '[shell','tools]'#010+
+  '[shelltools]'#010+
   '#####################################################################'#010+
   '# Shell tools'#010+
   '#####################################################################'#010+
   #010+
   '# Echo that can redir (must be able run in the default OS shell)'#010+
-  'ifndef ECHORE','DIR'#010+
+  'ifn','def ECHOREDIR'#010+
   'ifndef inUnix'#010+
   'ECHOREDIR=echo'#010+
   'else'#010+
@@ -488,8 +487,8 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# Copy a whole tree'#010+
-  'ifndef MKDIRTREE'#010+
-  'MKDIRTREE',':=$(MKDIRPROG) -p'#010+
+  'ifndef MKDIRTREE',#010+
+  'MKDIRTREE:=$(MKDIRPROG) -p'#010+
   'endif'#010+
   #010+
   '# To move pograms'#010+
@@ -508,7 +507,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# To install files'#010+
-  'ifndef INSTA','LL'#010+
+  'if','ndef INSTALL'#010+
   'ifdef inUnix'#010+
   'INSTALL:=$(GINSTALL) -c -m 644'#010+
   'else'#010+
@@ -525,8 +524,8 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   #010+
-  '# To make a directory.'#010+
-  'ifndef MKD','IR'#010+
+  '# To make a directory.'#010,
+  'ifndef MKDIR'#010+
   'MKDIR:=$(GINSTALL) -m 755 -d'#010+
   'endif'#010+
   #010+
@@ -537,7 +536,7 @@ const fpcmakeini : array[0..216,1..240] 
   '[defaultdirs]'#010+
   '#####################################################################'#010+
   '# Default Directories'#010+
-  '####################','################################################'+
+  '##########','##########################################################'+
   '#'#010+
   #010+
   '# Units dir'#010+
@@ -551,7 +550,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   #010+
-  '# Unixes use unix',' dirs with /usr/bin, /usr/lib'#010+
+  '# Unixe','s use unix dirs with /usr/bin, /usr/lib'#010+
   '# When zipping use the target os default, when normal install then'#010+
   '# use the source os as default'#010+
   'ifdef ZIPINSTALL'#010+
@@ -560,7 +559,7 @@ const fpcmakeini : array[0..216,1..240] 
   'UNIXHier=1'#010+
   'endif'#010+
   'else'#010+
-  '# Normal instal','l'#010+
+  '# Nor','mal install'#010+
   'ifneq ($(findstring $(OS_SOURCE),$(UNIXs)),)'#010+
   'UNIXHier=1'#010+
   'endif'#010+
@@ -573,7 +572,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   #010+
-  '# set the prefix directory where to install e','verything'#010+
+  '# set the prefix directory where to',' install everything'#010+
   'ifndef INSTALL_PREFIX'#010+
   'ifdef UNIXHier'#010+
   'INSTALL_PREFIX=/usr/local'#010+
@@ -587,7 +586,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'export INSTALL_PREFIX'#010+
   #010+
-  '# Export also INSTALL_SOURCESUBDIR s','et so it will be'#010+
+  '# Export also INSTALL_SOUR','CESUBDIR set so it will be'#010+
   '# used recursively for all subdirs'#010+
   'ifdef INSTALL_FPCSUBDIR'#010+
   'export INSTALL_FPCSUBDIR'#010+
@@ -599,7 +598,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'export DIST_DESTDIR'#010+
   #010+
-  '# EXE/PPU Target di','rectories'#010+
+  '# EXE/PPU',' Target directories'#010+
   'ifndef COMPILER_UNITTARGETDIR'#010+
   'ifdef PACKAGEDIR_MAIN'#010+
   'COMPILER_UNITTARGETDIR=$(PACKAGEDIR_MAIN)/units/$(TARGETSUFFIX)'#010+
@@ -608,8 +607,8 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   'ifndef COMPILER_TARGETDIR'#010+
-  'COMPILER_TARGETDIR=.'#010+
-  'endif',#010+
+  'COMPILER_TARGETD','IR=.'#010+
+  'endif'#010+
   #010+
   #010+
   '#####################################################################'#010+
@@ -617,7 +616,7 @@ const fpcmakeini : array[0..216,1..240] 
   '#####################################################################'#010+
   #010+
   '# set the base directory where to install everything'#010+
-  'ifndef INSTALL_BASEDI','R'#010+
+  'ifndef INST','ALL_BASEDIR'#010+
   'ifdef UNIXHier'#010+
   'ifdef INSTALL_FPCPACKAGE'#010+
   'INSTALL_BASEDIR:=$(INSTALL_PREFIX)/lib/fpc/$(FPC_VERSION)'#010+
@@ -629,15 +628,15 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   #010+
-  '# set the directory w','here to install the binaries'#010+
+  '# set the d','irectory where to install the binaries'#010+
   'ifndef INSTALL_BINDIR'#010+
   'ifdef UNIXHier'#010+
   'INSTALL_BINDIR:=$(INSTALL_PREFIX)/bin'#010+
   'else'#010+
   'INSTALL_BINDIR:=$(INSTALL_BASEDIR)/bin'#010+
   '# for FPC packages install the binaries under their target subdir'#010+
-  'ifdef INSTALL_FPCPACKAGE'#010+
-  'i','fdef CROSSCOMPILE'#010+
+  'ifdef INSTALL_FP','CPACKAGE'#010+
+  'ifdef CROSSCOMPILE'#010+
   'ifdef CROSSINSTALL'#010+
   'INSTALL_BINDIR:=$(INSTALL_BINDIR)/$(SOURCESUFFIX)'#010+
   'else'#010+
@@ -650,7 +649,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   #010+
-  '# set the di','rectory where to install the units.'#010+
+  '# ','set the directory where to install the units.'#010+
   'ifndef INSTALL_UNITDIR'#010+
   'INSTALL_UNITDIR:=$(INSTALL_BASEDIR)/units/$(TARGETSUFFIX)'#010+
   'ifdef INSTALL_FPCPACKAGE'#010+
@@ -658,9 +657,9 @@ const fpcmakeini : array[0..216,1..240] 
   'INSTALL_UNITDIR:=$(INSTALL_UNITDIR)/$(PACKAGE_NAME)'#010+
   'endif'#010+
   'endif'#010+
-  'endif'#010+
+  'endif',#010+
   #010+
-  '# Where ','to install shared libraries'#010+
+  '# Where to install shared libraries'#010+
   'ifndef INSTALL_LIBDIR'#010+
   'ifdef UNIXHier'#010+
   'INSTALL_LIBDIR:=$(INSTALL_PREFIX)/lib'#010+
@@ -671,8 +670,8 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Where the source files will be stored'#010+
   'ifndef INSTALL_SOURCEDIR'#010+
-  'ifdef UNIXHier'#010+
-  'ifde','f BSDhier'#010+
+  'ifdef UNI','XHier'#010+
+  'ifdef BSDhier'#010+
   'SRCPREFIXDIR=share/src'#010+
   'else'#010+
   'ifdef linuxHier'#010+
@@ -683,8 +682,8 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'ifdef INSTALL_FPCPACKAGE'#010+
   'ifdef INSTALL_FPCSUBDIR'#010+
-  'INSTALL_SOURCEDIR:=$(INSTALL_PREFIX)/$(SRCPREFIXDIR)/fpc-$(FPC_VERSION'+
-  ')/$(INSTAL','L_FPCSUBDIR)/$(PACKAGE_NAME)'#010+
+  'INSTALL_SOURCEDIR:=$(INSTALL_PREFIX)/$(SRCPREFIXDIR)/fpc-$(FPC_VERSION',
+  ')/$(INSTALL_FPCSUBDIR)/$(PACKAGE_NAME)'#010+
   'else'#010+
   'INSTALL_SOURCEDIR:=$(INSTALL_PREFIX)/$(SRCPREFIXDIR)/fpc-$(FPC_VERSION'+
   ')/$(PACKAGE_NAME)'#010+
@@ -693,8 +692,8 @@ const fpcmakeini : array[0..216,1..240] 
   'INSTALL_SOURCEDIR:=$(INSTALL_PREFIX)/$(SRCPREFIXDIR)/$(PACKAGE_NAME)-$'+
   '(PACKAGE_VERSION)'#010+
   'endif'#010+
-  'else'#010+
-  'ifdef IN','STALL_FPCPACKAGE'#010+
+  'els','e'#010+
+  'ifdef INSTALL_FPCPACKAGE'#010+
   'ifdef INSTALL_FPCSUBDIR'#010+
   'INSTALL_SOURCEDIR:=$(INSTALL_BASEDIR)/source/$(INSTALL_FPCSUBDIR)/$(PA'+
   'CKAGE_NAME)'#010+
@@ -702,7 +701,7 @@ const fpcmakeini : array[0..216,1..240] 
   'INSTALL_SOURCEDIR:=$(INSTALL_BASEDIR)/source/$(PACKAGE_NAME)'#010+
   'endif'#010+
   'else'#010+
-  'INSTALL_SOURCEDIR:=$(INSTALL_BASEDIR)/so','urce'#010+
+  'INSTALL_SOURCEDIR:=$(INSTALL_B','ASEDIR)/source'#010+
   'endif'#010+
   'endif'#010+
   'endif'#010+
@@ -719,16 +718,16 @@ const fpcmakeini : array[0..216,1..240] 
   'DOCPREFIXDIR=doc'#010+
   'endif'#010+
   'endif'#010+
-  'ifdef INSTALL_FPCPACKAGE'#010+
-  'IN','STALL_DOCDIR:=$(INSTALL_PREFIX)/$(DOCPREFIXDIR)/fpc-$(FPC_VERSION)'+
-  '/$(PACKAGE_NAME)'#010+
+  'ifdef INSTALL_FPC','PACKAGE'#010+
+  'INSTALL_DOCDIR:=$(INSTALL_PREFIX)/$(DOCPREFIXDIR)/fpc-$(FPC_VERSION)/$'+
+  '(PACKAGE_NAME)'#010+
   'else'#010+
   'INSTALL_DOCDIR:=$(INSTALL_PREFIX)/$(DOCPREFIXDIR)/$(PACKAGE_NAME)-$(PA'+
   'CKAGE_VERSION)'#010+
   'endif'#010+
   'else'#010+
   'ifdef INSTALL_FPCPACKAGE'#010+
-  'INSTALL_DOCDIR:=$(INSTALL_BASED','IR)/doc/$(PACKAGE_NAME)'#010+
+  'INSTALL_DOCDIR:=$(INS','TALL_BASEDIR)/doc/$(PACKAGE_NAME)'#010+
   'else'#010+
   'INSTALL_DOCDIR:=$(INSTALL_BASEDIR)/doc'#010+
   'endif'#010+
@@ -737,8 +736,8 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Where to install the examples, under linux we use the doc dir'#010+
   '# because the copytree command will create a subdir itself'#010+
-  'ifndef INSTALL_EXAMPLEDIR'#010+
-  'ifde','f UNIXHier'#010+
+  'ifndef INSTALL_EXAMP','LEDIR'#010+
+  'ifdef UNIXHier'#010+
   'ifdef INSTALL_FPCPACKAGE'#010+
   #010+
   'ifdef BSDhier'#010+
@@ -748,7 +747,7 @@ const fpcmakeini : array[0..216,1..240] 
   'ifdef linuxHier'#010+
   'INSTALL_EXAMPLEDIR:=$(INSTALL_DOCDIR)/examples'#010+
   'else'#010+
-  'INSTALL_EXAMPLEDIR:=$(INSTAL','L_PREFIX)/doc/fpc-$(FPC_VERSION)/example'+
+  'INSTALL_EXAMPLEDIR',':=$(INSTALL_PREFIX)/doc/fpc-$(FPC_VERSION)/example'+
   's/$(PACKAGE_NAME)'#010+
   'endif'#010+
   'endif'#010+
@@ -760,7 +759,7 @@ const fpcmakeini : array[0..216,1..240] 
   '(PACKAGE_VERSION)'#010+
   'else'#010+
   'ifdef linuxHier'#010+
-  'INSTALL_EXAMPLEDIR:=$(INSTALL_DOCDIR)/ex','amples/$(PACKAGE_NAME)-$(PAC'+
+  'INSTALL_EXAMPLEDIR:=$(INSTALL_','DOCDIR)/examples/$(PACKAGE_NAME)-$(PAC'+
   'KAGE_VERSION)'#010+
   'else'#010+
   'INSTALL_EXAMPLEDIR:=$(INSTALL_PREFIX)/doc/$(PACKAGE_NAME)-$(PACKAGE_VE'+
@@ -771,8 +770,8 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'else'#010+
   'ifdef INSTALL_FPCPACKAGE'#010+
-  'INSTALL_EXAMPLEDIR:=$(INSTALL_BASEDIR)/examples/$(PACKAGE_NAME)'#010+
-  'els','e'#010+
+  'INSTALL_EXAMPLEDIR:=$(INSTALL_BASEDIR)/examples/$(PACKAGE','_NAME)'#010+
+  'else'#010+
   'INSTALL_EXAMPLEDIR:=$(INSTALL_BASEDIR)/examples'#010+
   'endif'#010+
   'endif'#010+
@@ -784,7 +783,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   'ifndef INSTALL_SHAREDDIR'#010+
-  'INSTALL_SHAREDDIR=$(INSTALL_PRE','FIX)/lib'#010+
+  'INSTALL_SHAREDDIR=$(I','NSTALL_PREFIX)/lib'#010+
   'endif'#010+
   #010+
   '#####################################################################'#010+
@@ -792,12 +791,12 @@ const fpcmakeini : array[0..216,1..240] 
   '#####################################################################'#010+
   #010+
   'ifdef CROSSCOMPILE'#010+
-  '# Directory where the cross compile tools a','re stored.'#010+
+  '# Directory where the cross compi','le tools are stored.'#010+
   '# First check if they are available in FPCDIR. If no targets/ subdir'#010+
   '# is found use the targets/ subdir in INSTALL_BASEDIR.'#010+
   'ifndef CROSSBINDIR'#010+
   'CROSSBINDIR:=$(wildcard $(CROSSTARGETDIR)/bin/$(SOURCESUFFIX))'#010+
-  'ifeq ($(CROSSBINDIR),)'#010,
+  'ifeq ($(CROSS','BINDIR),)'#010+
   'CROSSBINDIR:=$(wildcard $(INSTALL_BASEDIR)/cross/$(TARGETSUFFIX)/bin/$'+
   '(FULL_SOURCE))'#010+
   'endif'#010+
@@ -812,8 +811,8 @@ const fpcmakeini : array[0..216,1..240] 
   'ifeq ($(OS_SOURCE),linux)'#010+
   #010+
   '# Amd64 to i386?'#010+
-  'ifndef GCCLIBDIR'#010+
-  'ife','q ($(CPU_TARGET),i386)'#010+
+  'ifndef GCC','LIBDIR'#010+
+  'ifeq ($(CPU_TARGET),i386)'#010+
   'ifneq ($(findstring x86_64,$(shell uname -a)),)'#010+
   'ifeq ($(BINUTILSPREFIX),)'#010+
   'GCCLIBDIR:=$(shell dirname `gcc -m32 -print-libgcc-file-name`)'#010+
@@ -821,8 +820,8 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   'ifeq ($(CPU_TARGET),powerpc64)'#010+
-  'ifeq ($(BINUTILSPREFIX),)'#010+
-  'GCCLI','BDIR:=$(shell dirname `gcc -m64 -print-libgcc-file-name`)'#010+
+  'ifeq ($(BINUTILSPREFI','X),)'#010+
+  'GCCLIBDIR:=$(shell dirname `gcc -m64 -print-libgcc-file-name`)'#010+
   'endif'#010+
   'endif'#010+
   'endif'#010+
@@ -832,7 +831,7 @@ const fpcmakeini : array[0..216,1..240] 
   'CROSSGCC=$(strip $(wildcard $(addsuffix /$(BINUTILSPREFIX)gcc$(SRCEXEE'+
   'XT),$(SEARCHPATH))))'#010+
   'ifneq ($(CROSSGCC),)'#010+
-  'GCCLIBDIR:=$(shell',' dirname `$(CROSSGCC) -print-libgcc-file-name`)'#010+
+  'GCCLIBDI','R:=$(shell dirname `$(CROSSGCC) -print-libgcc-file-name`)'#010+
   'endif'#010+
   'endif'#010+
   #010+
@@ -844,7 +843,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   'ifdef inUnix'#010+
-  'ifeq ($(OS_SOURCE)',',netbsd)'#010+
+  'ifeq ($(','OS_SOURCE),netbsd)'#010+
   'OTHERLIBDIR+=/usr/pkg/lib'#010+
   'endif'#010+
   'export GCCLIBDIR OTHERLIB'#010+
@@ -854,7 +853,7 @@ const fpcmakeini : array[0..216,1..240] 
   '[extensions]'#010+
   '#####################################################################'#010+
   '# Default extensions'#010+
-  '#############################################################','#######'+
+  '###################################################','#################'+
   '#'#010+
   #010+
   '# Default needed extensions (Go32v2,Linux)'#010+
@@ -870,7 +869,7 @@ const fpcmakeini : array[0..216,1..240] 
   'SHAREDLIBEXT=.so'#010+
   'SHAREDLIBPREFIX=libfp'#010+
   'STATICLIBPREFIX=libp'#010+
-  'IMPORTLIBPREFIX=','libimp'#010+
+  'IMPORT','LIBPREFIX=libimp'#010+
   'RSTEXT=.rst'#010+
   '# external debug info for executable'#010+
   'EXEDBGEXT=.dbg'#010+
@@ -883,8 +882,8 @@ const fpcmakeini : array[0..216,1..240] 
   'SHORTSUFFIX=v1'#010+
   'endif'#010+
   #010+
-  '# Go32v2'#010+
-  'ifeq',' ($(OS_TARGET),go32v2)'#010+
+  '# G','o32v2'#010+
+  'ifeq ($(OS_TARGET),go32v2)'#010+
   'STATICLIBPREFIX='#010+
   'SHORTSUFFIX=dos'#010+
   'IMPORTLIBPREFIX='#010+
@@ -901,18 +900,26 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# Linux'#010+
-  'ifeq ($(OS_TARGET),','linux)'#010+
+  'ifeq ($(O','S_TARGET),linux)'#010+
   'BATCHEXT=.sh'#010+
   'EXEEXT='#010+
   'HASSHAREDLIB=1'#010+
   'SHORTSUFFIX=lnx'#010+
   'endif'#010+
   #010+
+  '# DragonFly'#010+
+  'ifeq ($(OS_TARGET),dragonfly)'#010+
+  'BATCHEXT=.sh'#010+
+  'EXEEXT='#010+
+  'HASSHAREDLIB=1'#010+
+  'SHORTSUFFIX=df'#010+
+  'endif'#010+
+  #010+
   '# FreeBSD'#010+
   'ifeq ($(OS_TARGET),freebsd)'#010+
   'BATCHEXT=.sh'#010+
   'EXEEXT='#010+
-  'HASSHAREDLIB=1'#010+
+  'HASSH','AREDLIB=1'#010+
   'SHORTSUFFIX=fbs'#010+
   'endif'#010+
   #010+
@@ -921,7 +928,7 @@ const fpcmakeini : array[0..216,1..240] 
   'BATCHEXT=.sh'#010+
   'EXEEXT='#010+
   'HASSHAREDLIB=1'#010+
-  'SHORT','SUFFIX=nbs'#010+
+  'SHORTSUFFIX=nbs'#010+
   'endif'#010+
   #010+
   '# OpenBSD'#010+
@@ -933,7 +940,7 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# Win32'#010+
-  'ifeq ($(OS_TARGET),win32)'#010+
+  'ifeq ($','(OS_TARGET),win32)'#010+
   'SHAREDLIBEXT=.dll'#010+
   'SHORTSUFFIX=w32'#010+
   'endif'#010+
@@ -941,7 +948,7 @@ const fpcmakeini : array[0..216,1..240] 
   '# OS/2'#010+
   'ifeq ($(OS_TARGET),os2)'#010+
   'BATCHEXT=.cmd'#010+
-  'AOUTE','XT=.out'#010+
+  'AOUTEXT=.out'#010+
   'STATICLIBPREFIX='#010+
   'SHAREDLIBEXT=.dll'#010+
   'SHORTSUFFIX=os2'#010+
@@ -951,7 +958,7 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# EMX'#010+
   'ifeq ($(OS_TARGET),emx)'#010+
-  'BATCHEXT=.cmd'#010+
+  'BATCHEX','T=.cmd'#010+
   'AOUTEXT=.out'#010+
   'STATICLIBPREFIX='#010+
   'SHAREDLIBEXT=.dll'#010+
@@ -960,7 +967,7 @@ const fpcmakeini : array[0..216,1..240] 
   'IMPORTLIBPREFIX='#010+
   'endif'#010+
   #010+
-  '# Ami','ga'#010+
+  '# Amiga'#010+
   'ifeq ($(OS_TARGET),amiga)'#010+
   'EXEEXT='#010+
   'SHAREDLIBEXT=.library'#010+
@@ -970,7 +977,7 @@ const fpcmakeini : array[0..216,1..240] 
   '# MorphOS'#010+
   'ifeq ($(OS_TARGET),morphos)'#010+
   'EXEEXT='#010+
-  'SHAREDLIBEXT=.library'#010+
+  'SH','AREDLIBEXT=.library'#010+
   'SHORTSUFFIX=mos'#010+
   'endif'#010+
   #010+
@@ -978,7 +985,7 @@ const fpcmakeini : array[0..216,1..240] 
   'ifeq ($(OS_TARGET),atari)'#010+
   'EXEEXT=.ttp'#010+
   'SHORTSUFFIX=ata'#010+
-  'endif',#010+
+  'endif'#010+
   #010+
   '# BeOS'#010+
   'ifeq ($(OS_TARGET),beos)'#010+
@@ -990,7 +997,7 @@ const fpcmakeini : array[0..216,1..240] 
   '# Haiku'#010+
   'ifeq ($(OS_TARGET),haiku)'#010+
   'BATCHEXT=.sh'#010+
-  'EXEEXT='#010+
+  'EXEEXT','='#010+
   'SHORTSUFFIX=hai'#010+
   'endif'#010+
   #010+
@@ -1001,7 +1008,7 @@ const fpcmakeini : array[0..216,1..240] 
   'SHORTSUFFIX=sun'#010+
   'endif'#010+
   #010+
-  '# Q','NX'#010+
+  '# QNX'#010+
   'ifeq ($(OS_TARGET),qnx)'#010+
   'BATCHEXT=.sh'#010+
   'EXEEXT='#010+
@@ -1011,14 +1018,14 @@ const fpcmakeini : array[0..216,1..240] 
   '# Netware clib'#010+
   'ifeq ($(OS_TARGET),netware)'#010+
   'EXEEXT=.nlm'#010+
-  'STATICLIBPREFIX='#010+
+  'STAT','ICLIBPREFIX='#010+
   'SHORTSUFFIX=nw'#010+
   'IMPORTLIBPREFIX=imp'#010+
   'endif'#010+
   #010+
   '# Netware libc'#010+
   'ifeq ($(OS_TARGET),netwlibc)'#010+
-  'EXEEXT=.nlm',#010+
+  'EXEEXT=.nlm'#010+
   'STATICLIBPREFIX='#010+
   'SHORTSUFFIX=nwl'#010+
   'IMPORTLIBPREFIX=imp'#010+
@@ -1028,14 +1035,14 @@ const fpcmakeini : array[0..216,1..240] 
   'ifeq ($(OS_TARGET),macos)'#010+
   'BATCHEXT='#010+
   'EXEEXT='#010+
-  'DEBUGSYMEXT=.xcoff'#010+
+  'DEBUGSYMEXT=.xcof','f'#010+
   'SHORTSUFFIX=mac'#010+
   'IMPORTLIBPREFIX=imp'#010+
   'endif'#010+
   #010+
   '# Darwin'#010+
   'ifneq ($(findstring $(OS_TARGET),darwin iphonesim),)'#010+
-  'BAT','CHEXT=.sh'#010+
+  'BATCHEXT=.sh'#010+
   'EXEEXT='#010+
   'HASSHAREDLIB=1'#010+
   'SHORTSUFFIX=dwn'#010+
@@ -1045,7 +1052,7 @@ const fpcmakeini : array[0..216,1..240] 
   '# gba'#010+
   'ifeq ($(OS_TARGET),gba)'#010+
   'EXEEXT=.gba'#010+
-  'SHAREDLIBEXT=.so'#010+
+  'SHAREDLIBEXT=.so',#010+
   'SHORTSUFFIX=gba'#010+
   'endif'#010+
   #010+
@@ -1054,7 +1061,7 @@ const fpcmakeini : array[0..216,1..240] 
   'SHAREDLIBEXT=.dll'#010+
   'SHORTSUFFIX=symbian'#010+
   'endif'#010+
-  #010,
+  #010+
   '# NativeNT'#010+
   'ifeq ($(OS_TARGET),NativeNT)'#010+
   'SHAREDLIBEXT=.dll'#010+
@@ -1064,56 +1071,55 @@ const fpcmakeini : array[0..216,1..240] 
   '# wii'#010+
   'ifeq ($(OS_TARGET),wii)'#010+
   'EXEEXT=.dol'#010+
-  'SHAREDLIBEXT=.so'#010+
+  'SH','AREDLIBEXT=.so'#010+
   'SHORTSUFFIX=wii'#010+
   'endif'#010+
   #010+
   '# For 8.3 limited OS'#039's the short suffixes'#010+
-  '# Otherwise use the full sourc','e/target names'#010+
+  '# Otherwise use the full source/target names'#010+
   'ifneq ($(findstring $(OS_SOURCE),$(LIMIT83fs)),)'#010+
   'FPCMADE=fpcmade.$(SHORTSUFFIX)'#010+
   'ZIPSUFFIX=$(SHORTSUFFIX)'#010+
-  'ZIPCROSSPREFIX='#010+
+  'ZIPCROSSPR','EFIX='#010+
   'ZIPSOURCESUFFIX=src'#010+
   'ZIPEXAMPLESUFFIX=exm'#010+
   'else'#010+
   'FPCMADE=fpcmade.$(TARGETSUFFIX)'#010+
   'ZIPSOURCESUFFIX=.source'#010+
-  'ZI','PEXAMPLESUFFIX=.examples'#010+
+  'ZIPEXAMPLESUFFIX=.examples'#010+
   'ifdef CROSSCOMPILE'#010+
   'ZIPSUFFIX=.$(SOURCESUFFIX)'#010+
   'ZIPCROSSPREFIX=$(TARGETSUFFIX)-'#010+
   'else'#010+
-  'ZIPSUFFIX=.$(TARGETSUFFIX)'#010+
+  'ZIPSUFFIX=.$(TARGETSUF','FIX)'#010+
   'ZIPCROSSPREFIX='#010+
   'endif'#010+
   'endif'#010+
   #010+
   '[defaulttools]'#010+
-  '#############################################################','#######'+
-  '#'#010+
+  '#####################################################################'#010+
   '# Default Tools'#010+
   '#####################################################################'#010+
   #010+
   '# Names of the binutils tools'#010+
-  'ASNAME=$(BINUTILSPREFIX)as'#010+
+  'ASNA','ME=$(BINUTILSPREFIX)as'#010+
   'LDNAME=$(BINUTILSPREFIX)ld'#010+
   'ARNAME=$(BINUTILSPREFIX)ar'#010+
   'RCNAME=$(BINUTILSPREFIX)rc'#010+
   #010+
-  '# ass','embler, redefine it if cross compiling'#010+
+  '# assembler, redefine it if cross compiling'#010+
   'ifndef ASPROG'#010+
   'ifdef CROSSBINDIR'#010+
   'ASPROG=$(CROSSBINDIR)/$(ASNAME)$(SRCEXEEXT)'#010+
   'else'#010+
-  'ASPROG=$(ASNAME)'#010+
+  'ASPROG=$(A','SNAME)'#010+
   'endif'#010+
   'endif'#010+
   #010+
   '# linker, but probably not used'#010+
   'ifndef LDPROG'#010+
   'ifdef CROSSBINDIR'#010+
-  'LDPROG=$(CROSSBINDIR)/$(LD','NAME)$(SRCEXEEXT)'#010+
+  'LDPROG=$(CROSSBINDIR)/$(LDNAME)$(SRCEXEEXT)'#010+
   'else'#010+
   'LDPROG=$(LDNAME)'#010+
   'endif'#010+
@@ -1122,7 +1128,7 @@ const fpcmakeini : array[0..216,1..240] 
   '# Resource compiler'#010+
   'ifndef RCPROG'#010+
   'ifdef CROSSBINDIR'#010+
-  'RCPROG=$(CROSSBINDIR)/$(RCNAME)$(SRCEXEEXT)'#010+
+  'RCPROG=$(CROSSBINDIR)/$(R','CNAME)$(SRCEXEEXT)'#010+
   'else'#010+
   'RCPROG=$(RCNAME)'#010+
   'endif'#010+
@@ -1131,7 +1137,7 @@ const fpcmakeini : array[0..216,1..240] 
   '# Archiver'#010+
   'ifndef ARPROG'#010+
   'ifdef CROSSBINDIR'#010+
-  'ARPROG=$(CROS','SBINDIR)/$(ARNAME)$(SRCEXEEXT)'#010+
+  'ARPROG=$(CROSSBINDIR)/$(ARNAME)$(SRCEXEEXT)'#010+
   'else'#010+
   'ARPROG=$(ARNAME)'#010+
   'endif'#010+
@@ -1141,14 +1147,14 @@ const fpcmakeini : array[0..216,1..240] 
   'AS=$(ASPROG)'#010+
   'LD=$(LDPROG)'#010+
   'RC=$(RCPROG)'#010+
-  'AR=$(ARPROG)'#010+
+  'AR=$(','ARPROG)'#010+
   #010+
   '# ppas.bat / ppas.sh'#010+
   'PPAS=ppas$(SRCBATCHEXT)'#010+
   #010+
   '# ldconfig to rebuild .so cache'#010+
   'ifdef inUnix'#010+
-  'LDCONFIG=l','dconfig'#010+
+  'LDCONFIG=ldconfig'#010+
   'else'#010+
   'LDCONFIG='#010+
   'endif'#010+
@@ -1161,7 +1167,7 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Zip options'#010+
   'ZIPOPT=-9'#010+
-  'ZIPEXT=.zip'#010+
+  'ZIPEXT=.zi','p'#010+
   #010+
   '# Tar options'#010+
   'ifeq ($(USETAR),bz2)'#010+
@@ -1173,68 +1179,69 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   #010+
-  '[command','_begin]'#010+
+  '[command_begin]'#010+
   '#####################################################################'#010+
   '# Compiler Command Line'#010+
-  '#####################################################################'#010+
+  '############################','########################################'+
+  '#'#010+
   #010+
-  '# Load commandline OPTDEF and add FPC_CPU define, for compiling the',#010+
+  '# Load commandline OPTDEF and add FPC_CPU define, for compiling the'#010+
   '# compiler this needs to be turned off'#010+
   'ifndef NOCPUDEF'#010+
   'override FPCOPTDEF=$(ARCH)'#010+
   'endif'#010+
   #010+
   #010+
-  '# Load commandline OPT and add target and unit dir to be sure'#010+
+  '# Load commandline OPT and add target a','nd unit dir to be sure'#010+
   'ifneq ($(OS_TARGET),$(OS_SOURCE))'#010+
   'override FPCOPT+=-T$(OS_TARGET)'#010+
   'endif'#010+
   #010+
-  'ifneq ($(CPU_T','ARGET),$(CPU_SOURCE))'#010+
+  'ifneq ($(CPU_TARGET),$(CPU_SOURCE))'#010+
   'override FPCOPT+=-P$(ARCH)'#010+
   'endif'#010+
   #010+
   'ifeq ($(OS_SOURCE),openbsd)'#010+
   'override FPCOPT+=-FD$(NEW_BINUTILS_PATH)'#010+
-  'override FPCMAKEOPT+=-FD$(NEW_BINUTILS_PATH)'#010+
+  'overr','ide FPCMAKEOPT+=-FD$(NEW_BINUTILS_PATH)'#010+
   'endif'#010+
   #010+
   'ifndef CROSSBOOTSTRAP'#010+
   'ifneq ($(BINUTILSPREFIX),)'#010+
-  'override FPCOP','T+=-XP$(BINUTILSPREFIX)'#010+
+  'override FPCOPT+=-XP$(BINUTILSPREFIX)'#010+
   'endif'#010+
   'ifneq ($(BINUTILSPREFIX),)'#010+
   'override FPCOPT+=-Xr$(RLINKPATH)'#010+
   'endif'#010+
   'endif'#010+
   #010+
-  '# When BINUTILSPREFIX is given and we are not cross-compiling then use'+
-  #010+
-  '# it while compiling the fpmake file. (For example to build i386-f','re'+
-  'ebsd'#010+
+  '# When BINUTILSPREFIX is gi','ven and we are not cross-compiling then u'+
+  'se'#010+
+  '# it while compiling the fpmake file. (For example to build i386-freeb'+
+  'sd'#010+
   '# with BINUTILSPREFIX=i386-)'#010+
   'ifndef CROSSCOMPILE'#010+
   'ifneq ($(BINUTILSPREFIX),)'#010+
   'override FPCMAKEOPT+=-XP$(BINUTILSPREFIX)'#010+
-  'endif'#010+
+  'endif',#010+
   'endif'#010+
   #010+
   '# User dirs should be first, so they are looked at first'#010+
   'ifdef UNITDIR'#010+
-  'override FPCOPT+=$(addprefix -F','u,$(UNITDIR))'#010+
+  'override FPCOPT+=$(addprefix -Fu,$(UNITDIR))'#010+
   'endif'#010+
   'ifdef LIBDIR'#010+
   'override FPCOPT+=$(addprefix -Fl,$(LIBDIR))'#010+
   'endif'#010+
   'ifdef OBJDIR'#010+
-  'override FPCOPT+=$(addprefix -Fo,$(OBJDIR))'#010+
+  'override FPCOPT+=$(addprefix -Fo,$','(OBJDIR))'#010+
   'endif'#010+
   'ifdef INCDIR'#010+
   'override FPCOPT+=$(addprefix -Fi,$(INCDIR))'#010+
   'endif'#010+
   #010+
   '# Smartlinking'#010+
-  'ifdef LINKSMART',#010+
+  'ifdef LINKSMART'#010+
   'override FPCOPT+=-XX'#010+
   'endif'#010+
   #010+
@@ -1245,25 +1252,25 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Debug'#010+
   'ifdef DEBUG'#010+
-  'override FPCOPT+=-gl'#010+
+  'override FP','COPT+=-gl'#010+
   'override FPCOPTDEF+=DEBUG'#010+
   'endif'#010+
   #010+
   '# Release mode'#010+
   '# (strip, optimize and don'#039't load fpc.cfg)'#010+
-  '# fpc 2.1',' has -O2 for all targets'#010+
+  '# fpc 2.1 has -O2 for all targets'#010+
   'ifdef RELEASE'#010+
   'ifneq ($(findstring 2.0.,$(FPC_VERSION)),)'#010+
   'ifeq ($(CPU_TARGET),i386)'#010+
   'FPCCPUOPT:=-OG2p3'#010+
-  'endif'#010+
+  'endi','f'#010+
   'ifeq ($(CPU_TARGET),powerpc)'#010+
   'FPCCPUOPT:=-O1r'#010+
   'endif'#010+
   'else'#010+
   'FPCCPUOPT:=-O2'#010+
   'endif'#010+
-  'override FPCOPT+=-Ur -Xs $(FPCC','PUOPT) -n'#010+
+  'override FPCOPT+=-Ur -Xs $(FPCCPUOPT) -n'#010+
   'override FPCOPTDEF+=RELEASE'#010+
   'endif'#010+
   #010+
@@ -1274,7 +1281,7 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Optimizer'#010+
   'ifdef OPTIMIZE'#010+
-  'override FPCOPT+=-O2'#010+
+  'override F','PCOPT+=-O2'#010+
   'endif'#010+
   #010+
   '# Verbose settings (warning,note,info)'#010+
@@ -1282,56 +1289,56 @@ const fpcmakeini : array[0..216,1..240] 
   'override FPCOPT+=-vwni'#010+
   'endif'#010+
   #010+
-  '# Needed ','compiler options'#010+
+  '# Needed compiler options'#010+
   'ifdef COMPILER_OPTIONS'#010+
   'override FPCOPT+=$(COMPILER_OPTIONS)'#010+
   'endif'#010+
   'ifdef COMPILER_UNITDIR'#010+
-  'override FPCOPT+=$(addprefix -Fu,$(COMPILER_UNITDIR))'#010+
+  'override FPCOPT+=$(addpr','efix -Fu,$(COMPILER_UNITDIR))'#010+
   'endif'#010+
   'ifdef COMPILER_LIBRARYDIR'#010+
-  'override FPCOPT+=$(addprefix -Fl,$(COMPILER_LIBR','ARYDIR))'#010+
+  'override FPCOPT+=$(addprefix -Fl,$(COMPILER_LIBRARYDIR))'#010+
   'endif'#010+
   'ifdef COMPILER_OBJECTDIR'#010+
   'override FPCOPT+=$(addprefix -Fo,$(COMPILER_OBJECTDIR))'#010+
   'endif'#010+
   'ifdef COMPILER_INCLUDEDIR'#010+
-  'override FPCOPT+=$(addprefix -Fi,$(COMPILER_INCLUDEDIR))'#010+
+  'ov','erride FPCOPT+=$(addprefix -Fi,$(COMPILER_INCLUDEDIR))'#010+
   'endif'#010+
   #010+
   '# Cross compiler utils'#010+
   'ifdef CROSSBINDIR'#010+
-  'overrid','e FPCOPT+=-FD$(CROSSBINDIR)'#010+
+  'override FPCOPT+=-FD$(CROSSBINDIR)'#010+
   'endif'#010+
   #010+
   '# Target dirs and the prefix to use for clean/install'#010+
   'ifdef COMPILER_TARGETDIR'#010+
-  'override FPCOPT+=-FE$(COMPILER_TARGETDIR)'#010+
+  'override FPCOPT+','=-FE$(COMPILER_TARGETDIR)'#010+
   'ifeq ($(COMPILER_TARGETDIR),.)'#010+
   'override TARGETDIRPREFIX='#010+
   'else'#010+
-  'override TARGETDIRPREF','IX=$(COMPILER_TARGETDIR)/'#010+
+  'override TARGETDIRPREFIX=$(COMPILER_TARGETDIR)/'#010+
   'endif'#010+
   'endif'#010+
   #010+
   '# Unit target dir (default is units/<cpu>-<os>/'#010+
   'ifdef COMPILER_UNITTARGETDIR'#010+
-  'override FPCOPT+=-FU$(COMPILER_UNITTARGETDIR)'#010+
+  'override FPCOP','T+=-FU$(COMPILER_UNITTARGETDIR)'#010+
   'ifeq ($(COMPILER_UNITTARGETDIR),.)'#010+
   'override UNITTARGETDIRPREFIX='#010+
   'else'#010+
-  'override',' UNITTARGETDIRPREFIX=$(COMPILER_UNITTARGETDIR)/'#010+
+  'override UNITTARGETDIRPREFIX=$(COMPILER_UNITTARGETDIR)/'#010+
   'endif'#010+
   'else'#010+
   'ifdef COMPILER_TARGETDIR'#010+
-  'override COMPILER_UNITTARGETDIR=$(COMPILER_TARGETDIR)'#010+
+  'override COMPILER_UNITTARGETDIR=$(COMPILER_TAR','GETDIR)'#010+
   'override UNITTARGETDIRPREFIX=$(TARGETDIRPREFIX)'#010+
   'endif'#010+
   'endif'#010+
   #010+
   'ifdef CREATESHARED'#010+
   'override FPCOPT+=-Cg'#010+
-  #010,
+  #010+
   'ifeq ($(CPU_TARGET),i386)'#010+
   'override FPCOPT+=-Aas'#010+
   'endif'#010+
@@ -1339,10 +1346,10 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# create always pic'#039'ed code on x86_64'#010+
-  'ifeq ($(findstring 2.0.,$(FPC_VERSION)),)'#010+
-  'ifneq ($(findstring $(OS_TARGET),freebsd openbsd netbsd linux solaris)'+
-  ',)'#010+
-  'ifeq ($(CPU_TARGET),x86_6','4)'#010+
+  'ifeq ($(findstring 2.0.,$(FPC_','VERSION)),)'#010+
+  'ifneq ($(findstring $(OS_TARGET),dragonfly freebsd openbsd netbsd linu'+
+  'x solaris),)'#010+
+  'ifeq ($(CPU_TARGET),x86_64)'#010+
   'override FPCOPT+=-Cg'#010+
   'endif'#010+
   'endif'#010+
@@ -1353,25 +1360,25 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   #010+
-  '[command_libc]'#010+
+  '[com','mand_libc]'#010+
   '# Add GCC lib path if asked'#010+
   'ifdef GCCLIBDIR'#010+
   'override FPCOPT+=-Fl$(GCCLIBDIR)'#010+
   'endif'#010+
   'ifdef OTHERLIBDIR'#010+
-  'override',' FPCOPT+=$(addprefix -Fl,$(OTHERLIBDIR))'#010+
+  'override FPCOPT+=$(addprefix -Fl,$(OTHERLIBDIR))'#010+
   'endif'#010+
   #010+
   #010+
   '[command_end]'#010+
   '# Add commandline options last so they can override'#010+
-  'ifdef OPT'#010+
+  'ifdef',' OPT'#010+
   'override FPCOPT+=$(OPT)'#010+
   'endif'#010+
   #010+
   '# Add defines from FPCOPTDEF to FPCOPT'#010+
   'ifdef FPCOPTDEF'#010+
-  'override FPCOPT+=$(addprefix ','-d,$(FPCOPTDEF))'#010+
+  'override FPCOPT+=$(addprefix -d,$(FPCOPTDEF))'#010+
   'endif'#010+
   #010+
   '# Was a config file specified ?'#010+
@@ -1379,17 +1386,17 @@ const fpcmakeini : array[0..216,1..240] 
   'override FPCOPT+=@$(CFGFILE)'#010+
   'endif'#010+
   #010+
-  '# Use the environment to pass commandline options?'#010+
+  '# Use the envi','ronment to pass commandline options?'#010+
   'ifdef USEENV'#010+
   'override FPCEXTCMD:=$(FPCOPT)'#010+
   'override FPCOPT:=!FPCEXTCMD'#010+
-  'export FPCEX','TCMD'#010+
+  'export FPCEXTCMD'#010+
   'endif'#010+
   #010+
   'override AFULL_TARGET=$(CPU_TARGET)-$(OS_TARGET)'#010+
   'override AFULL_SOURCE=$(CPU_SOURCE)-$(OS_SOURCE)'#010+
   #010+
-  'ifneq ($(AFULL_TARGET),$(AFULL_SOURCE))'#010+
+  'ifneq ($(','AFULL_TARGET),$(AFULL_SOURCE))'#010+
   'override ACROSSCOMPILE=1'#010+
   'endif'#010+
   #010+
@@ -1397,15 +1404,15 @@ const fpcmakeini : array[0..216,1..240] 
   'override FPCOPT+=$(CROSSOPT)'#010+
   'endif'#010+
   #010+
-  '#',' Compiler commandline'#010+
+  '# Compiler commandline'#010+
   'override COMPILER:=$(FPC) $(FPCOPT)'#010+
   #010+
   '# also call ppas if with command option -s'#010+
-  '# but only if the FULL_SOURCE and FULL_TARGET are equal'#010+
+  '# but only if the ','FULL_SOURCE and FULL_TARGET are equal'#010+
   'ifeq (,$(findstring -s ,$(COMPILER)))'#010+
   'EXECPPAS='#010+
   'else'#010+
-  'ifeq ($(FULL_SOURCE),$(FULL_T','ARGET))'#010+
+  'ifeq ($(FULL_SOURCE),$(FULL_TARGET))'#010+
   'ifdef RUNBATCH'#010+
   'EXECPPAS:=@$(RUNBATCH) $(PPAS)'#010+
   'else'#010+
@@ -1416,184 +1423,184 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   #010+
   '[loaderrules]'#010+
-  '#####################################################################'#010+
-  '# Loaders'#010+
-  '################################################','####################'+
+  '########','############################################################'+
   '#'#010+
+  '# Loaders'#010+
+  '#####################################################################'#010+
   #010+
   '.PHONY: fpc_loaders'#010+
   #010+
   'ifneq ($(TARGET_LOADERS),)'#010+
   'override ALLTARGET+=fpc_loaders'#010+
-  'override CLEANTARGET+=fpc_loaders_clean'#010+
+  'override CLEANTAR','GET+=fpc_loaders_clean'#010+
   'override INSTALLTARGET+=fpc_loaders_install'#010+
   #010+
-  'override LOADEROFILES:=$(addsuffix $(OEXT),$(TARGET_','LOADERS))'#010+
+  'override LOADEROFILES:=$(addsuffix $(OEXT),$(TARGET_LOADERS))'#010+
   'endif'#010+
   #010+
   '%$(OEXT): %$(LOADEREXT)'#010+
   'ifdef COMPILER_UNITTARGETDIR'#010+
-  '        $(AS) -o $(COMPILER_UNITTARGETDIR)/$*$(OEXT) $<'#010+
+  '        $(AS) -o $(COMPILER_UNITTARGETDIR)/$*$(OEX','T) $<'#010+
   'else'#010+
   '        $(AS) -o $*$(OEXT) $<'#010+
   'endif'#010+
   #010+
   'fpc_loaders: $(COMPILER_UNITTARGETDIR) $(LOADEROFILES)'#010+
   #010+
-  'fpc_loaders_clea','n:'#010+
+  'fpc_loaders_clean:'#010+
   'ifdef COMPILER_UNITTARGETDIR'#010+
   '        -$(DEL) $(addprefix $(COMPILER_UNITTARGETDIR)/,$(LOADEROFILES)'+
   ')'#010+
   'else'#010+
-  '        -$(DEL) $(LOADEROFILES)'#010+
+  '        -$(','DEL) $(LOADEROFILES)'#010+
   'endif'#010+
   #010+
   'fpc_loaders_install:'#010+
   '        $(MKDIR) $(INSTALL_UNITDIR)'#010+
   'ifdef COMPILER_UNITTARGETDIR'#010+
-  '      ','  $(INSTALL) $(addprefix $(COMPILER_UNITTARGETDIR)/,$(LOADEROF'+
-  'ILES)) $(INSTALL_UNITDIR)'#010+
+  '        $(INSTALL) $(addprefix $(COMPILER_UNITTARGETDIR)/,$(LOADEROFIL'+
+  'ES)) $(INSTALL_UNITDIR)'#010+
   'else'#010+
-  '        $(INSTALL) $(LOADEROFILES) $(INSTALL_UNITDIR)'#010+
+  '        $(INSTALL) $(LOADER','OFILES) $(INSTALL_UNITDIR)'#010+
   'endif'#010+
   #010+
   #010+
   '[unitrules]'#010+
   '#####################################################################'#010+
-  '# U','nits'#010+
+  '# Units'#010+
   '#####################################################################'#010+
   #010+
   '.PHONY: fpc_units'#010+
   #010+
-  'ifneq ($(TARGET_UNITS)$(TARGET_IMPLICITUNITS),)'#010+
+  'ifneq ($(TARGET_UNITS)$(T','ARGET_IMPLICITUNITS),)'#010+
   'override ALLTARGET+=fpc_units'#010+
   #010+
   'override UNITPPUFILES=$(addsuffix $(PPUEXT),$(TARGET_UNITS))'#010+
-  'overr','ide IMPLICITUNITPPUFILES=$(addsuffix $(PPUEXT),$(TARGET_IMPLICI'+
-  'TUNITS))'#010+
-  'override INSTALLPPUFILES+=$(UNITPPUFILES) $(IMPLICITUNITPPUFILES)'#010+
+  'override IMPLICITUNITPPUFILES=$(addsuffix $(PPUEXT),$(TARGET_IMPLICITU'+
+  'NITS))'#010+
+  'override INSTALLPPUFILES+=$(UNITPPUFILES) $(IMPL','ICITUNITPPUFILES)'#010+
   'override CLEANPPUFILES+=$(UNITPPUFILES) $(IMPLICITUNITPPUFILES)'#010+
   'endif'#010+
   #010+
-  'fpc_units: $(COMPILER_UNITTARGE','TDIR) $(UNITPPUFILES)'#010+
+  'fpc_units: $(COMPILER_UNITTARGETDIR) $(UNITPPUFILES)'#010+
   #010+
   #010+
   '[exerules]'#010+
   '#####################################################################'#010+
   '# Exes'#010+
-  '#####################################################################'#010+
+  '########','############################################################'+
+  '#'#010+
   #010+
   '.PHONY: fpc_exes'#010+
   #010+
-  '# Programs are not needed for a cross i','nstallation'#010+
+  '# Programs are not needed for a cross installation'#010+
   'ifndef CROSSINSTALL'#010+
   'ifneq ($(TARGET_PROGRAMS),)'#010+
-  'override EXEFILES=$(addsuffix $(EXEEXT),$(TARGET_PROGRAMS))'#010+
+  'override EXEFILES=$(addsuffix $(EXEEXT),$(TARGET_PROGRAMS))'#010,
   'override EXEOFILES:=$(addsuffix $(OEXT),$(TARGET_PROGRAMS)) $(addprefi'+
-  'x $(STATICLIBPREFIX),$(addsuffix $(STATICLIBEXT),$','(TARGET_PROGRAMS))'+
-  ') $(addprefix $(IMPORTLIBPREFIX),$(addsuffix $(STATICLIBEXT),$(TARGET_'+
-  'PROGRAMS)))'#010+
-  'override EXEDBGFILES:=$(addsuffix $(EXEDBGEXT),$(TARGET_PROGRAMS))'#010+
+  'x $(STATICLIBPREFIX),$(addsuffix $(STATICLIBEXT),$(TARGET_PROGRAMS))) '+
+  '$(addprefix $(IMPORTLIBPREFIX),$(addsuffix $(STATICLIBEXT),$(TARGET_PR'+
+  'OGRAMS)))'#010+
+  'override EXEDBGFILES',':=$(addsuffix $(EXEDBGEXT),$(TARGET_PROGRAMS))'#010+
   #010+
   'override ALLTARGET+=fpc_exes'#010+
   'override INSTALLEXEFILES+=$(EXEFILES)'#010+
-  'overr','ide CLEANEXEFILES+=$(EXEFILES) $(EXEOFILES)'#010+
+  'override CLEANEXEFILES+=$(EXEFILES) $(EXEOFILES)'#010+
   'override CLEANEXEDBGFILES+=$(EXEDBGFILES)'#010+
   'ifeq ($(OS_TARGET),os2)'#010+
-  'override CLEANEXEFILES+=$(addsuffix $(AOUTEXT),$(TARGET_PROGRAMS))'#010+
+  'override C','LEANEXEFILES+=$(addsuffix $(AOUTEXT),$(TARGET_PROGRAMS))'#010+
   'endif'#010+
   'ifeq ($(OS_TARGET),emx)'#010+
-  'override CLEANEXEFILES+=$(addsuff','ix $(AOUTEXT),$(TARGET_PROGRAMS))'#010+
+  'override CLEANEXEFILES+=$(addsuffix $(AOUTEXT),$(TARGET_PROGRAMS))'#010+
   'endif'#010+
   'endif'#010+
   'endif'#010+
   #010+
-  'fpc_exes: $(COMPILER_TARGETDIR) $(COMPILER_UNITTARGETDIR) $(EXEFILES)'#010+
+  'fpc_exes: $(COMPILER_TARGETDIR) $(COMPILER_UNITTARGETDIR) $(EXEFILE','S'+
+  ')'#010+
   #010+
   #010+
   '[rstrules]'#010+
   '#####################################################################'#010+
   '# Resource strings'#010+
-  '###############','#####################################################'+
-  '#'#010+
+  '#####################################################################'#010+
   #010+
   'ifdef TARGET_RSTS'#010+
-  'override RSTFILES=$(addsuffix $(RSTEXT),$(TARGET_RSTS))'#010+
+  'override RSTFILES=$(addsuffix $(RSTEXT),$(TARG','ET_RSTS))'#010+
   #010+
   'override CLEANRSTFILES+=$(RSTFILES)'#010+
   'endif'#010+
   #010+
   #010+
   '[examplerules]'#010+
-  '##################################################','##################'+
-  '#'#010+
+  '#####################################################################'#010+
   '# Examples'#010+
   '#####################################################################'#010+
   #010+
-  '.PHONY: fpc_examples'#010+
+  '.PHONY: fpc_exampl','es'#010+
   #010+
   'ifneq ($(TARGET_EXAMPLES),)'#010+
   'HASEXAMPLES=1'#010+
   'override EXAMPLESOURCEFILES:=$(wildcard $(addsuffix .pp,$(TARGET_EXAMP'+
-  'LES)',') $(addsuffix .pas,$(TARGET_EXAMPLES)) $(addsuffix .lpr,$(TARGET'+
-  '_EXAMPLES)) $(addsuffix .dpr,$(TARGET_EXAMPLES)))'#010+
-  'override EXAMPLEFILES:=$(addsuffix $(EXEEXT),$(TARGET_EXAMPLES))'#010+
-  'override EXAMPLEOFILES:=$(addsuffix $(OEXT),$(TARGET_EXAMPLES',')) $(ad'+
-  'dprefix $(STATICLIBPREFIX),$(addsuffix $(STATICLIBEXT),$(TARGET_EXAMPL'+
-  'ES))) $(addprefix $(IMPORTLIBPREFIX),$(addsuffix $(STATICLIBEXT),$(TAR'+
+  'LES)) $(addsuffix .pas,$(TARGET_EXAMPLES)) $(addsuffix .lpr,$(TARGET_E'+
+  'XAMPLES)) $(addsuffix .dpr,$(TARGET_EXAMPLES)))'#010+
+  'overri','de EXAMPLEFILES:=$(addsuffix $(EXEEXT),$(TARGET_EXAMPLES))'#010+
+  'override EXAMPLEOFILES:=$(addsuffix $(OEXT),$(TARGET_EXAMPLES)) $(addp'+
+  'refix $(STATICLIBPREFIX),$(addsuffix $(STATICLIBEXT),$(TARGET_EXAMPLES'+
+  '))) $(addprefix $(IMPORTLIBPREFIX),$(adds','uffix $(STATICLIBEXT),$(TAR'+
   'GET_EXAMPLES)))'#010+
   'override EXAMPLEDBGFILES:=$(addsuffix $(EXEDBGEXT),$(TARGET_EXAMPLES))'+
   #010+
   #010+
-  'overr','ide CLEANEXEFILES+=$(EXAMPLEFILES) $(EXAMPLEOFILES)'#010+
+  'override CLEANEXEFILES+=$(EXAMPLEFILES) $(EXAMPLEOFILES)'#010+
   'override CLEANEXEDBGFILES+=$(EXAMPLEDBGFILES)'#010+
-  'ifeq ($(OS_TARGET),os2)'#010+
+  'ifeq ($(OS_TARGET),os2',')'#010+
   'override CLEANEXEFILES+=$(addsuffix $(AOUTEXT),$(TARGET_EXAMPLES))'#010+
   'endif'#010+
   'ifeq ($(OS_TARGET),emx)'#010+
-  'override CLEANEXEFILE','S+=$(addsuffix $(AOUTEXT),$(TARGET_EXAMPLES))'#010+
+  'override CLEANEXEFILES+=$(addsuffix $(AOUTEXT),$(TARGET_EXAMPLES))'#010+
   'endif'#010+
   'endif'#010+
   'ifneq ($(TARGET_EXAMPLEDIRS),)'#010+
   'HASEXAMPLES=1'#010+
   'endif'#010+
   #010+
-  'fpc_examples: all $(EXAMPLEFILES) $(addsuffix _all,$(TARGET_EXAMPLEDIR'+
-  'S))'#010+
+  'fpc_exampl','es: all $(EXAMPLEFILES) $(addsuffix _all,$(TARGET_EXAMPLED'+
+  'IRS))'#010+
   #010+
   #010+
   '[compilerules]'#010+
-  '#######################################','#############################'+
-  '#'#010+
-  '# General compile rules'#010+
   '#####################################################################'#010+
+  '# General compile rules'#010+
+  '#################################################################','###'+
+  '#'#010+
   #010+
   '.PHONY: fpc_all fpc_smart fpc_debug fpc_release fpc_shared'#010+
   #010+
   '$(FPCMADE): $(ALLDEPENDENCIES) $(ALLTARGET)'#010+
-  '        @$','(ECHOREDIR) Compiled > $(FPCMADE)'#010+
+  '        @$(ECHOREDIR) Compiled > $(FPCMADE)'#010+
   #010+
   'fpc_all: $(FPCMADE)'#010+
   #010+
   'fpc_smart:'#010+
   '        $(MAKE) all LINKSMART=1 CREATESMART=1'#010+
   #010+
-  'fpc_debug:'#010+
+  'fpc_de','bug:'#010+
   '        $(MAKE) all DEBUG=1'#010+
   #010+
   'fpc_release:'#010+
   '        $(MAKE) all RELEASE=1'#010+
   #010+
-  '# General compile rules, available for bot','h possible .pp and .pas ex'+
-  'tensions'#010+
+  '# General compile rules, available for both possible .pp and .pas exte'+
+  'nsions'#010+
   #010+
   '.SUFFIXES: $(EXEEXT) $(PPUEXT) $(OEXT) .pas .lpr .dpr .pp .rc .res'#010+
   #010+
-  '$(COMPILER_UNITTARGETDIR):'#010+
+  '$(COMPILER_UNITT','ARGETDIR):'#010+
   '        $(MKDIRTREE) $(COMPILER_UNITTARGETDIR)'#010+
   #010+
   '$(COMPILER_TARGETDIR):'#010+
-  '        $(MKDIRTREE) $(COMPILER_TARGET','DIR)'#010+
+  '        $(MKDIRTREE) $(COMPILER_TARGETDIR)'#010+
   #010+
   '%$(PPUEXT): %.pp'#010+
   '        $(COMPILER) $<'#010+
@@ -1601,7 +1608,7 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '%$(PPUEXT): %.pas'#010+
   '        $(COMPILER) $<'#010+
-  '        $(EXECPPAS)'#010+
+  '        $(EX','ECPPAS)'#010+
   #010+
   '%$(EXEEXT): %.pp'#010+
   '        $(COMPILER) $<'#010+
@@ -1609,7 +1616,7 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '%$(EXEEXT): %.pas'#010+
   '        $(COMPILER) $<'#010+
-  '        $','(EXECPPAS)'#010+
+  '        $(EXECPPAS)'#010+
   #010+
   '%$(EXEEXT): %.lpr'#010+
   '        $(COMPILER) $<'#010+
@@ -1617,32 +1624,32 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '%$(EXEEXT): %.dpr'#010+
   '        $(COMPILER) $<'#010+
-  '        $(EXECPPAS)'#010+
+  '     ','   $(EXECPPAS)'#010+
   #010+
   '%.res: %.rc'#010+
   '        windres -i $< -o $@'#010+
   #010+
   '# Search paths for .ppu, .pp, .pas, .lpr, .dpr'#010+
-  'vpath %.pp $(COM','PILER_SOURCEDIR) $(COMPILER_INCLUDEDIR)'#010+
+  'vpath %.pp $(COMPILER_SOURCEDIR) $(COMPILER_INCLUDEDIR)'#010+
   'vpath %.pas $(COMPILER_SOURCEDIR) $(COMPILER_INCLUDEDIR)'#010+
-  'vpath %.lpr $(COMPILER_SOURCEDIR) $(COMPILER_INCLUDEDIR)'#010+
+  'vpath %.lpr $(COMPILER_','SOURCEDIR) $(COMPILER_INCLUDEDIR)'#010+
   'vpath %.dpr $(COMPILER_SOURCEDIR) $(COMPILER_INCLUDEDIR)'#010+
-  'vpath %.inc $(COMPILER_INCLUD','EDIR)'#010+
+  'vpath %.inc $(COMPILER_INCLUDEDIR)'#010+
   'vpath %$(OEXT) $(COMPILER_UNITTARGETDIR)'#010+
   'vpath %$(PPUEXT) $(COMPILER_UNITTARGETDIR)'#010+
   #010+
   '[sharedrules]'#010+
-  '#####################################################################'#010+
-  '# Library'#010+
-  '#######################################################','#############'+
+  '###############','#####################################################'+
   '#'#010+
+  '# Library'#010+
+  '#####################################################################'#010+
   #010+
   '.PHONY: fpc_shared'#010+
   #010+
   'override INSTALLTARGET+=fpc_shared_install'#010+
   #010+
   'ifndef SHARED_LIBVERSION'#010+
-  'SHARED_LIBVERSION=$(FPC_VERSION)'#010+
+  'SHARED_LIBVERSI','ON=$(FPC_VERSION)'#010+
   'endif'#010+
   #010+
   'ifndef SHARED_LIBNAME'#010+
@@ -1650,159 +1657,160 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   'ifndef SHARED_FULLNAME'#010+
-  'SHARED_FULLN','AME=$(SHAREDLIBPREFIX)$(SHARED_LIBNAME)-$(SHARED_LIBVERS'+
-  'ION)$(SHAREDLIBEXT)'#010+
+  'SHARED_FULLNAME=$(SHAREDLIBPREFIX)$(SHARED_LIBNAME)-$(SHARED_LIBVERSIO'+
+  'N)$(SHAREDLIBEXT)'#010+
   'endif'#010+
   #010+
-  '# Default sharedlib units are all unit objects'#010+
+  '# Default sharedlib units are all uni','t objects'#010+
   'ifndef SHARED_LIBUNITS'#010+
   'SHARED_LIBUNITS:=$(TARGET_UNITS) $(TARGET_IMPLICITUNITS)'#010+
-  'override SHARED_LIBUNITS:=$(fi','lter-out $(INSTALL_BUILDUNIT),$(SHARED'+
-  '_LIBUNITS))'#010+
+  'override SHARED_LIBUNITS:=$(filter-out $(INSTALL_BUILDUNIT),$(SHARED_L'+
+  'IBUNITS))'#010+
   'endif'#010+
   #010+
   'fpc_shared:'#010+
   'ifdef HASSHAREDLIB'#010+
-  '        $(MAKE) all CREATESHARED=1 LINKSHARED=1 CREATESMART=1'#010+
+  '        $(MAKE) all CREATESHARED','=1 LINKSHARED=1 CREATESMART=1'#010+
   'ifneq ($(SHARED_BUILD),n)'#010+
-  '        $(PPUMOVE) -q $(SHARED_LIBUNITS) -i$(COMPILER_UNITTARGET','DIR)'+
-  ' -o$(SHARED_FULLNAME) -d$(COMPILER_UNITTARGETDIR)'#010+
+  '        $(PPUMOVE) -q $(SHARED_LIBUNITS) -i$(COMPILER_UNITTARGETDIR) -'+
+  'o$(SHARED_FULLNAME) -d$(COMPILER_UNITTARGETDIR)'#010+
   'endif'#010+
   'else'#010+
   '        @$(ECHO) Shared Libraries not supported'#010+
   'endif'#010+
-  #010+
+  #010,
   'fpc_shared_install:'#010+
   'ifneq ($(SHARED_BUILD),n)'#010+
   'ifneq ($(SHARED_LIBUNITS),)'#010+
-  'ifneq ($(wildcard $(COMPILER_UNITTARGETDIR)/$(','SHARED_FULLNAME)),)'#010+
+  'ifneq ($(wildcard $(COMPILER_UNITTARGETDIR)/$(SHARED_FULLNAME)),)'#010+
   '        $(INSTALL) $(COMPILER_UNITTARGETDIR)/$(SHARED_FULLNAME) $(INST'+
   'ALL_SHAREDDIR)'#010+
   'endif'#010+
   'endif'#010+
-  'endif'#010+
+  'end','if'#010+
   #010+
   '[installrules]'#010+
   '#####################################################################'#010+
   '# Install rules'#010+
-  '###############','#####################################################'+
-  '#'#010+
+  '#####################################################################'#010+
   #010+
   '.PHONY: fpc_install fpc_sourceinstall fpc_exampleinstall'#010+
   #010+
-  'ifdef INSTALL_UNITS'#010+
+  'ifdef ','INSTALL_UNITS'#010+
   'override INSTALLPPUFILES+=$(addsuffix $(PPUEXT),$(INSTALL_UNITS))'#010+
   'endif'#010+
   #010+
   'ifdef INSTALL_BUILDUNIT'#010+
-  'override ','INSTALLPPUFILES:=$(filter-out $(INSTALL_BUILDUNIT)$(PPUEXT)'+
-  ',$(INSTALLPPUFILES))'#010+
+  'override INSTALLPPUFILES:=$(filter-out $(INSTALL_BUILDUNIT)$(PPUEXT),$'+
+  '(INSTALLPPUFILES))'#010+
   'endif'#010+
   #010+
   'ifdef INSTALLPPUFILES'#010+
-  'override INSTALLPPULINKFILES:=$(subst $(PPUEXT),$(OEXT),$(INSTALLPPUFI'+
-  'LES)) $(addprefix $(STATICLIBPREFIX),$(subst $(PPUEXT),$(STAT','ICLIBEX'+
+  'override IN','STALLPPULINKFILES:=$(subst $(PPUEXT),$(OEXT),$(INSTALLPPU'+
+  'FILES)) $(addprefix $(STATICLIBPREFIX),$(subst $(PPUEXT),$(STATICLIBEX'+
   'T),$(INSTALLPPUFILES))) $(addprefix $(IMPORTLIBPREFIX),$(subst $(PPUEX'+
   'T),$(STATICLIBEXT),$(INSTALLPPUFILES)))'#010+
-  'ifneq ($(UNITTARGETDIRPREFIX),)'#010+
+  'ifn','eq ($(UNITTARGETDIRPREFIX),)'#010+
   'override INSTALLPPUFILES:=$(addprefix $(UNITTARGETDIRPREFIX),$(notdir '+
-  '$(INSTALLPPUFILES)))'#010,
+  '$(INSTALLPPUFILES)))'#010+
   'override INSTALLPPULINKFILES:=$(wildcard $(addprefix $(UNITTARGETDIRPR'+
   'EFIX),$(notdir $(INSTALLPPULINKFILES))))'#010+
   'endif'#010+
-  '# Implicitly install Package.fpc'#010+
+  '# I','mplicitly install Package.fpc'#010+
   'override INSTALL_CREATEPACKAGEFPC=1'#010+
   'endif'#010+
   #010+
   'ifdef INSTALLEXEFILES'#010+
-  'ifneq ($(TARGETDIRPREFIX)',',)'#010+
+  'ifneq ($(TARGETDIRPREFIX),)'#010+
   'override INSTALLEXEFILES:=$(addprefix $(TARGETDIRPREFIX),$(notdir $(IN'+
   'STALLEXEFILES)))'#010+
   'endif'#010+
   'endif'#010+
   #010+
-  'fpc_install: all $(INSTALLTARGET)'#010+
+  'fpc_install: all ','$(INSTALLTARGET)'#010+
   'ifdef INSTALLEXEFILES'#010+
   '        $(MKDIR) $(INSTALL_BINDIR)'#010+
-  '        $(INSTALLEXE) $(INSTALLEXEFILES) $(INS','TALL_BINDIR)'#010+
+  '        $(INSTALLEXE) $(INSTALLEXEFILES) $(INSTALL_BINDIR)'#010+
   'endif'#010+
   'ifdef INSTALL_CREATEPACKAGEFPC'#010+
   'ifdef FPCMAKE'#010+
-  '# If the fpcpackage variable is set then create and install Package.fp'+
-  'c,'#010+
+  '# If the fpcpackage variable is set then create and inst','all Package.'+
+  'fpc,'#010+
   '# a safety check is done if Makefile.fpc is available'#010+
   'ifdef PACKAGE_VERSION'#010+
-  'ifneq ($(wildcard Makefile.','fpc),)'#010+
+  'ifneq ($(wildcard Makefile.fpc),)'#010+
   '        $(FPCMAKE) -p -T$(CPU_TARGET)-$(OS_TARGET) Makefile.fpc'#010+
   '        $(MKDIR) $(INSTALL_UNITDIR)'#010+
-  '        $(INSTALL) Package.fpc $(INSTALL_UNITDIR)'#010+
+  '        $(INS','TALL) Package.fpc $(INSTALL_UNITDIR)'#010+
   'endif'#010+
   'endif'#010+
   'endif'#010+
   'endif'#010+
   'ifdef INSTALLPPUFILES'#010+
   '        $(MKDIR) $(INSTALL_UNITDIR)'#010+
-  ' ','       $(INSTALL) $(INSTALLPPUFILES) $(INSTALL_UNITDIR)'#010+
+  '        $(INSTALL) $(INSTALLPPUFILES) $(INSTALL_UNITDIR)'#010+
   'ifneq ($(INSTALLPPULINKFILES),)'#010+
-  '        $(INSTALL) $(INSTALLPPULINKFILES) $(INSTALL_UNITDIR)'#010+
+  '        $(INSTALL) $(INSTALLPPUL','INKFILES) $(INSTALL_UNITDIR)'#010+
   'endif'#010+
   'ifneq ($(wildcard $(LIB_FULLNAME)),)'#010+
   '        $(MKDIR) $(INSTALL_LIBDIR)'#010+
-  '        $(INS','TALL) $(LIB_FULLNAME) $(INSTALL_LIBDIR)'#010+
+  '        $(INSTALL) $(LIB_FULLNAME) $(INSTALL_LIBDIR)'#010+
   'ifdef inUnix'#010+
   '        ln -sf $(LIB_FULLNAME) $(INSTALL_LIBDIR)/$(LIB_NAME)'#010+
-  'endif'#010+
+  'endif'#010,
   'endif'#010+
   'endif'#010+
   'ifdef INSTALL_FILES'#010+
   '        $(MKDIR) $(INSTALL_DATADIR)'#010+
-  '        $(INSTALL) $(INSTALL_FILES) $(INSTALL_DATADI','R)'#010+
+  '        $(INSTALL) $(INSTALL_FILES) $(INSTALL_DATADIR)'#010+
   'endif'#010+
   #010+
   'fpc_sourceinstall: distclean'#010+
   '        $(MKDIR) $(INSTALL_SOURCEDIR)'#010+
-  '        $(COPYTREE) $(BASEDIR)/* $(INSTALL_SOURCEDIR)'#010+
+  '        $(COPYTREE) $(BASEDIR)/* $(INSTALL_','SOURCEDIR)'#010+
   #010+
   'fpc_exampleinstall: $(addsuffix _distclean,$(TARGET_EXAMPLEDIRS))'#010+
   'ifdef HASEXAMPLES'#010+
-  '        $(MKDIR) $(INSTA','LL_EXAMPLEDIR)'#010+
+  '        $(MKDIR) $(INSTALL_EXAMPLEDIR)'#010+
   'endif'#010+
   'ifdef EXAMPLESOURCEFILES'#010+
   '        $(COPY) $(EXAMPLESOURCEFILES) $(INSTALL_EXAMPLEDIR)'#010+
   'endif'#010+
-  'ifdef TARGET_EXAMPLEDIRS'#010+
+  'ifdef TA','RGET_EXAMPLEDIRS'#010+
   '        $(COPYTREE) $(addsuffix /*,$(TARGET_EXAMPLEDIRS)) $(INSTALL_EX'+
   'AMPLEDIR)'#010+
   'endif'#010+
   #010+
-  '[distinstallrule','s]'#010+
+  '[distinstallrules]'#010+
   '#####################################################################'#010+
   '# Dist Install'#010+
-  '#####################################################################'#010+
+  '################################','####################################'+
+  '#'#010+
   #010+
   '.PHONY: fpc_distinstall'#010+
   #010+
   'fpc_distinstall: install exampleinstall'#010+
   #010+
   #010+
-  '[zipinstallrul','es]'#010+
+  '[zipinstallrules]'#010+
   '#####################################################################'#010+
   '# Zip'#010+
-  '#####################################################################'#010+
+  '########################################','############################'+
+  '#'#010+
   #010+
   '.PHONY: fpc_zipinstall fpc_zipsourceinstall fpc_zipexampleinstall'#010+
   #010+
-  '# Temporary path to pa','ck a file, can only use a single deep'#010+
+  '# Temporary path to pack a file, can only use a single deep'#010+
   '# subdir, because the deltree can'#039't see the whole tree to remove'#010+
   'ifndef PACKDIR'#010+
-  'ifndef inUnix'#010+
+  'if','ndef inUnix'#010+
   'PACKDIR=$(BASEDIR)/../fpc-pack'#010+
   'else'#010+
   'PACKDIR=/tmp/fpc-pack'#010+
   'endif'#010+
   'endif'#010+
   #010+
-  '# Maybe create default zipname from p','ackagename'#010+
+  '# Maybe create default zipname from packagename'#010+
   'ifndef ZIPNAME'#010+
   'ifdef DIST_ZIPNAME'#010+
   'ZIPNAME=$(DIST_ZIPNAME)'#010+
@@ -1811,13 +1819,13 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'endif'#010+
   #010+
-  'ifndef FULLZIPNAME'#010+
+  'ifndef FU','LLZIPNAME'#010+
   'FULLZIPNAME=$(ZIPCROSSPREFIX)$(ZIPPREFIX)$(ZIPNAME)$(ZIPSUFFIX)'#010+
   'endif'#010+
   #010+
   '# ZipTarget'#010+
   'ifndef ZIPTARGET'#010+
-  'ifdef DIST','_ZIPTARGET'#010+
+  'ifdef DIST_ZIPTARGET'#010+
   'ZIPTARGET=DIST_ZIPTARGET'#010+
   'else'#010+
   'ZIPTARGET=install'#010+
@@ -1826,7 +1834,7 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   '# Use tar by default under linux'#010+
   'ifndef USEZIP'#010+
-  'ifdef inUnix'#010+
+  'i','fdef inUnix'#010+
   'USETAR=1'#010+
   'endif'#010+
   'endif'#010+
@@ -1836,173 +1844,173 @@ const fpcmakeini : array[0..216,1..240] 
   'USEZIPWRAPPER=1'#010+
   'endif'#010+
   #010+
-  '# We n','eed to be able to run in the current OS so fix'#010+
+  '# We need to be able to run in the current OS so fix'#010+
   '# the path separator'#010+
   'ifdef USEZIPWRAPPER'#010+
   'ZIPPATHSEP=$(PATHSEP)'#010+
-  'ZIPWRAPPER=$(subst /,$(PATHSEP),$(DIST_DESTDIR)/fpczip$(SRCBATCHEXT))'#010+
+  'ZIPWRAPPER','=$(subst /,$(PATHSEP),$(DIST_DESTDIR)/fpczip$(SRCBATCHEXT)'+
+  ')'#010+
   'else'#010+
   'ZIPPATHSEP=/'#010+
   'endif'#010+
   #010+
-  '# Create commands to create the zip','/tar file'#010+
+  '# Create commands to create the zip/tar file'#010+
   'ZIPCMD_CDPACK:=cd $(subst /,$(ZIPPATHSEP),$(PACKDIR))'#010+
   'ZIPCMD_CDBASE:=cd $(subst /,$(ZIPPATHSEP),$(BASEDIR))'#010+
-  'ifdef USETAR'#010+
+  'if','def USETAR'#010+
   'ZIPDESTFILE:=$(DIST_DESTDIR)/$(FULLZIPNAME)$(TAREXT)'#010+
   'ZIPCMD_ZIP:=$(TARPROG) c$(TAROPT)f $(ZIPDESTFILE) *'#010+
-  'else',#010+
+  'else'#010+
   'ZIPDESTFILE:=$(DIST_DESTDIR)/$(FULLZIPNAME)$(ZIPEXT)'#010+
-  'ZIPCMD_ZIP:=$(subst /,$(ZIPPATHSEP),$(ZIPPROG)) -Dr $(ZIPOPT) $(ZIPDES'+
-  'TFILE) *'#010+
+  'ZIPCMD_ZIP:=$(subst /,$(ZIPPATHSEP),$(ZIPPROG)) -Dr $(ZIPOPT) $(ZI','PD'+
+  'ESTFILE) *'#010+
   'endif'#010+
   #010+
   'fpc_zipinstall:'#010+
   '        $(MAKE) $(ZIPTARGET) INSTALL_PREFIX=$(PACKDIR) ZIPINSTALL=1'#010+
-  '        $(MKDIR)',' $(DIST_DESTDIR)'#010+
+  '        $(MKDIR) $(DIST_DESTDIR)'#010+
   '        $(DEL) $(ZIPDESTFILE)'#010+
   'ifdef USEZIPWRAPPER'#010+
-  '# Handle gecho separate as we need to espace \ with \\'#010+
+  '# Handle gecho separate as we need to espace \ with \','\'#010+
   'ifneq ($(ECHOREDIR),echo)'#010+
   '        $(ECHOREDIR) -e "$(subst \,\\,$(ZIPCMD_CDPACK))" > $(ZIPWRAPPE'+
   'R)'#010+
-  '        $(ECHOREDIR',') -e "$(subst \,\\,$(ZIPCMD_ZIP))" >> $(ZIPWRAPPE'+
-  'R)'#010+
-  '        $(ECHOREDIR) -e "$(subst \,\\,$(ZIPCMD_CDBASE))" >> $(ZIPWRAPP'+
-  'ER)'#010+
+  '        $(ECHOREDIR) -e "$(subst \,\\,$(ZIPCMD_ZIP))" >> $(ZIPWRAPPER)'+
+  #010+
+  '        $(ECHOREDIR) -e "$(subst \,\\,$(ZIPCMD_CDBASE))" >> $(ZIPWRA','P'+
+  'PER)'#010+
   'else'#010+
   '        echo $(ZIPCMD_CDPACK) > $(ZIPWRAPPER)'#010+
   '        echo $(ZIPCMD_ZIP) >> $(ZIPWRAPPER)'#010+
-  '        echo $(ZIPC','MD_CDBASE) >> $(ZIPWRAPPER)'#010+
+  '        echo $(ZIPCMD_CDBASE) >> $(ZIPWRAPPER)'#010+
   'endif'#010+
   'ifdef inUnix'#010+
   '        /bin/sh $(ZIPWRAPPER)'#010+
   'else'#010+
   'ifdef RUNBATCH'#010+
-  '        $(RUNBATCH) $(ZIPWRAPPER)'#010+
+  '        $(RUNBATCH) $(Z','IPWRAPPER)'#010+
   'else'#010+
   '        $(ZIPWRAPPER)'#010+
   'endif'#010+
   'endif'#010+
   '        $(DEL) $(ZIPWRAPPER)'#010+
   'else'#010+
-  '        $(ZIPCMD_CDPACK) ; $(ZIPCMD_','ZIP) ; $(ZIPCMD_CDBASE)'#010+
+  '        $(ZIPCMD_CDPACK) ; $(ZIPCMD_ZIP) ; $(ZIPCMD_CDBASE)'#010+
   'endif'#010+
   '        $(DELTREE) $(PACKDIR)'#010+
   #010+
   'fpc_zipsourceinstall:'#010+
-  '        $(MAKE) fpc_zipinstall ZIPTARGET=sourceinstall ZIPSUFFIX=$(ZIP'+
-  'SOURCESUFFIX)'#010+
+  '        $(MAKE) fpc_zipinstall ZIPTAR','GET=sourceinstall ZIPSUFFIX=$(Z'+
+  'IPSOURCESUFFIX)'#010+
   #010+
   'fpc_zipexampleinstall:'#010+
   'ifdef HASEXAMPLES'#010+
-  '        $(MAKE) fpc_zipinstall ','ZIPTARGET=exampleinstall ZIPSUFFIX=$('+
-  'ZIPEXAMPLESUFFIX)'#010+
+  '        $(MAKE) fpc_zipinstall ZIPTARGET=exampleinstall ZIPSUFFIX=$(ZI'+
+  'PEXAMPLESUFFIX)'#010+
   'endif'#010+
   #010+
   'fpc_zipdistinstall:'#010+
-  '        $(MAKE) fpc_zipinstall ZIPTARGET=distinstall'#010+
+  '        $(MAKE) fpc_zipinstall ZIPTARG','ET=distinstall'#010+
   #010+
   #010+
   '[cleanrules]'#010+
   '#####################################################################'#010+
   '# Clean rules'#010+
-  '######','##############################################################'+
-  '#'#010+
+  '#####################################################################'#010+
   #010+
   '.PHONY: fpc_clean fpc_cleanall fpc_distclean'#010+
   #010+
-  'ifdef EXEFILES'#010+
+  'ifdef EXE','FILES'#010+
   'override CLEANEXEFILES:=$(addprefix $(TARGETDIRPREFIX),$(CLEANEXEFILES'+
   '))'#010+
-  'override CLEANEXEDBGFILES:=$(addprefix $(','TARGETDIRPREFIX),$(CLEANEXE'+
-  'DBGFILES))'#010+
+  'override CLEANEXEDBGFILES:=$(addprefix $(TARGETDIRPREFIX),$(CLEANEXEDB'+
+  'GFILES))'#010+
   'endif'#010+
   #010+
   'ifdef CLEAN_PROGRAMS'#010+
-  'override CLEANEXEFILES+=$(addprefix $(TARGETDIRPREFIX),$(addsuffix $(E'+
-  'XEEXT), $(CLEAN_PROGRAMS)))'#010+
+  'override CLEANEXEFILES+=$(addprefix $(TARGETDIRPREFIX)',',$(addsuffix $'+
+  '(EXEEXT), $(CLEAN_PROGRAMS)))'#010+
   'override CLEANEXEDBGFILES+=$(addprefix $(TARGETDIRPREFIX),$(addsuffix '+
-  '$(EXED','BGEXT), $(CLEAN_PROGRAMS)))'#010+
+  '$(EXEDBGEXT), $(CLEAN_PROGRAMS)))'#010+
   'endif'#010+
   #010+
   'ifdef CLEAN_UNITS'#010+
   'override CLEANPPUFILES+=$(addsuffix $(PPUEXT),$(CLEAN_UNITS))'#010+
-  'endif'#010+
+  'endif',#010+
   #010+
   'ifdef CLEANPPUFILES'#010+
   'override CLEANPPULINKFILES:=$(subst $(PPUEXT),$(OEXT),$(CLEANPPUFILES)'+
-  ') $(addprefix $(STATICLIBPRE','FIX),$(subst $(PPUEXT),$(STATICLIBEXT),$'+
-  '(CLEANPPUFILES))) $(addprefix $(IMPORTLIBPREFIX),$(subst $(PPUEXT),$(S'+
-  'TATICLIBEXT),$(CLEANPPUFILES)))'#010+
+  ') $(addprefix $(STATICLIBPREFIX),$(subst $(PPUEXT),$(STATICLIBEXT),$(C'+
+  'LEANPPUFILES))) $(addprefix $(IMPORTLIBPREFIX),$(subst $(PPUEXT),$(STA'+
+  'TICLIBEX','T),$(CLEANPPUFILES)))'#010+
   'ifdef DEBUGSYMEXT'#010+
   'override CLEANPPULINKFILES+=$(subst $(PPUEXT),$(DEBUGSYMEXT),$(CLEANPP'+
   'UFILES))'#010+
-  'e','ndif'#010+
+  'endif'#010+
   'override CLEANPPUFILES:=$(addprefix $(UNITTARGETDIRPREFIX),$(CLEANPPUF'+
   'ILES))'#010+
-  'override CLEANPPULINKFILES:=$(wildcard $(addprefix $(UNITTARGETDIRPREF'+
-  'IX),$(CLEANPPULINKFILES)))'#010+
+  'override CLEANPPULINKFILES:=$(wildcard',' $(addprefix $(UNITTARGETDIRPR'+
+  'EFIX),$(CLEANPPULINKFILES)))'#010+
   'endif'#010+
   #010+
   'fpc_clean: $(CLEANTARGET)'#010+
   'ifdef CLEANEXEFILES'#010+
-  '        ','-$(DEL) $(CLEANEXEFILES)'#010+
+  '        -$(DEL) $(CLEANEXEFILES)'#010+
   'endif'#010+
   '# DELTREE instead of DEL because on Mac OS X these are directories'#010+
-  'ifdef CLEANEXEDBGFILES'#010+
+  'ifdef CLEANEXEDBGFILES',#010+
   '        -$(DELTREE) $(CLEANEXEDBGFILES)'#010+
   'endif'#010+
   'ifdef CLEANPPUFILES'#010+
   '        -$(DEL) $(CLEANPPUFILES)'#010+
   'endif'#010+
-  'ifneq ($(CLEAN','PPULINKFILES),)'#010+
+  'ifneq ($(CLEANPPULINKFILES),)'#010+
   '        -$(DEL) $(CLEANPPULINKFILES)'#010+
   'endif'#010+
   'ifdef CLEANRSTFILES'#010+
-  '        -$(DEL) $(addprefix $(UNITTARGETDIRPREFIX),$(CLEANRSTFILES))'#010+
+  '        -$(DEL) $(addprefix $(UNITTARGETD','IRPREFIX),$(CLEANRSTFILES))'+
+  #010+
   'endif'#010+
   'ifdef CLEAN_FILES'#010+
   '        -$(DEL) $(CLEAN_FILES)'#010+
   'endif'#010+
   'ifdef LIB_NAME'#010+
-  '        -$(DEL) ','$(LIB_NAME) $(LIB_FULLNAME)'#010+
+  '        -$(DEL) $(LIB_NAME) $(LIB_FULLNAME)'#010+
   'endif'#010+
   '        -$(DEL) $(FPCMADE) Package.fpc $(PPAS) script.res link.res $(F'+
-  'PCEXTFILE) $(REDIRFILE)'#010+
+  'PCEXTFILE) $(RED','IRFILE)'#010+
   '        -$(DEL) *$(ASMEXT) *_ppas$(BATCHEXT)'#010+
   #010+
   'fpc_cleanall: $(CLEANTARGET)'#010+
   'ifdef CLEANEXEFILES'#010+
-  '        -$(DEL) $','(CLEANEXEFILES)'#010+
+  '        -$(DEL) $(CLEANEXEFILES)'#010+
   'endif'#010+
   'ifdef COMPILER_UNITTARGETDIR'#010+
   'ifdef CLEANPPUFILES'#010+
   '        -$(DEL) $(CLEANPPUFILES)'#010+
   'endif'#010+
-  'ifneq ($(CLEANPPULINKFILES),)'#010+
+  'ifneq ($(C','LEANPPULINKFILES),)'#010+
   '        -$(DEL) $(CLEANPPULINKFILES)'#010+
   'endif'#010+
   'ifdef CLEANRSTFILES'#010+
-  '        -$(DEL) $(addprefix $(UNITTAR','GETDIRPREFIX),$(CLEANRSTFILES))'+
-  #010+
+  '        -$(DEL) $(addprefix $(UNITTARGETDIRPREFIX),$(CLEANRSTFILES))'#010+
   'endif'#010+
   'endif'#010+
   'ifdef CLEAN_FILES'#010+
   '        -$(DEL) $(CLEAN_FILES)'#010+
   'endif'#010+
-  '        -$(DELTREE) units'#010+
+  '        -$(DELTREE) u','nits'#010+
   '        -$(DEL) *$(OEXT) *$(PPUEXT) *$(RSTEXT) *$(ASMEXT) *$(STATICLIB'+
   'EXT) *$(SHAREDLIBEXT) *$(PPLEXT)'#010+
-  'ifneq ($(PPU','EXT),.ppu)'#010+
+  'ifneq ($(PPUEXT),.ppu)'#010+
   '        -$(DEL) *.o *.ppu *.a'#010+
   'endif'#010+
   '        -$(DELTREE) *$(SMARTEXT)'#010+
-  '        -$(DEL) fpcmade.* Package.fpc $(PPAS) script.res link.res $(FP'+
-  'CEXTFILE) $(REDIRFILE)'#010+
+  '        -$(DEL) fpcmade.* Package.fpc $(','PPAS) script.res link.res $('+
+  'FPCEXTFILE) $(REDIRFILE)'#010+
   '        -$(DEL) *_ppas$(BATCHEXT)'#010+
   'ifdef AOUTEXT'#010+
-  '        -$(DEL) *$(','AOUTEXT)'#010+
+  '        -$(DEL) *$(AOUTEXT)'#010+
   'endif'#010+
   'ifdef DEBUGSYMEXT'#010+
   '        -$(DEL) *$(DEBUGSYMEXT)'#010+
@@ -2012,150 +2020,148 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   #010+
   '[baseinforules]'#010+
-  '#####################################################################'#010+
-  '# Base info rules'#010+
-  '######################################','##############################'+
+  '######','##############################################################'+
   '#'#010+
+  '# Base info rules'#010+
+  '#####################################################################'#010+
   #010+
   '.PHONY: fpc_baseinfo'#010+
   #010+
   'override INFORULES+=fpc_baseinfo'#010+
   #010+
   'fpc_baseinfo:'#010+
-  '        @$(ECHO)'#010+
+  '        @$(ECHO)'#010,
   '        @$(ECHO)  == Package info =='#010+
   '        @$(ECHO)  Package Name..... $(PACKAGE_NAME)'#010+
-  '        @$(ECHO)  Package Versi','on.. $(PACKAGE_VERSION)'#010+
+  '        @$(ECHO)  Package Version.. $(PACKAGE_VERSION)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  == Configuration info =='#010+
   '        @$(ECHO)'#010+
-  '        @$(ECHO)  FPC.......... $(FPC)'#010+
+  '        @$(ECHO)  F','PC.......... $(FPC)'#010+
   '        @$(ECHO)  FPC Version.. $(FPC_VERSION)'#010+
   '        @$(ECHO)  Source CPU... $(CPU_SOURCE)'#010+
-  '       ',' @$(ECHO)  Target CPU... $(CPU_TARGET)'#010+
+  '        @$(ECHO)  Target CPU... $(CPU_TARGET)'#010+
   '        @$(ECHO)  Source OS.... $(OS_SOURCE)'#010+
-  '        @$(ECHO)  Target OS.... $(OS_TARGET)'#010+
+  '        @$(ECHO)  Target OS.... $(OS','_TARGET)'#010+
   '        @$(ECHO)  Full Source.. $(FULL_SOURCE)'#010+
   '        @$(ECHO)  Full Target.. $(FULL_TARGET)'#010+
-  '        @$(ECHO) ',' SourceSuffix. $(SOURCESUFFIX)'#010+
+  '        @$(ECHO)  SourceSuffix. $(SOURCESUFFIX)'#010+
   '        @$(ECHO)  TargetSuffix. $(TARGETSUFFIX)'#010+
-  '        @$(ECHO)  FPC fpmake... $(FPCFPMAKE)'#010+
+  '        @$(ECHO)  FPC fpmake... $(FPCFPMA','KE)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  == Directory info =='#010+
   '        @$(ECHO)'#010+
-  '        @$(ECHO)  Required pkgs... $(REQUIR','E_PACKAGES)'#010+
+  '        @$(ECHO)  Required pkgs... $(REQUIRE_PACKAGES)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  Basedir......... $(BASEDIR)'#010+
-  '        @$(ECHO)  FPCDir.......... $(FPCDIR)'#010+
+  '        @$(ECHO)  FPCDir.......... $(FPCDIR)'#010,
   '        @$(ECHO)  CrossBinDir..... $(CROSSBINDIR)'#010+
   '        @$(ECHO)  UnitsDir........ $(UNITSDIR)'#010+
-  '        @$(ECHO)  Packa','gesDir..... $(PACKAGESDIR)'#010+
+  '        @$(ECHO)  PackagesDir..... $(PACKAGESDIR)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  GCC library..... $(GCCLIBDIR)'#010+
-  '        @$(ECHO)  Other library... $(OTHERLIBDIR)'#010+
+  '        @$(ECHO)  Other libr','ary... $(OTHERLIBDIR)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  == Tools info =='#010+
   '        @$(ECHO)'#010+
-  '        @$(ECHO)  As........ ','$(AS)'#010+
+  '        @$(ECHO)  As........ $(AS)'#010+
   '        @$(ECHO)  Ld........ $(LD)'#010+
   '        @$(ECHO)  Ar........ $(AR)'#010+
   '        @$(ECHO)  Rc........ $(RC)'#010+
-  '        @$(ECHO)'#010+
+  '        @','$(ECHO)'#010+
   '        @$(ECHO)  Mv........ $(MVPROG)'#010+
   '        @$(ECHO)  Cp........ $(CPPROG)'#010+
-  '        @$(ECHO)  Rm........ $(RMP','ROG)'#010+
+  '        @$(ECHO)  Rm........ $(RMPROG)'#010+
   '        @$(ECHO)  GInstall.. $(GINSTALL)'#010+
   '        @$(ECHO)  Echo...... $(ECHO)'#010+
-  '        @$(ECHO)  Shell..... $(SHELL)'#010+
+  '        @$(ECHO)  Shell..... $(SHELL)',#010+
   '        @$(ECHO)  Date...... $(DATE)'#010+
   '        @$(ECHO)  FPCMake... $(FPCMAKE)'#010+
   '        @$(ECHO)  PPUMove... $(PPUMOVE)'#010+
-  '  ','      @$(ECHO)  Zip....... $(ZIPPROG)'#010+
+  '        @$(ECHO)  Zip....... $(ZIPPROG)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  == Object info =='#010+
   '        @$(ECHO)'#010+
-  '        @$(ECHO)  Target Loaders........ $(TARGET_LOADERS)'#010+
+  '        @$(E','CHO)  Target Loaders........ $(TARGET_LOADERS)'#010+
   '        @$(ECHO)  Target Units.......... $(TARGET_UNITS)'#010+
-  '        @$(ECHO)','  Target Implicit Units. $(TARGET_IMPLICITUNITS)'#010+
+  '        @$(ECHO)  Target Implicit Units. $(TARGET_IMPLICITUNITS)'#010+
   '        @$(ECHO)  Target Programs....... $(TARGET_PROGRAMS)'#010+
-  '        @$(ECHO)  Target Dirs........... $(TARGET_DIRS)'#010+
+  '        @$(','ECHO)  Target Dirs........... $(TARGET_DIRS)'#010+
   '        @$(ECHO)  Target Examples....... $(TARGET_EXAMPLES)'#010+
-  '        @$(ECHO',')  Target ExampleDirs.... $(TARGET_EXAMPLEDIRS)'#010+
+  '        @$(ECHO)  Target ExampleDirs.... $(TARGET_EXAMPLEDIRS)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  Clean Units......... $(CLEAN_UNITS)'#010+
-  '        @$(ECHO)  Clean Files......... $(CLEAN_FILES)'#010+
+  ' ','       @$(ECHO)  Clean Files......... $(CLEAN_FILES)'#010+
   '        @$(ECHO)'#010+
-  '        @$(ECHO)  Install Units....... $(INSTALL_U','NITS)'#010+
+  '        @$(ECHO)  Install Units....... $(INSTALL_UNITS)'#010+
   '        @$(ECHO)  Install Files....... $(INSTALL_FILES)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  == Install info =='#010+
-  '        @$(ECHO)'#010+
+  '    ','    @$(ECHO)'#010+
   '        @$(ECHO)  DateStr.............. $(DATESTR)'#010+
   '        @$(ECHO)  ZipName.............. $(ZIPNAME)'#010+
-  '     ','   @$(ECHO)  ZipPrefix............ $(ZIPPREFIX)'#010+
+  '        @$(ECHO)  ZipPrefix............ $(ZIPPREFIX)'#010+
   '        @$(ECHO)  ZipCrossPrefix....... $(ZIPCROSSPREFIX)'#010+
-  '        @$(ECHO)  ZipSuffix............ $(ZIPSUFFIX)'#010+
+  '        @$(ECH','O)  ZipSuffix............ $(ZIPSUFFIX)'#010+
   '        @$(ECHO)  FullZipName.......... $(FULLZIPNAME)'#010+
-  '        @$(ECHO)  Install ','FPC Package.. $(INSTALL_FPCPACKAGE)'#010+
+  '        @$(ECHO)  Install FPC Package.. $(INSTALL_FPCPACKAGE)'#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  Install base dir..... $(INSTALL_BASEDIR)'#010+
-  '        @$(ECHO)  Install binary dir... $(INSTALL_BINDIR)'#010+
+  '        ','@$(ECHO)  Install binary dir... $(INSTALL_BINDIR)'#010+
   '        @$(ECHO)  Install library dir.. $(INSTALL_LIBDIR)'#010+
-  '        @$(E','CHO)  Install units dir.... $(INSTALL_UNITDIR)'#010+
+  '        @$(ECHO)  Install units dir.... $(INSTALL_UNITDIR)'#010+
   '        @$(ECHO)  Install source dir... $(INSTALL_SOURCEDIR)'#010+
-  '        @$(ECHO)  Install doc dir...... $(INSTALL_DOCDIR)'#010+
+  '        @$(E','CHO)  Install doc dir...... $(INSTALL_DOCDIR)'#010+
   '        @$(ECHO)  Install example dir.. $(INSTALL_EXAMPLEDIR)'#010+
-  '        @$(E','CHO)  Install data dir..... $(INSTALL_DATADIR)'#010+
+  '        @$(ECHO)  Install data dir..... $(INSTALL_DATADIR)'#010+
   '        @$(ECHO)'#010+
-  '        @$(ECHO)  Dist destination dir. $(DIST_DESTDIR)'#010+
+  '        @$(ECHO)  Dist destination dir. $(DIST_DESTDIR)'#010,
   '        @$(ECHO)  Dist zip name........ $(DIST_ZIPNAME)'#010+
   '        @$(ECHO)'#010+
   #010+
   '[inforules]'#010+
-  '##################################','##################################'+
-  '#'#010+
+  '#####################################################################'#010+
   '# Info rules'#010+
   '#####################################################################'#010+
-  #010+
+  #010,
   '.PHONY: fpc_info'#010+
   #010+
   'fpc_info: $(INFORULES)'#010+
   #010+
   '[makefilerules]'#010+
-  '##############################################################','######'+
-  '#'#010+
+  '#####################################################################'#010+
   '# Rebuild Makefile'#010+
   '#####################################################################'#010+
   #010+
-  '.PHONY: fpc_makefile fpc_makefiles fpc_makefile_sub1 fpc_makefile_sub2'+
-  ' \'#010+
+  '.PHONY: fpc_makefile f','pc_makefiles fpc_makefile_sub1 fpc_makefile_su'+
+  'b2 \'#010+
   '        fpc_makefile_dirs'#010+
   #010+
   'fpc_makefile:'#010+
-  '        $(FPCMAKE) -w -T$(OS','_TARGET) Makefile.fpc'#010+
+  '        $(FPCMAKE) -w -T$(OS_TARGET) Makefile.fpc'#010+
   #010+
   'fpc_makefile_sub1:'#010+
   'ifdef TARGET_DIRS'#010+
-  '        $(FPCMAKE) -w -T$(OS_TARGET) $(addsuffix /Makefile.fpc,$(TARGE'+
-  'T_DIRS))'#010+
+  '        $(FPCMAKE) -w -T$(OS_TARGET) $(addsuffix /Makefile.f','pc,$(TAR'+
+  'GET_DIRS))'#010+
   'endif'#010+
   'ifdef TARGET_EXAMPLEDIRS'#010+
-  '        $(FPCMAKE) -w -T$(OS_TARGET) $(addsuffix /Makefile.fpc,$(TARGE',
+  '        $(FPCMAKE) -w -T$(OS_TARGET) $(addsuffix /Makefile.fpc,$(TARGE'+
   'T_EXAMPLEDIRS))'#010+
   'endif'#010+
   #010+
   'fpc_makefile_sub2: $(addsuffix _makefile_dirs,$(TARGET_DIRS) $(TARGET_'+
   'EXAMPLEDIRS))'#010+
   #010+
-  'fpc_makefile_dirs: fpc_makefile_sub1 fpc_makefile_sub2'#010+
+  'fpc_makefile','_dirs: fpc_makefile_sub1 fpc_makefile_sub2'#010+
   #010+
   'fpc_makefiles: fpc_makefile fpc_makefile_dirs'#010+
   #010+
   '[localmakefile]'#010+
-  '#############','#######################################################'+
-  '#'#010+
-  '# Local Makefile'#010+
   '#####################################################################'#010+
+  '# Local Makefile'#010+
+  '##############################################','######################'+
+  '#'#010+
   #010+
   'ifneq ($(wildcard fpcmake.loc),)'#010+
   'include fpcmake.loc'#010+
@@ -2163,20 +2169,19 @@ const fpcmakeini : array[0..216,1..240] 
   #010+
   #010+
   '[userrules]'#010+
-  '######################','##############################################'+
-  '#'#010+
-  '# Users rules'#010+
   '#####################################################################'#010+
+  '# Users rules'#010+
+  '##########################################################','##########'+
+  '#'#010+
   #010+
   '[lclrules]'#010+
   '#####################################################################'#010+
   '# LCL Rules'#010+
-  '##############','######################################################'+
-  '#'#010+
+  '#####################################################################'#010+
   #010+
   '# LCL Platform'#010+
   'ifndef LCL_PLATFORM'#010+
-  'ifneq ($(findstring $(OS_TARGET),win32 win64),)'#010+
+  'ifneq ($(findstring $(OS_TAR','GET),win32 win64),)'#010+
   'LCL_PLATFORM=win32'#010+
   'else'#010+
   'LCL_PLATFORM=gtk'#010+
@@ -2184,10 +2189,10 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   'export LCL_PLATFORM'#010+
   #010+
-  '# Check if the specified L','CLDIR is correct'#010+
+  '# Check if the specified LCLDIR is correct'#010+
   'ifdef LCLDIR'#010+
   'override LCLDIR:=$(subst \,/,$(LCLDIR))'#010+
-  'ifeq ($(wildcard $(LCLDIR)/units/$(LCL_PLATFORM)),)'#010+
+  'ifeq ($(wildcard $(LCLDIR)/units/$(LCL_PLATFORM)),',')'#010+
   'override LCLDIR=wrong'#010+
   'endif'#010+
   'else'#010+
@@ -2195,56 +2200,57 @@ const fpcmakeini : array[0..216,1..240] 
   'endif'#010+
   #010+
   '# Check if the default LCLDIR is correct'#010+
-  'ifdef DEFAULT_L','CLDIR'#010+
+  'ifdef DEFAULT_LCLDIR'#010+
   'override LCLDIR:=$(subst \,/,$(DEFAULT_LCLDIR))'#010+
   'ifeq ($(wildcard $(LCLDIR)/units/$(LCL_PLATFORM)),)'#010+
-  'override LCLDIR=wrong'#010+
+  'override LCLDI','R=wrong'#010+
   'endif'#010+
   'endif'#010+
   #010+
   '# Check for development version'#010+
   'ifeq ($(LCLDIR),wrong)'#010+
-  'override LCLDIR=$(subst /units/$(LCL_PLATFOR','M),,$(firstword $(wildca'+
-  'rd $(addsuffix /units/$(LCL_PLATFORM),$(BASEDIR)/lcl $(BASEDIR)))))'#010+
+  'override LCLDIR=$(subst /units/$(LCL_PLATFORM),,$(firstword $(wildcard'+
+  ' $(addsuffix /units/$(LCL_PLATFORM),$(BASEDIR)/lcl $(BASEDIR)))))'#010+
   'ifeq ($(LCLDIR),)'#010+
-  'override LCLDIR=wrong'#010+
+  'override L','CLDIR=wrong'#010+
   'endif'#010+
   'endif'#010+
   #010+
   '# Check for release version'#010+
   'ifeq ($(LCLDIR),wrong)'#010+
-  'override LCLDIR=$(subst /units/$(LCL_PLATFOR','M),,$(firstword $(wildca'+
-  'rd $(addsuffix /lib/lazarus/units/$(LCL_PLATFORM),/usr/local /usr))))'#010+
+  'override LCLDIR=$(subst /units/$(LCL_PLATFORM),,$(firstword $(wildcard'+
+  ' $(addsuffix /lib/lazarus/units/$(LCL_PLATFORM),/usr/local /usr))))'#010+
   'ifeq ($(LCLDIR),)'#010+
-  'override LCLDIR=wrong'#010+
+  'override',' LCLDIR=wrong'#010+
   'endif'#010+
   'endif'#010+
   #010+
   '# Generate dirs'#010+
   'override LCLUNITDIR:=$(wildcard $(LCLDIR)/units/$(LCL_PLATFORM) $(LCLD'+
-  'IR)/uni','ts)'#010+
+  'IR)/units)'#010+
   'override LCLCOMPONENTDIR:=$(wildcard $(LCLDIR)/.. $(LCLDIR)/../compone'+
   'nts $(LCLDIR)/components)'#010+
-  'export LCLDIR LCLUNITDIR LCLCOMPONENTDIR'#010+
+  'export LCLDIR LCLUNI','TDIR LCLCOMPONENTDIR'#010+
   #010+
   '# Add LCL dirs to paths'#010+
   'override REQUIRE_PACKAGESDIR+=$(LCLCOMPONENTDIR)'#010+
-  'override COMPILER_UNITDIR','+=$(LCLUNITDIR)'#010+
+  'override COMPILER_UNITDIR+=$(LCLUNITDIR)'#010+
   #010+
   '[lclinforules]'#010+
   '#####################################################################'#010+
   '# LCL Info rules'#010+
-  '#####################################################################'#010+
+  '#','###################################################################'+
+  '#'#010+
   'override INFORULES+=lclinfo'#010+
   #010+
   '.PHONY: lclinfo'#010+
   #010+
-  'lclin','fo:'#010+
+  'lclinfo:'#010+
   '        @$(ECHO)  == LCL info =='#010+
   '        @$(ECHO)'#010+
   '        @$(ECHO)  Platform............. $(LCL_PLATFORM)'#010+
-  '        @$(ECHO)  LCLDIR............... $(LCLDIR)'#010+
+  '        @$','(ECHO)  LCLDIR............... $(LCLDIR)'#010+
   '        @$(ECHO)  LCL Unit dir......... $(LCLUNITDIR)'#010+
-  '        @$(ECHO)  LCL Comp','onent dir.... $(LCLCOMPONENTDIR)'#010+
+  '        @$(ECHO)  LCL Component dir.... $(LCLCOMPONENTDIR)'#010+
   '        @$(ECHO)'#010
 );
