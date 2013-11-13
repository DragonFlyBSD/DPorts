# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: astro/sky2000/Makefile 331586 2013-10-25 14:04:57Z vanilla $

PORTNAME=	sky2000
PORTVERSION=	0.2
CATEGORIES=	astro
MASTER_SITES=	SF/nova/catalogs/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Binary representation of the Sky2000 star catalog

GNU_CONFIGURE=	yes

DATADIR=	${PREFIX}/share/nova

post-patch:
	@${REINPLACE_CMD} -e 's,/nova/,/share/nova/,' ${WRKSRC}/configure

.include <bsd.port.mk>
