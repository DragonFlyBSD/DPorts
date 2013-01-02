# $FreeBSD: ports/sysutils/zfstools/Makefile,v 1.4 2012/12/12 02:38:24 svnexp Exp $

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
