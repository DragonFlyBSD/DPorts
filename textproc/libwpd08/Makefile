# New ports collection makefile for:    libwpd
# Date created:         Mon May 19 09:09:10 PDT 2003
# Whom:                 reed@pugetsoundtechnology.com
#
# $FreeBSD: textproc/libwpd08/Makefile 324744 2013-08-14 22:35:50Z ak $
#

PORTNAME=	libwpd
PORTVERSION=	0.8.14
PORTREVISION=	4
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Tools for importing and exporting WordPerfect(tm) documents

LATEST_LINK=	${PORTNAME}08

LICENSE=	LGPL21

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack libgsf
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=--without-docs

post-patch:
	@${REINPLACE_CMD} -E '/^SUBDIRS = /s/conv//g' ${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
