# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: audio/modplugplay/Makefile 331591 2013-10-25 14:52:21Z ehaupt $

PORTNAME=	modplugplay
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://gnu.ethz.ch/linuks.mine.nu/modplugplay/ \
		http://critical.ch/distfiles/ \
		http://energy.critical.ch/distfiles/

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Command-line music mod player using libmodplug

LICENSE=	GPLv2

LIB_DEPENDS=	modplug.1:${PORTSDIR}/audio/libmodplug

PLIST_FILES=	bin/modplugplay man/man1/modplugplay.1.gz

CFLAGS+=	-I${LOCALBASE}/include/libmodplug -L${LOCALBASE}/lib
LDFLAGS+=	-lmodplug

do-build:
	${CXX} ${WRKSRC}/${PORTNAME}.c ${CFLAGS} ${LDFLAGS} \
		-o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
