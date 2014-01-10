# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: net-mgmt/p5-BigIP-iControl/Makefile 338788 2014-01-05 15:44:11Z az $

PORTNAME=	BigIP-iControl
PORTVERSION=	0.095
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Perl interface to the F5 iControl API

RUN_DEPENDS=	p5-SOAP-Lite>=0:${PORTSDIR}/net/p5-SOAP-Lite \
		p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
