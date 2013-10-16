# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: www/p5-WWW-Google-Calculator/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WWW-Google-Calculator
PORTVERSION=	0.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	This module provide simple interface for Google calculator

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-WWW-Mechanize>=0:${PORTSDIR}/www/p5-WWW-Mechanize
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		WWW::Google::Calculator.3

NO_STAGE=	yes
.include <bsd.port.mk>
