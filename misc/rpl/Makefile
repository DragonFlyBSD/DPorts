# Created by: Michael L. Hostbaek (mich@freebsdcluster.org)
# $FreeBSD: misc/rpl/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	rpl
PORTVERSION=	1.4.1
CATEGORIES=	misc
MASTER_SITES=	http://downloads.laffeycomputer.com/current_builds/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Rpl is a Unix text replacement utility

GNU_CONFIGURE=	yes

MAN1=		rpl.1
PLIST_FILES=	bin/rpl

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/rpl ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/man/rpl.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
