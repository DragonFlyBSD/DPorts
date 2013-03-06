# New ports collection makefile for:	ktextdecode
# Date created:				08.05.2003
# Whom:					Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/converters/ktextdecode/Makefile,v 1.28 2013/02/08 03:24:27 svnexp Exp $

PORTNAME=	ktextdecode
PORTVERSION=	3.0
PORTREVISION=	10
CATEGORIES=	converters kde
MASTER_SITES=	http://osmirrors.cerias.purdue.edu/pub/FreeBSD/ports/local-distfiles/markus/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The simple text conversion utility for KDE 3

DEPRECATED=	Depends on QT3; unmaintained
EXPIRATION_DATE=	2013-07-01

USE_BZIP2=	yes
USE_KDELIBS_VER=3
USE_AUTOTOOLS=	libtool
USE_GMAKE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g' \
		${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
