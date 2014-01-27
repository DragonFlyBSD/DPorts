# Created by: Craig Leres <leres@ee.lbl.gov>
# $FreeBSD: sysutils/lbl-cf/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cf
PORTVERSION=	1.2.4
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ee.lbl.gov/ \
		http://www.tux.org//pub/net/ftp.ee.lbl.gov/ \
		http://ftp.riken.go.jp/pub/net/lbl/ \
		http://www.ftpdir.hu/ftp.ee.lbl.gov/
PKGNAMEPREFIX=	lbl-

MAINTAINER=	leres@ee.lbl.gov
COMMENT=	Unix time to formated time and date filter

PLIST_FILES=	bin/cf

MAN1=		cf.1

GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-install:
	(cd ${WRKSRC} && make install-man)

.include <bsd.port.mk>
