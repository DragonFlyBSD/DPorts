# New ports collection makefile for:	libvorbis
# Date created:				18 October 2000
# Whom:					t.vanklaveren@student.utwente.nl
#
# $FreeBSD: ports/audio/libvorbis/Makefile,v 1.47 2012/11/17 05:54:36 svnexp Exp $
#

PORTNAME=	libvorbis
PORTVERSION=	1.3.3
PORTREVISION=	1
PORTEPOCH=	3
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/vorbis/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Audio compression codec library

LIB_DEPENDS=	ogg:${PORTSDIR}/audio/libogg

USE_AUTOTOOLS=	libtool
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes
USE_XZ=		yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-ogg=${LOCALBASE} \
		--disable-docs		# don't rebuild
MAKE_JOBS_SAFE=	yes

.if defined(NOPORTDOCS)
MAKE_ENV=	DOC=""
.else
MAKE_ENV=	DOC=doc
.endif

regression-test: build
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} check

.include <bsd.port.mk>
