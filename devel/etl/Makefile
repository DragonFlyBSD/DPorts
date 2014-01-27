# Created by: Yinghong Liu <relaxbsd@gmail.com>
# $FreeBSD: devel/etl/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	etl
PORTVERSION=	0.04.17
CATEGORIES=	devel lang
MASTER_SITES=	SF/synfig/releases/${SYNFIG_VERSION}/source/
DISTNAME=	ETL-${PORTVERSION}

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Voria Extended Class and Template Library

OPTIONS_DEFINE=	DOCS

SYNFIG_VERSION=	0.64.1

USES=	gmake pathfix pkgconfig
GNU_CONFIGURE=	yes

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for doc in AUTHORS ChangeLog INSTALL NEWS README
	${INSTALL_DATA} ${WRKSRC}/${doc} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
