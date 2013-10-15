# Created by: mich@FreeBSD.org
# $FreeBSD: net-mgmt/rate/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	rate
PORTVERSION=	0.9
CATEGORIES=	net-mgmt
MASTER_SITES=	http://s-tech.elsat.net.pl/bmtools/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	A traffic analysis command-line utility

MAKE_ARGS=	${MAKE_ENV}
LDFLAGS+=	-lcompat
CFLAGS+=	-DOPEN_BSD=1 -DHAVE_REGEX -DSTREAM_ANALYZER -DIOCTL_GETWINSIZE -DAUTOSENSE_DLH

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/rate ${PREFIX}/bin/rate
	${INSTALL_MAN} ${WRKSRC}/doc/rate.1 ${PREFIX}/man/man1

MAN1=		rate.1
PLIST_FILES=	bin/rate

.include <bsd.port.mk>
