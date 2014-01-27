# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net/nusoap/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	nusoap
PORTVERSION=	0.9.5
CATEGORIES=	net www
MASTER_SITES=	SF

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	SOAP Toolkit for PHP

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
USE_PHP=	curl zlib xml
USE_ZIP=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>

do-install:
	${MKDIR} ${DATADIR}
	${CP} ${WRKSRC}/lib/* ${DATADIR}
	${MKDIR} ${EXAMPLESDIR}
	${CP} ${WRKSRC}/samples/* ${EXAMPLESDIR}

.include <bsd.port.post.mk>
