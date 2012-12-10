# New ports collection makefile for:	netmask
# Date created:				19 Novemver 2000
# Whom:					Mike Bristow <mike@urgle.com>
# $FreeBSD: ports/net-mgmt/netmask/Makefile,v 1.10 2012/11/17 06:00:34 svnexp Exp $

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

.include <bsd.port.mk>
