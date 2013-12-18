# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: deskutils/msynctool/Makefile 336190 2013-12-11 18:28:10Z bapt $

PORTNAME=	msynctool
PORTVERSION=	0.22
CATEGORIES=	deskutils
MASTER_SITES=	http://www.opensync.org/download/releases/${PORTVERSION}/

MAINTAINER=	webmaster@kibab.com
COMMENT=	A command line client for the OpenSync framework

LIB_DEPENDS=	libopensync.so:${PORTSDIR}/devel/libopensync022

CONFLICTS=	osynctool-[0-9]*

USES=		pkgconfig
USE_BZIP2=	yes
GNU_CONFIGURE=	yes

MAN1=		convcard.1 ${PORTNAME}.1

PLIST_FILES=	bin/convtest \
		bin/convcard \
		bin/${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.mk>
