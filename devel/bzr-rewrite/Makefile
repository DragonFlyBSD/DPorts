# Created by: Carlo Strub <c-s@c-s.li>
# $FreeBSD: devel/bzr-rewrite/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	bzr-rewrite
PORTVERSION=	0.6.3
CATEGORIES=	devel
MASTER_SITES=	http://launchpadlibrarian.net/94574861/ \
		http://www.c-s.li/ports/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A bzr plugin that provides rewriting existing revisions

LICENSE=	GPLv2

BUILD_DEPENDS=	bzr:${PORTSDIR}/devel/bzr
RUN_DEPENDS=	bzr:${PORTSDIR}/devel/bzr

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
