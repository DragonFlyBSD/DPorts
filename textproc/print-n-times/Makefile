# New ports collection makefile for:	print-n-times
# Date created:                		August 03 2004
# Whom:                        		Aaron Straup Cope
# $FreeBSD: ports/textproc/print-n-times/Makefile,v 1.5 2012/11/17 06:02:16 svnexp Exp $

PORTNAME=	print-n-times
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://aaronland.info/xsl/string/print-n-times/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Print a string (n) times

NO_BUILD=	yes

do-install:
	@${ECHO} "Installing in ${PREFIX}/share/xsl/string/"
	@${MKDIR} ${PREFIX}/share/xsl/string
	@${CP} ${WRKSRC}/*.xsl ${PREFIX}/share/xsl/string/

.include <bsd.port.mk>
