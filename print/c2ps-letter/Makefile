# New ports collection makefile for:   c2ps (letter)
# Date created:        19 March 1997
# Whom:                Matthew Hunt <mph@pobox.com>
#
# $FreeBSD: ports/print/c2ps-letter/Makefile,v 1.17 2012/11/17 06:00:48 svnexp Exp $
#

PORTNAME=	c2ps-${PAPERSIZE}
PORTVERSION=	4.0
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	http://www.cs.technion.ac.il/users/c2ps/
DISTNAME=	c2ps-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A PostScript pretty-printer for C source

MAKE_ARGS=	CC="${CC}" CCFLAGS="${CFLAGS}" PREFIX="${PREFIX}" \
		DEFAULT_PAPER_TYPE="${PS}"

MAN1=		c2ps.1
PLIST_FILES=	bin/c2ps

PAPERSIZE?=	letter
PS!=		echo ${PAPERSIZE} | awk '{print toupper($$1)}'
.if ${PAPERSIZE:tl} != a4 && ${PAPERSIZE:tl} != letter
.BEGIN:
	@${ECHO_MSG} "Invalid value for PAPERSIZE: \"${PAPERSIZE}\""
	@${ECHO_MSG} "Possible values are:  a4, and letter."
	@${FALSE}
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/c2ps ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/c2ps.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
