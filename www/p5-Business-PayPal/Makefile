# Created by: Steven Kreuzer
# $FreeBSD: www/p5-Business-PayPal/Makefile 320170 2013-06-07 07:53:09Z az $

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

.include <bsd.port.mk>
