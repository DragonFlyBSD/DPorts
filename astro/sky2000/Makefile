# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: astro/sky2000/Makefile 327701 2013-09-20 13:14:04Z bapt $

PORTNAME=	sky2000
PORTVERSION=	0.2
CATEGORIES=	astro
MASTER_SITES=	SF/nova/catalogs/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Binary representation of the Sky2000 star catalog

GNU_CONFIGURE=	yes
NO_STAGE=	yes

DATADIR=	${PREFIX}/share/nova

post-patch:
	@${REINPLACE_CMD} -e 's,/nova/,/share/nova/,' ${WRKSRC}/configure

.include <bsd.port.mk>
