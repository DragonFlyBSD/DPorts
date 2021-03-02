PORTNAME=	libtinfow-compat
PORTVERSION=	1.0
CATEGORIES=	misc

MAINTAINER=	zrj@efnet.irc
COMMENT=	Compat symlinks for previous ncursesw

LICENSE=	MIT

DISTFILES=

do-configure:

do-build:

do-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/lib
	${LN} -sv libtinfo.so.6 ${STAGEDIR}${PREFIX}/lib/libtinfow.so.6

.include <bsd.port.mk>
