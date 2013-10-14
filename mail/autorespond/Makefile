# Created by: Neil Blakey-Milner <nbm@FreeBSD.org>
# $FreeBSD: mail/autorespond/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	autorespond
PORTVERSION=	2.0.5
CATEGORIES=	mail
MASTER_SITES=	http://www.inter7.com/devel/

PATCH_SITES=	http://people.FreeBSD.org/~roam/ports/patches/mail/
PATCHFILES=	${DISTNAME}-conf-strcasestr.patch

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple autoresponder for qmail

MAN1=		autorespond.1
PLIST_FILES=	bin/autorespond

.if defined(WITHOUT_MDOC_MANPAGE)
AR_MANPAGE=	${WRKSRC}/autorespond.1
.else
AR_MANPAGE=	${FILESDIR}/autorespond.1
.endif

NO_STAGE=	yes
post-patch:
	${ECHO_CMD} "${CC} ${CFLAGS}" > ${WRKSRC}/conf-cc
	${ECHO_CMD} "${CC} ${STRIP}" > ${WRKSRC}/conf-ld
	${ECHO_CMD} "${PREFIX}" > ${WRKSRC}/conf-home

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/autorespond ${PREFIX}/bin/
	${INSTALL_MAN} ${AR_MANPAGE} ${PREFIX}/man/man1/

.include <bsd.port.mk>
