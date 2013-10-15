# $FreeBSD: x11-themes/cursor-dmz-theme/Makefile 327783 2013-09-20 23:54:03Z bapt $

PORTNAME=	cursor-dmz-theme
PORTVERSION=	0.3
PORTREVISION=	2
CATEGORIES=	x11-themes
MASTER_SITES=	http://jimmac.musichall.cz/zip/
DISTNAME=	vanilla-dmz-${PORTVERSION}

MAINTAINER=	flz@FreeBSD.org
COMMENT=	The DMZ style neutral scalable cursor theme

USE_BZIP2=	yes
NO_BUILD=	yes

WRKSRC=		${WRKDIR}

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/lib/X11/icons/Vanilla-DMZ/cursors
	cd ${WRKSRC}/Vanilla-DMZ/cursors \
		&& ${FIND} * | ${CPIO} -pdmu ${PREFIX}/lib/X11/icons/Vanilla-DMZ/cursors

.include <bsd.port.mk>
