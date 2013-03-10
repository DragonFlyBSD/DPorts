# Created by: ijliao
# $FreeBSD: devel/datadraw/Makefile 313635 2013-03-08 11:32:11Z bapt $

PORTNAME=	datadraw
PORTVERSION=	3.1.1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}${PORTVERSION}
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A feature rich persistent database generator

USES=		bison
HAS_CONFIGURE=	yes
USE_GMAKE=	yes
ALL_TARGET=	# empty

.if !defined(NOPORTDOCS)
PORTDOCS=	*

post-install:
	@${MKDIR} ${DOCSDIR}
	${CP} -R ${WRKSRC}/www/* ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/manual.pdf ${DOCSDIR}
.endif

.include <bsd.port.mk>
