# Created by: ijliao
# $FreeBSD: cad/transcalc/Makefile 327711 2013-09-20 15:58:41Z bapt $

PORTNAME=	transcalc
PORTVERSION=	0.14
PORTREVISION=	11
CATEGORIES=	cad
MASTER_SITES=	http://transcalc.sourceforge.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A analysis and synthesis tool for RF and microwave transmission lines

USES=		pkgconfig
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes

MAN1=	transcalc.1

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|#CFLAGS=|g' ${WRKSRC}/configure

.include <bsd.port.mk>
