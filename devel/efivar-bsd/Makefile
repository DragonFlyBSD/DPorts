COMMENT =		tools and libraries to work with EFI

PORTNAME =		efivar-bsd
PORTVERSION =		38
CATEGORIES =		devel

MAINTAINER = 		sergii.dmytruk@3mdeb.com

HOMEPAGE =		https://github.com/rhboot/efivar

# LGPL v2.1+
PERMIT_PACKAGE =	Yes

# The project is Linux-oriented, using fork with BSD-specific changes so that
# patches are manageable and can be potentially sent upstream.
#
# The fork also uses unreleased changes as some of them fix build on systems
# that don't use glibc.
USE_GITHUB =		Yes
GH_ACCOUNT =		3mdeb
GH_PROJECT =		efivar
GH_TAGNAME =		bsd-v1

USES =			gmake
# Compiler is determined by its name, so `cc` won't do.
MAKE_FLAGS =		CC=gcc
# ld.gold doesn't work because of a linker script.
MAKE_FLAGS +=		LD=ld.bfd CCLDFLAGS=-fuse-ld=bfd
# Instruct dynamic linker to give preference to /usr/local/lib to not conflict
# with system's libefivar.
MAKE_FLAGS +=		SOFLAGS=-Wl,-rpath,/usr/local/lib
# Specify various locations.
MAKE_FLAGS +=		MANDIR=${PREFIX}/man LIBDIR=${PREFIX}/lib

CONFLICTS_INSTALL =	efivar

.include <bsd.port.mk>
