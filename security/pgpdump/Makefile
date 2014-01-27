# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: security/pgpdump/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pgpdump
PORTVERSION=	0.28
CATEGORIES=	security
MASTER_SITES=	http://www.mew.org/~kazu/proj/pgpdump/

MAINTAINER=	kaoru@kaisei.org
COMMENT=	PGP packet visualizer

GNU_CONFIGURE=	yes
MAKE_ARGS=	CFLAGS="${CFLAGS}"

MAN1=		pgpdump.1
PLIST_FILES=	bin/pgpdump

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pgpdump ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pgpdump.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
