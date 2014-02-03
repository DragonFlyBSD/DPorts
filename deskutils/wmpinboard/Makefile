# Created by: Jim Mock <jim@FreeBSD.org>
# $FreeBSD: deskutils/wmpinboard/Makefile 342326 2014-02-02 16:04:41Z miwi $

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
USES=		gmake
GNU_CONFIGURE=	yes
MAKE_ARGS=	ACLOCAL="${TRUE}" AUTOCONF="${TRUE}" AUTOMAKE="${TRUE}" \
		AUTOHEADER="${TRUE}"


PLIST_FILES=	bin/wmpinboard \
		man/man1/wmpinboard.1.gz

.include <bsd.port.mk>
