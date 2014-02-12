# Created by: hrs
# $FreeBSD$

PORTNAME=	papersize-default
PORTVERSION=	0.0.20120302
CATEGORIES=	print
MASTER_SITES=	# none
PKGNAMESUFFIX=	-${DEFAULTPAPERSIZE:tl}
DISTFILES=	# none

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	A default paper size configuration file for libpaper

LIB_DEPENDS=	paper:${PORTSDIR}/print/libpaper

NO_BUILD=	yes

DEFAULTPAPERSIZE?=	a4
.for P in a4 letter
.if ${DEFAULTPAPERSIZE:tl:M${P}} != ${P}
CONFLICTS+=	papersize-default-${P}-[0-9]*
.endif
.endfor

PLIST_FILES=	etc/papersize

NO_STAGE=	yes
do-install:
	${LN} -s -f papersize.${DEFAULTPAPERSIZE:tl} ${PREFIX}/etc/papersize

.include <bsd.port.mk>
