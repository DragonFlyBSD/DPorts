# Created by: babak@farrokhi.net
# $FreeBSD: net-mgmt/sjitter/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	sjitter
PORTVERSION=	0.18.1b
CATEGORIES=	net-mgmt net
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/0.18.1/
EXTRACT_SUFX=	.tgz

MAINTAINER=	dikshie@sfc.wide.ad.jp
COMMENT=	A client/server jitter measurement utility

WRKSRC=		${WRKDIR}/${PORTNAME}
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

PLIST_FILES=	sbin/sjitters sbin/sjitterc

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sjitters ${PREFIX}/sbin
	${INSTALL_PROGRAM} ${WRKSRC}/sjitterc ${PREFIX}/sbin

.include <bsd.port.mk>
