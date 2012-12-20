# New ports collection makefile for:	OpenCA-REQ
# Date created:	   02 June 2002
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/security/p5-OpenCA-REQ/Makefile,v 1.7 2012/11/17 06:01:13 svnexp Exp $
#

PORTNAME=	OpenCA-REQ
PORTVERSION=	0.9.52
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to easily manage Cert REQUESTs

BUILD_DEPENDS=	p5-X500-DN>=0:${PORTSDIR}/net/p5-X500-DN
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		OpenCA::REQ.3

post-patch:
	@${MV} ${WRKSRC}/prova.pl  ${WRKSRC}/prova.pl.sample

.include <bsd.port.mk>
