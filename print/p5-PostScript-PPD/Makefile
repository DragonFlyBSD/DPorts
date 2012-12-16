# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/print/p5-PostScript-PPD/Makefile,v 1.5 2012/12/04 08:05:58 svnexp Exp $

PORTNAME=	PostScript-PPD
PORTVERSION=	0.0204
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Read PostScript Printer Definition files

PERL_CONFIGURE=	yes

MAN3=		PostScript::PPD.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501000
BUILD_DEPENDS+=	p5-IO-Compress>=2:${PORTSDIR}/archivers/p5-IO-Compress
RUN_DEPENDS+=	p5-IO-Compress>=2:${PORTSDIR}/archivers/p5-IO-Compress
.endif

.include <bsd.port.post.mk>
