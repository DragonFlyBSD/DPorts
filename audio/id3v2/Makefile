# Created by: David MacKenzie <djm@pix.net>
# $FreeBSD: audio/id3v2/Makefile 327706 2013-09-20 14:36:35Z bapt $

PORTNAME=	id3v2
PORTVERSION=	0.1.12
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command line id3v2 tag editor

LIB_DEPENDS=	id3-3.8.3:${PORTSDIR}/audio/id3lib

MAKE_JOBS_UNSAFE=	yes
NO_STAGE=	yes

MAN1=		id3v2.1
PLIST_FILES=	bin/id3v2

.include <bsd.port.mk>
