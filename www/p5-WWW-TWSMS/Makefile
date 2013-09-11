# New ports collection makefile for:	p5-WWW-TWSMS
# Date created:		2006-08-11
# Whom:			Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: www/p5-WWW-TWSMS/Makefile 326033 2013-09-02 16:56:12Z az $
#

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

.include <bsd.port.mk>
