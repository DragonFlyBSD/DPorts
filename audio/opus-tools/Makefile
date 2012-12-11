# $FreeBSD: ports/audio/opus-tools/Makefile,v 1.7 2012/11/17 05:54:40 svnexp Exp $

PORTNAME=	opus-tools
PORTVERSION=	0.1.5
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/opus/ \
		https://ftp.mozilla.org/pub/mozilla.org/opus/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Encode, inspect, and decode Opus files

LIB_DEPENDS=	ogg.8:${PORTSDIR}/audio/libogg \
		opus:${PORTSDIR}/audio/opus

GNU_CONFIGURE=	yes
USE_PKGCONFIG=	yes
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/opusdec bin/opusenc bin/opusinfo
MAN1=		opusdec.1 opusenc.1 opusinfo.1

.include <bsd.port.mk>
