# Created by: Doug Barton <dougb@FreeBSD.org>
# $FreeBSD: net-p2p/qbittorrent-nox11/Makefile 332987 2013-11-06 12:55:31Z nemysis $

PKGNAMESUFFIX=	-nox11

COMMENT=	Bittorrent client using libtorrent-rasterbar, web UI version

MASTERDIR=	${.CURDIR}/../qbittorrent

DESCR=		${.CURDIR}/../qbittorrent/pkg-descr
PLIST_FILES+=	bin/qbittorrent-nox \
		man/man1/qbittorrent-nox.1.gz
PLIST=		${NONEXISTENT}

SLAVE_PORT=	yes

OPTIONS_EXCLUDE=	DOCS

.include "${MASTERDIR}/Makefile"
