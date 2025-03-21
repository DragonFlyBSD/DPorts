# handle dependency on the ncurses port
#
# Feature:	ncurses
# Usage:	USES=ncurses
# Valid ARGS:	base port
#
# use/port can now set this options to the makefiles
# NCURSES_RPATH= yes	- pass RFLAGS options to CFLAGS
#
# Overridable defaults:
# NCURSES_PORT=	devel/ncurses
#
# The makefile sets the following variables:
# NCURSESBASE		- "/usr" or ${LOCALBASE}
# NCURSESLIB		- path to the libs
# NCURSESINC		- path to the matching includes
# NCURSESRPATH		- rpath for dynamic linker
#
# BUILD_DEPENDS		- are added if needed
# RUN_DEPENDS		- are added if needed
#
# MAINTAINER: ports@FreeBSD.org

.if !defined(_INCLUDE_USES_NCURSES_MK)
_INCLUDE_USES_NCURSES_MK=	yes

.  if empty(ncurses_ARGS)
.    if !exists(${DESTDIR}/${LOCALBASE}/lib/libncurses.so) && exists(${DESTDIR}/usr/lib/libncursesw.so)
ncurses_ARGS=	base
.    else
ncurses_ARGS=	port
.    endif
.  endif

.  if ${ncurses_ARGS} == base
NCURSESBASE=	/usr
NCURSESINC=	${NCURSESBASE}/include

.    if exists(${LOCALBASE}/lib/libncurses.so)
_USES_sanity+=	400:check-depends-ncurses
check-depends-ncurses:
	@${ECHO_CMD} "Dependency error: this port wants the ncurses library from the FreeBSD"
	@${ECHO_CMD} "base system. You can't build against it, while a newer"
	@${ECHO_CMD} "version is installed by a port."
	@${ECHO_CMD} "Please deinstall the port or undefine WITH_NCURSES_BASE."
	@${FALSE}
.    endif

.  elif ${ncurses_ARGS} == port
NCURSESBASE=	${LOCALBASE}
NCURSESINC=	${LOCALBASE}/include/ncurses

.    if !defined(NCURSES_PORT) && exists(${DESTDIR}/${LOCALBASE}/lib/libncurses.so)
PKG_DBDIR?=	${DESTDIR}/var/db/pkg
.      if defined(DESTDIR)
PKGARGS=	-c ${DESTDIR}
.      endif
PKGARGS?=
NCURSES_INSTALLED!=	${PKG_BIN} ${PKGARGS} which -qo ${LOCALBASE}/lib/libncurses.so || :
.    endif
NCURSES_INSTALLED?=

.    if ${NCURSES_INSTALLED} != ""
NCURSES_PORT=	${NCURSES_INSTALLED}
NCURSES_SHLIBFILE!=	${PKG_INFO} -ql ${NCURSES_INSTALLED} | grep -m 1 "^`${PKG_BIN} query "%p" ${NCURSES_INSTALLED}`/lib/libncurses.so."
NCURSES_SHLIBVER?=	${NCURSES_SHLIBFILE:E}
.    endif

NCURSES_PORT?=		devel/ncurses
.if exists (/usr/lib/priv/libprivate_ncursesw.so)
NCURSES_SHLIBVER?=	6
.else
NCURSES_SHLIBVER?=	6P
.endif

BUILD_DEPENDS+=		${LOCALBASE}/lib/libncurses.so.${NCURSES_SHLIBVER}:${NCURSES_PORT}
RUN_DEPENDS+=		${LOCALBASE}/lib/libncurses.so.${NCURSES_SHLIBVER}:${NCURSES_PORT}
NCURSESRPATH=		${NCURSESBASE}/lib
LDFLAGS+=		-L${NCURSESRPATH} -Wl,-rpath=${NCURSESRPATH}
CFLAGS+=		-I${NCURSESBASE}/include -I${NCURSESINC}
TINFO_LIB=		-ltinfo
NCURSES_LIB=		-lncurses

.    if defined(NCURSES_RPATH)
CFLAGS+=	-Wl,-rpath,${NCURSESRPATH}
.    endif

.  else
.error		USES=ncurses only accept 'port' and 'base' as arguments, got ${ncurses_ARGS}
.  endif

NCURSESLIB=	${NCURSESBASE}/lib
NCURSES_IMPL?=	ncursesw
TINFO_LIB?=	-ltinfow
NCURSES_LIB?=	-lncursesw
NCURSESLIBS=		${NCURSES_LIB} ${TINFO_LIB}

.endif
