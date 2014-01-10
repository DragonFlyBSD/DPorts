# Created by: Antonios Anastasiadis <antonakis@gmail.com>
# $FreeBSD: ports-mgmt/xps/Makefile 337884 2013-12-28 17:39:48Z bapt $

PORTNAME=	xps
PORTVERSION=	0.5.2
CATEGORIES=	ports-mgmt

MAINTAINER=	serpent7776@gmail.com
COMMENT=	Tool that searches the ports tree by various criteria

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	serpent7776
GH_COMMIT=	719165b

USE_PYTHON=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/xps \
		man/man1/xps.1.gz

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/xps ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/xps.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
