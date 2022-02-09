
PORTNAME=	mkimg
PORTVERSION=	20211120
CATEGORIES=	sysutils
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/ \
		https://leaf.dragonflybsd.org/~zrj/dports/distcache/

MAINTAINER=	zrj@ef.irc
COMMENT=	Creates FS images.

LICENSE=	BSD2CLAUSE

WRKSRC_SUBDIR=	usr.bin/mkimg
MAEKFILE=	Makefile

PLIST_FILES+=	bin/mkimg share/man/man1/mkimg.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mkimg ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/mkimg.1 ${STAGEDIR}${MANPREFIX}/share/man/man1

.include <bsd.port.mk>
