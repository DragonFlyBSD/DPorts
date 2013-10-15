# Created by: Jason Bacon
# $FreeBSD: science/voro++/Makefile 327767 2013-09-20 22:48:30Z bapt $

PORTNAME=	voro++
PORTVERSION=	0.4.5
CATEGORIES=	science
MASTER_SITES=	http://math.lbl.gov/voro++/download/dir/

MAINTAINER=	jwbacon@tds.net
COMMENT=	Three-dimensional computations of the Voronoi tessellation

LICENSE=	BSD

USE_GMAKE=	yes

MAN1=		voro++.1

NO_STAGE=	yes
post-patch-script:
	${REINPLACE_CMD} \
		-e 's|CC=|CC?=|g' \
		-e 's|CFLAGS=|CFLAGS?=|g' \
		-e "s|/usr/local|${PREFIX}|g" \
		${WRKSRC}/config.mk

.include <bsd.port.mk>
