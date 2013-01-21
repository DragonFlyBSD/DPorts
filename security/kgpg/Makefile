# New ports collection makefile for:	kgpg
# Date created:				15 Nov 2002
# Whom:					Arjan van Leeuwen <avleeuwen@piwebs.com>
#
# $FreeBSD: ports/security/kgpg/Makefile,v 1.30 2012/11/17 06:01:06 svnexp Exp $
#

PORTNAME=		kgpg
PORTVERSION=		1.0.0
PORTREVISION=	12
CATEGORIES=		security kde
MASTER_SITES=		http://developer.kde.org/~kgpg/src/

MAINTAINER=		rick@rptn.net
COMMENT=		A simple KDE frontend for GnuPG

RUN_DEPENDS=		gpgv:${PORTSDIR}/security/gnupg1

CONFLICTS=		kdeutils-3.[2-6].*

USE_GMAKE=		yes
USE_AUTOTOOLS=		libtool
USE_KDELIBS_VER=	3

post-patch:
	@${REINPLACE_CMD} -e "s,-lpthread,${PTHREAD_LIBS},g" ${WRKSRC}/configure

.include <bsd.port.mk>
