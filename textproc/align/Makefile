# ex:ts=8
# New ports collection makefile for:	align
# Date created:			Oct 30, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/textproc/align/Makefile,v 1.17 2012/12/04 21:46:37 svnexp Exp $
#

PORTNAME=	align
PORTVERSION=	1.7.1
CATEGORIES=	textproc
MASTER_SITES=	http://www.cs.indiana.edu/~kinzler/align/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Text column alignment filter

USE_PERL5=	yes

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local/bin|${PREFIX}/bin|g' ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's|/usr/bin/perl|${PERL}|g' ${WRKSRC}/*

.include <bsd.port.mk>
