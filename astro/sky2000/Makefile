# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: ports/astro/sky2000/Makefile,v 1.5 2013/02/25 11:44:09 svnexp Exp $

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
