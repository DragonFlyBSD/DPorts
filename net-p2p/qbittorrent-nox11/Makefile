# Created by: Doug Barton <dougb@FreeBSD.org>
# $FreeBSD: net-p2p/qbittorrent-nox11/Makefile 327758 2013-09-20 22:28:25Z bapt $

PKGNAMESUFFIX=	-nox11

COMMENT=	Bittorrent client using libtorrent-rasterbar, web UI version

MASTERDIR=	${.CURDIR}/../qbittorrent

DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist
PLIST_FILES+=	bin/qbittorrent-nox

MAN1=		qbittorrent-nox.1

QB_NOX_SLAVE=	true

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
