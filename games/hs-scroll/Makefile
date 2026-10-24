PORTNAME=	scroll
DISTVERSION=	1.20250228.2
CATEGORIES=	games haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Roguelike game
WWW=		https://joeyh.name/code/scroll/

LICENSE=	GPLv2

BROKEN_FreeBSD_15=	c2hs chokes on /usr/include/ncurses.h:523: The symbol 'bool' does not fit here.
BROKEN_FreeBSD_16=	c2hs chokes on /usr/include/ncurses.h:523: The symbol 'bool' does not fit here.

USES= cabal ncurses

dfly-patch:
	${REINPLACE_CMD} -e "s@\(-DHSNCURSES_NARROW_HEADER\)@\1 -DNCURSES_INTERNALS ${CFLAGS} @g" \
			 -e 's@\(\|\| os(freebsd)\)@\1 || os(dragonfly)@g' \
			 -e 's@ncursesw@ncurses@g' -e 's@panelw@panel@g' \
		${WRKSRC}/_cabal_deps/ncurses-0.2.16/ncurses.cabal

.include <bsd.port.mk>
