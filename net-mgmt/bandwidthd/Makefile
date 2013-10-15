# Created by: Clement Laforet <sheepkiller@cultdeadsheep.org>
# $FreeBSD: net-mgmt/bandwidthd/Makefile 327710 2013-09-20 15:58:09Z bdrewery $

PORTNAME=	bandwidthd
PORTVERSION=	2.0.1
PORTREVISION=	6
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	Tracks bandwidth usage by IP address

LICENSE=	GPLv2

LIB_DEPENDS+=	gd:${PORTSDIR}/graphics/gd

USE_CSTD=	gnu89
NO_STAGE=	yes

GNU_CONFIGURE=	YES
USES=		iconv gmake

post-install:
	@${INSTALL_SCRIPT} ${FILESDIR}/bandwidthd.sh \
				${PREFIX}/etc/rc.d/bandwidthd.sh.sample

.include <bsd.port.mk>
