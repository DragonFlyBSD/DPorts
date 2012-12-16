# New ports collection makefile for:	p5-Business-PayPal
# Date created:				Fri 29 Sep 2006
# Whom:					Steven Kreuzer
#
# $FreeBSD: ports/www/p5-Business-PayPal/Makefile,v 1.14 2012/11/17 06:02:45 svnexp Exp $
#

PORTNAME=	Business-PayPal
PORTVERSION=	0.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl extension for automating PayPal transactions

RUN_DEPENDS=	p5-Net-SSLeay>=1.35:${PORTSDIR}/security/p5-Net-SSLeay \
		p5-CGI.pm>=3.49:${PORTSDIR}/www/p5-CGI.pm
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Business::PayPal.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500703
RUN_DEPENDS+=	p5-Digest-MD5>=2.16:${PORTSDIR}/security/p5-Digest-MD5
.endif

.include <bsd.port.post.mk>
