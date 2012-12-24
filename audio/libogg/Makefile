# Created by: t.vanklaveren@student.utwente.nl
# $FreeBSD: ports/audio/libogg/Makefile,v 1.42 2012/12/18 21:34:11 svnexp Exp $

PORTNAME=	libogg
PORTVERSION=	1.3.0
PORTEPOCH=	4
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/ogg/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Ogg bitstream library

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes
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
