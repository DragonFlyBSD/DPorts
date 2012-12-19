# Ports collection makefile for:	zfstools
# Date created:				26 April 2012
# Whom:					Bryan Drewery <bryan@shatow.net>
#
# $FreeBSD: ports/sysutils/zfstools/Makefile,v 1.3 2012/11/17 06:01:51 svnexp Exp $

PORTNAME=	zfstools
PORTVERSION=	0.2.1
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	OpenSolaris-compatible auto snapshotting

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/zfs-auto-snapshot \
		bin/zfs-cleanup-snapshots \
		bin/zfs-snapshot-mysql

.include <bsd.port.mk>
