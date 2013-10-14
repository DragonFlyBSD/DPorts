# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: audio/libaudiofile/Makefile 328096 2013-09-24 06:24:17Z bapt $

PORTNAME=	libaudiofile
PORTVERSION=	0.2.7
CATEGORIES=	audio
MASTER_SITES=	http://www.68k.org/~michael/audiofile/ \
		ftp://oss.sgi.com/projects/audiofile/download/ \
		GNOME
DISTNAME=	audiofile-${PORTVERSION}

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A sound library for SGI audio file

USE_AUTOTOOLS=	libtool
USES=	pathfix
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CONFLICTS=	osalp-0.7.*

.include <bsd.port.mk>
