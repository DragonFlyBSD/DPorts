# Created by: Yinghong Liu <relaxbsd@gmail.com>
# $FreeBSD: devel/etl/Makefile 325945 2013-09-02 06:45:47Z bapt $

PORTNAME=	etl
PORTVERSION=	0.04.15
CATEGORIES=	devel lang
MASTER_SITES=	SF/synfig/ETL/${PORTVERSION}
DISTNAME=	ETL-${PORTVERSION}

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Voria Extended Class and Template Library

USES=		gmake pathfix pkgconfig
GNU_CONFIGURE=	yes

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for doc in AUTHORS ChangeLog INSTALL NEWS README
	${INSTALL_DATA} ${WRKSRC}/${doc} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
