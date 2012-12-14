# New ports collection makefile for:	p5-WWW-TWSMS
# Date created:		2006-08-11
# Whom:			Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: ports/www/p5-WWW-TWSMS/Makefile,v 1.6 2012/11/17 06:02:55 svnexp Exp $
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

PERL_CONFIGURE=	yes

MAN3=		WWW::TWSMS.3

.include <bsd.port.mk>
