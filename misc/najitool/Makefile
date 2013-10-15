# Created by: NECDET COKYAZICI <cokyazici@yahoo.co.uk>
# $FreeBSD: misc/najitool/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	najitool
PORTVERSION=	0.8.4
CATEGORIES=	misc
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generates, converts, and filters files

BUILD_DEPENDS=	${LOCALBASE}/lib/libnaji.a:${PORTSDIR}/devel/libnaji

DISTVERSIONSUFFIX=	.src

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's|cflags =|cflags = -I${LOCALBASE}/include|; s|libnaji.a|${LOCALBASE}/lib/libnaji.a|' ${WRKSRC}/${MAKEFILE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/najitool ${PREFIX}/bin

.include <bsd.port.mk>
