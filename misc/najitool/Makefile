# Created by: NECDET COKYAZICI <cokyazici@yahoo.co.uk>
# $FreeBSD: misc/najitool/Makefile 341058 2014-01-25 16:57:05Z miwi $

PORTNAME=	najitool
PORTVERSION=	0.8.4
DISTVERSIONSUFFIX=	.src
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generates, converts, and filters files

BUILD_DEPENDS=	${LOCALBASE}/lib/libnaji.a:${PORTSDIR}/devel/libnaji

PLIST_FILES=	bin/najitool

post-patch:
	@${REINPLACE_CMD} -e \
		'/^cc/s|=.*|= $${CC}| ; \
		 /^ld/s|=.*|= $${CC}| ; \
		 /^cflags/s|=.*|= $${CFLAGS} -I$${LOCALBASE}/include| ; \
		 s| libnaji.a| $${LOCALBASE}/lib/libnaji.a|' \
		${WRKSRC}/${MAKEFILE}

do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} najitool ${STAGEDIR}${PREFIX}/bin)

.include <bsd.port.mk>
