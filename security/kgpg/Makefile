# Created by: Arjan van Leeuwen <avleeuwen@piwebs.com>
# $FreeBSD: security/kgpg/Makefile 315566 2013-03-29 19:33:41Z cs $
#

PORTNAME=		kgpg
PORTVERSION=		1.0.0
PORTREVISION=	12
CATEGORIES=		security kde
MASTER_SITES=		http://developer.kde.org/~kgpg/src/

MAINTAINER=		rick@rptn.net
COMMENT=		Simple KDE frontend for GnuPG

RUN_DEPENDS=		gpgv:${PORTSDIR}/security/gnupg1

CONFLICTS=		kdeutils-3.[2-6].*

USE_GMAKE=		yes
USE_AUTOTOOLS=		libtool
USE_KDELIBS_VER=	3

post-patch:
	@${REINPLACE_CMD} -e "s,-lpthread,${PTHREAD_LIBS},g" ${WRKSRC}/configure

.include <bsd.port.mk>
