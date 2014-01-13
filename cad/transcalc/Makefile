# Created by: ijliao
# $FreeBSD: cad/transcalc/Makefile 338184 2013-12-30 22:19:48Z antoine $

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

post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|#CFLAGS=|g' ${WRKSRC}/configure

.include <bsd.port.mk>
