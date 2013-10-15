# Created by: Jim Mock <jim@FreeBSD.org>
# $FreeBSD: deskutils/wmpinboard/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	wmpinboard
PORTVERSION=	1.0
PORTREVISION=	5
CATEGORIES=	deskutils afterstep windowmaker
MASTER_SITES=	${MASTER_SITE_DEBIAN_POOL}
DISTNAME=	${PORTNAME}_${PORTVERSION}.orig

MAINTAINER=	t.kempka@web.de
COMMENT=	Post-it notes for the WindowMaker dock or AfterStep Wharf

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}.orig

USE_XORG=	xpm
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKE_ARGS=	ACLOCAL="${TRUE}" AUTOCONF="${TRUE}" AUTOMAKE="${TRUE}" \
		AUTOHEADER="${TRUE}"

MAN1=		wmpinboard.1

PLIST_FILES=	bin/wmpinboard

NO_STAGE=	yes
.include <bsd.port.mk>
