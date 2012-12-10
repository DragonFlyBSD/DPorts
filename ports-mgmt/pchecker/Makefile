# $FreeBSD: ports/ports-mgmt/pchecker/Makefile,v 1.12 2012/11/17 06:00:45 svnexp Exp $

PORTNAME=	pchecker
PORTVERSION=	1.11
CATEGORIES=	ports-mgmt
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PROJECTHOST=	ak-various-projects

MAINTAINER=	ak@FreeBSD.org
COMMENT=	Tool that checks the ports tree for various errors

LICENSE=	BSD

USE_XZ=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
