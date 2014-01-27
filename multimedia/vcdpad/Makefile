# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: multimedia/vcdpad/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	vcdpad
PORTVERSION=	0.8
PORTREVISION=	2
CATEGORIES=	multimedia
MASTER_SITES=	http://www.nocrew.org/software/vcdpad/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	Program to pad vcd mpegs

PLIST_FILES=	bin/vcdpad
USES=		gmake

post-patch:
	@${REINPLACE_CMD} -e 's,$$(PREFIX),$$(DESTDIR)$$(PREFIX),' ${WRKSRC}/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
