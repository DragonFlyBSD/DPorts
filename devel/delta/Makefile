# $FreeBSD: ports/devel/delta/Makefile,v 1.4 2012/11/17 05:55:40 svnexp Exp $

PORTNAME=	delta
PORTVERSION=	2006.08.03
CATEGORIES=	devel
MASTER_SITES=	LOCAL/eadler/delta

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Heuristically minimizes interesting files

LICENSE=	BSD

PLIST_FILES=	bin/delta bin/multidelta bin/topformflat

USE_GMAKE=	yes

do-install:
.for file in delta multidelta
	${INSTALL_SCRIPT} ${WRKSRC}/${file} ${PREFIX}/bin
.endfor
	${INSTALL_PROGRAM} ${WRKSRC}/topformflat ${PREFIX}/bin

.include <bsd.port.mk>
