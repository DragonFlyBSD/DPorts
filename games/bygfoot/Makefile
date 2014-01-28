# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: games/bygfoot/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	bygfoot
PORTVERSION=	2.2.1
PORTREVISION=	7
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}-source

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Football (soccer) management game

# needed to save/load games
RUN_DEPENDS=	zip:${PORTSDIR}/archivers/zip \
		unzip:${PORTSDIR}/archivers/unzip

USES=		pkgconfig
GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_GNOME=	gtk20
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS} -lm

.include <bsd.port.mk>
