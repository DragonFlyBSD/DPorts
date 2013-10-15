# Created by: Satoshi Taoka <taoka@FreeBSD.org>
# $FreeBSD: japanese/devil-fpw/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	devil-fpw
PORTVERSION=	1.0.3
PORTREVISION=	0
CATEGORIES=	japanese
MASTER_SITES=	http://openlab.ring.gr.jp/edict/fpw/dist/devil/
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Devil's dictionary (EPWING V1 format)

USE_ZIP=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/devil
EXTRACT_BEFORE_ARGS=	-qL

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/share/dict/devil-fpw/devil/data
	${INSTALL_DATA} ${WRKSRC}/devil/data/honmon ${PREFIX}/share/dict/devil-fpw/devil/data
	${INSTALL_DATA} ${WRKSRC}/catalogs ${PREFIX}/share/dict/devil-fpw
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for i in readme.pkg readme.txt
	${INSTALL_DATA} ${WRKSRC}/$i ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
