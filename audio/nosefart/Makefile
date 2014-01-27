# Created by: Seth Kingsley <sethk@osd.bsdi.com>
# $FreeBSD: audio/nosefart/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	nosefart
PORTVERSION=	1.92f
PORTREVISION=	1
CATEGORIES=	audio emulators
MASTER_SITES=	SF/${PORTNAME}/OldFiles
DISTNAME=	${PORTNAME}-${PORTVERSION}-mls

MAINTAINER=	sethk@meowfishies.com
COMMENT=	Player for NES Sound Format (NSF)

LICENSE=	GPLv2

USES=		gmake
NO_STAGE=	yes
MAKE_ENV=	INSTALL="${INSTALL}" COPY="${COPY}" STRIP="${STRIP}" \
		BINGRP="${BINGRP}" BINMODE="${BINMODE}" BINOWN="${BINOWN}"

PLIST_FILES=	bin/nosefart

pre-build:
	@${RM} -rf ${BUILD_WRKSRC}/nsfobj

.include <bsd.port.mk>
