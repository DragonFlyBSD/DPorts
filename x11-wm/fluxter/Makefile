# Created by: Adam Weinberger
# $FreeBSD: x11-wm/fluxter/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	fluxter
PORTVERSION=	0.2.0
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.hydrus.org.uk/downloads/

MAINTAINER=	jgh@FreeBSD.org
COMMENT=	Desktop pager for the Fluxbox Slit

USE_XORG=	x11 ice xproto xt xaw xext
GNU_CONFIGURE=	yes
USES=		gmake

post-patch:
	@${REINPLACE_CMD} -e "s|/fluxbox|/${PORTNAME}|g" \
		${WRKSRC}/Makefile.in ${WRKSRC}/data/README.fluxter \
		${WRKSRC}/data/Makefile.in

.include <bsd.port.mk>
