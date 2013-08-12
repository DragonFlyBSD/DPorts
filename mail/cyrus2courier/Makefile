# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: mail/cyrus2courier/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=	cyrus2courier
DISTVERSION=	1.4
CATEGORIES=	mail
MASTER_SITES=	http://www.madness.at/~mad/projects/ \
		CRITICAL
EXTRACT_SUFX=	.tgz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Cyrus-IMAP to Maildir++ conversion utility

ALL_TARGET=	build

PLIST_FILES=	bin/cyrus2courier

post-patch:
	@${REINPLACE_CMD} '/^CFLAGS*/d; /^LDFLAGS*/d; /^CC*/d' \
		${WRKSRC}/src/Makefile.FreeBSD

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
