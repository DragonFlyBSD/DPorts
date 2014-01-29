# Created by: Andrey A. Chernov <ache@FreeBSD.org>
# $FreeBSD: sysutils/less/Makefile 339651 2014-01-14 00:28:32Z garga $

PORTNAME=	less
PORTVERSION=	458
CATEGORIES=	sysutils
MASTER_SITES=	http://www.greenwoodsoftware.com/%SUBDIR%/ \
		${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	less

MAINTAINER=	jharris@widomaker.com
COMMENT=	Better pager utility

LICENSE=	GPLv3

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/less bin/lesskey bin/lessecho \
		man/man1/less.1.gz man/man1/lesskey.1.gz \
		man/man1/lessecho.1.gz

OPTIONS_DEFINE=	COLORS
COLORS_DESC=	Enable colors support via escape sequence

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCOLORS}
CPPFLAGS+=	-DCOLOR_LESS

pre-fetch:
	@${ECHO_MSG} "Making a color version of less."
.endif

.include <bsd.port.mk>
