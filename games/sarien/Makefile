# Created by: Radim Kolar
# $FreeBSD: games/sarien/Makefile 333405 2013-11-10 15:25:39Z danilo $

PORTNAME=	sarien
PORTVERSION=	0.7.0
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sierra AGI games interpreter

GNU_CONFIGURE=	yes
USES=		gmake
USE_XORG=	x11
MAKE_JOBS_UNSAFE=	yes

CFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES=	bin/sarien etc/sarien.conf

post-patch:
	@${REINPLACE_CMD} -e "s,%%PREFIX%%,${PREFIX},g" ${WRKSRC}/src/filesys/unix/path.c

do-install:
	${INSTALL} ${WRKSRC}/bin/sarien ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/etc/sarien.cfg ${STAGEDIR}${PREFIX}/etc/sarien.conf

.include <bsd.port.mk>
