# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-tocmacro/Makefile 337589 2013-12-26 18:12:45Z wg $

PORTNAME=	tocmacro
PORTVERSION=	11.0.0.3
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	http://people.freebsd.org/~mm/trac/
PKGNAMEPREFIX=	trac-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Table of contents macro

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
