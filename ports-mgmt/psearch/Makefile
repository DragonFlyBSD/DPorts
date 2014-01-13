# Created by: Benjamin Lutz
# $FreeBSD: ports-mgmt/psearch/Makefile 337883 2013-12-28 17:38:33Z bapt $

PORTNAME=	psearch
PORTVERSION=	2.0.2
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://www.maxlor.com/files/

MAINTAINER=	mail@maxlor.com
COMMENT=	Utility for searching the FreeBSD Ports Collection

PLIST_FILES=	bin/psearch \
		man/man1/psearch.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/psearch ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/psearch.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
