# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: deskutils/msynctool/Makefile 326070 2013-09-02 19:55:48Z bapt $

PORTNAME=	msynctool
PORTVERSION=	0.22
CATEGORIES=	deskutils
MASTER_SITES=	http://www.opensync.org/download/releases/${PORTVERSION}/

MAINTAINER=	webmaster@kibab.com
COMMENT=	A command line client for the OpenSync framework

LIB_DEPENDS=	opensync.0:${PORTSDIR}/devel/libopensync022

CONFLICTS=	osynctool-[0-9]*

USES=		pkgconfig
USE_BZIP2=	yes
GNU_CONFIGURE=	yes

MAN1=		convcard.1 ${PORTNAME}.1

PLIST_FILES=	bin/convtest \
		bin/convcard \
		bin/${PORTNAME}

.include <bsd.port.mk>
