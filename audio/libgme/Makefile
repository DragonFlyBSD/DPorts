# New ports collection makefile for:	libgme
# Date created:				9 May 2010
# Whom:					Anonymous
#
# $FreeBSD: ports/audio/libgme/Makefile,v 1.4 2012/11/17 05:54:36 svnexp Exp $
#

PORTNAME=	libgme
PORTVERSION=	0.5.5
CATEGORIES=	audio
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	${PROJECTHOST}-${PORTVERSION}
EXTRACT_SUFX=	.tbz2

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A collection of video game music emulators

LICENSE=	LGPL21 LGPL3
LICENSE_COMB=	dual
LICENSE_FILE_LGPL21=${WRKSRC}/license.txt

PROJECTHOST=	game-music-emu
USE_DOS2UNIX=	yes
USE_BZIP2=	yes
USE_CMAKE=	yes
USE_LDCONFIG=	yes

# XXX: dialog(1) doesn't like ^M in LICENSE_FILE
post-extract:	patch-dos2unix

.include <bsd.port.mk>
