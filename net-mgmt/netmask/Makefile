# Created by: Mike Bristow <mike@urgle.com>
# $FreeBSD: net-mgmt/netmask/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	netmask
PORTVERSION=	2.4
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://trap.mtview.ca.us/~talby/ \
		${MASTER_SITE_DEBIAN}
MASTER_SITE_SUBDIR=	pool/main/n/netmask/
DISTNAME=	netmask_${PORTVERSION}

MAINTAINER=	mike@urgle.com
COMMENT=	Tool for generating terse netmasks in several common formats

WRKSRC=		${WRKDIR}/${DISTNAME:S/_/-/}
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

MAN1=		netmask.1
INFO=		netmask
PLIST_FILES=	bin/netmask

NO_STAGE=	yes
.include <bsd.port.mk>
