# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD: sysutils/chgrep/Makefile 333238 2013-11-08 15:06:28Z vanilla $

PORTNAME=	chgrep
PORTVERSION=	1.2.4
CATEGORIES=	sysutils
MASTER_SITES=	http://www.bmk-it.com/projects/chgrep/files/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast string substitution across multiple files

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

PLIST_FILES=	bin/chgrep man/man1/${PORTNAME}.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/chgrep \
		${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/man/chgrep.1 \
		${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
