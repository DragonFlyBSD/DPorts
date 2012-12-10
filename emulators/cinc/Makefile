# New ports collection makefile for:	cinc
# Date created:		28 May 2002
# Whom:			verm@drunkmonk.net
#
# $FreeBSD: ports/emulators/cinc/Makefile,v 1.7 2012/11/17 05:57:20 svnexp Exp $
#

PORTNAME=	cinc
PORTVERSION=	2.1.3
PORTREVISION=	1
CATEGORIES=	emulators
MASTER_SITES=	SF/${PORTNAME}/OldFiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bell Laboratories cardiac computer emulator

GNU_CONFIGURE=	yes
USE_GMAKE=	yes

PLIST_FILES=	bin/cinc \
		bin/casm

post-patch:
	@${REINPLACE_CMD} 's|-I-||g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
