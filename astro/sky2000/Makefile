# ex:ts=8
# Ports collection makefile for:	sky2000
# Date created:			Apr 16, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/astro/sky2000/Makefile,v 1.4 2012/11/17 05:54:26 svnexp Exp $
#

PORTNAME=	sky2000
PORTVERSION=	0.2
CATEGORIES=	astro
MASTER_SITES=	SF/nova/catalogs/${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A binary representation of the Sky2000 star catalog

GNU_CONFIGURE=	yes

DATADIR=	${PREFIX}/share/nova

post-patch:
	@${REINPLACE_CMD} -e 's,/nova/,/share/nova/,' ${WRKSRC}/configure

.include <bsd.port.mk>
