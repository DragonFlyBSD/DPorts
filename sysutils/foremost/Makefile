# Created by: Yonatan <Yonatan@xpert.com>
# $FreeBSD: sysutils/foremost/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	foremost
PORTVERSION=	1.5.7
CATEGORIES=	sysutils
MASTER_SITES=	http://foremost.sourceforge.net/pkg/

MAINTAINER=	onatan@gmail.com
COMMENT=	Console program to recover files based on their headers and footers

USE_GMAKE=	yes
ALL_TARGET=	freebsd
MAN8=		foremost.8

PLIST_FILES=	bin/foremost etc/foremost.conf.sample

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|gcc|${CC}|; s|-Wall -O2|${CFLAGS}|' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' ${WRKSRC}/config.c
	@${GZCAT} ${WRKSRC}/${MAN8}.gz | ${SED} -e 's|/etc|${PREFIX}/etc|' \
	> ${WRKSRC}/${MAN8}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/foremost.conf ${PREFIX}/etc/foremost.conf.sample
	${INSTALL_MAN} ${WRKSRC}/${MAN8} ${MAN8PREFIX}/man/man8

.include <bsd.port.mk>
