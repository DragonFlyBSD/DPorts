# $FreeBSD: x11-themes/gnome-icons-dropline-nou/Makefile 327783 2013-09-20 23:54:03Z bapt $

PORTNAME=	dropline-nou
PORTVERSION=	090208
CATEGORIES=	x11-themes gnome
MASTER_SITES=	http://www.silvestre.com.ar/icons/
DISTNAME=	Nou-${PORTVERSION}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Dropline Nou Icons for Gnome

USE_BZIP2=	yes
WRKSRC=		"${WRKDIR}/Nou"

NO_STAGE=	yes
post-extract:
	@${RM} ${WRKSRC}/.icon-theme.cache

.include "${.CURDIR}/../gnome-icons/bsd.gnome-icons.mk"
.include <bsd.port.mk>
