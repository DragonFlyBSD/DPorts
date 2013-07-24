# Created by: Antonios Anastasiadis <antonakis@gmail.com>
# $FreeBSD: ports-mgmt/xps/Makefile 322209 2013-07-02 22:55:44Z rakuco $

PORTNAME=	xps
PORTVERSION=	0.4.1
CATEGORIES=	ports-mgmt

MAINTAINER=	serpent7776@gmail.com
COMMENT=	Tool that searches the ports tree by various criteria

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	antanst
GH_COMMIT=	997c66f

USE_PYTHON=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/xps
MAN1=		xps.1

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/xps ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${MANPREFIX}/man/man1

.include <bsd.port.mk>
