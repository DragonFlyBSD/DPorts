# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: www/p5-WWW-TWSMS/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WWW-TWSMS
PORTVERSION=	0.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	A Perl interface for sending sms by TWSMS

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		WWW::TWSMS.3

NO_STAGE=	yes
.include <bsd.port.mk>
