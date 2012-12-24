# Created by: t.vanklaveren@student.utwente.nl
# $FreeBSD: ports/audio/libvorbis/Makefile,v 1.48 2012/12/18 21:34:11 svnexp Exp $

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

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
MAKE_ENV=	DOC=doc
.else
MAKE_ENV=	DOC=""
.endif

regression-test: build
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} check

.include <bsd.port.mk>
